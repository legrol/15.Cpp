/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-28 07:53:49 by rdel-olm          #+#    #+#             */
/*   Updated: 2025-04-28 07:53:49 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
 
static bool is_number(const std::string& str)
{
	if (str.empty())
		return false;

	size_t i = 0;
	if (str[0] == '-')
		i = 1;

	if (i == str.length())
		return false;

	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}

static int apply_operator(int a, int b, char op)
{
	if (op == '+')
		return a + b;
	else if (op == '-')
		return a - b;
	else if (op == '*')
		return a * b;
	else if (op == '/')
	{
		if (b == 0)
			throw std::runtime_error(RED ERR RESET CYAN VALDIV RESET);
		return a / b;
	}
	else
	{
		throw std::runtime_error(RED ERR RESET CYAN VALDIV RESET);
	}
}

static int string_to_int(const std::string& str)
{
	std::istringstream iss(str);
	int value;
	iss >> value;

	if (iss.fail() || !iss.eof())
		throw std::runtime_error(RED ERR RESET CYAN INVNBR RESET);

	return value;
}

static void evaluate_token(std::stack<int>& stack, const std::string& token)
{
	if (is_number(token))
	{
		int num = string_to_int(token);
		stack.push(num);
	}
	else if (token.length() == 1 && (token[0] == '+' || token[0] == '-' || \
		token[0] == '*' || token[0] == '/'))
	{
		if (stack.size() < 2)
			throw std::runtime_error(RED ERR RESET CYAN INSOP RESET);

		int b = stack.top();
		stack.pop();
		int a = stack.top();
		stack.pop();
		stack.push(apply_operator(a, b, token[0]));
	}
	else if (token.find('(') != std::string::npos || token.find(')') \
	!= std::string::npos)
	{
		throw std::runtime_error(RED ERR RESET CYAN PARNOAL RESET);
	}
	else
	{
		throw std::runtime_error(RED ERR RESET CYAN INVTK RESET);
	}
}

void RPN(const std::string& input)
{
	std::istringstream iss(input);
	std::string token;
	std::stack<int> stack;
	int operand_count = 0;
	int operator_count = 0;

	while (iss >> token)
	{
		if (is_number(token))
			operand_count++;
		else
			operator_count++;
			
		evaluate_token(stack, token);
	}

	if (stack.size() != 1)
		throw std::runtime_error(RED ERR RESET CYAN INVEXP RESET);
	if (operator_count == 0)
		throw std::runtime_error(RED ERR RESET CYAN NOOPS RESET);

	std::cout << GREEN << stack.top() << RESET << std::endl;
}
