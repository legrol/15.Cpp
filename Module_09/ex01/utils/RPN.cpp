/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 07:53:49 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/05/03 20:41:14 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

/**
 * @brief static bool is_number(const std::string& str)
 *
 * Checks whether the given string is a valid integer number.
 * Allows optional negative sign at the beginning.
 *
 * @param str 							The string to check.
 * @return true 						if the string represents a valid 
 * 										integer number, false otherwise.
 * 
 * 
 * @brief static int apply_operator(int a, int b, char op)
 *
 * Applies a binary arithmetic operator to two integers.
 * Supported operators: '+', '-', '*', '/'.
 * Throws an exception if division by zero occurs or if the operator is 
 * invalid.
 *
 * @param a 							The left-hand operand.
 * @param b 							The right-hand operand.
 * @param op 							The operator character.
 * @return 								The result of the operation.
 * @throws std::runtime_error 			if division by zero or invalid 
 * 										operator.
 * 
 * 
 * @brief static int string_to_int(const std::string& str)
 *
 * Converts a string to an integer using istringstream.
 * Throws an exception if the string contains invalid characters or fails 
 * to convert.
 *
 * @param str 							The string to convert.
 * @return 								The converted integer value.
 * @throws std::runtime_error 			if the conversion fails.
 * 
 * 
 * @brief static void evaluate_token(std::stack<int>& stack, const 
 * std::string& token)
 *
 * Evaluates a single token in the RPN expression. If it’s a number, it 
 * is pushed to the stack.
 * If it’s an operator, it pops two operands and applies the operator.
 * Throws exceptions for invalid syntax, parentheses, floats, or 
 * insufficient operands.
 *
 * @param stack 						The stack used in RPN evaluation.
 * @param token 						The current token to evaluate.
 * @throws std::runtime_error 			for invalid input, float literals,
 * 										or syntax errors.
 * 
 * 
 * @brief void RPN(const std::string& input)
 *
 * Evaluates a full Reverse Polish Notation expression.
 * Parses the expression, checks for invalid formats, processes tokens,
 * and outputs the result. Verifies operand/operator count consistency.
 *
 * @param input 						The full RPN expression string.
 * @throws std::runtime_error 			for syntax errors, invalid tokens, 
 * 										or malformed expressions.
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
	if (token.find('.') != std::string::npos)
	{
		throw std::runtime_error(RED ERR RESET CYAN FLTNOTALLOW RESET);
	}
	else if (is_number(token))
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
	bool first_token = true;

	while (iss >> token)
	{
		if (is_number(token))
			operand_count++;
		else if (token.length() == 1 && (token[0] == '+' || token[0] == '-' \
			|| token[0] == '*' || token[0] == '/'))
			operator_count++;
		
		if (first_token)
		{
			first_token = false;
			if (token.length() == 1 && (token[0] == '+' || token[0] == '-' || \
										token[0] == '*' || token[0] == '/'))
			{
				throw std::runtime_error(RED ERR RESET CYAN NOFRSTOP RESET);
			}
		}

		evaluate_token(stack, token);
	}

	if (stack.size() != 1)
		throw std::runtime_error(RED ERR RESET CYAN INVEXP RESET);
	if (operator_count == 0)
		throw std::runtime_error(RED ERR RESET CYAN NOOPS RESET);

	std::cout << GREEN << stack.top() << RESET << std::endl;
}
