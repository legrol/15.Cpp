/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:33:59 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/03/30 21:04:30 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

/**
 * @brief ScalarConverter::ScalarConverter()
 *
 * Default constructor for ScalarConverter. As this class only contains static
 * members and methods, no specific initialization is required.
 * 
 * 
 * @brief ScalarConverter::ScalarConverter(const ScalarConverter &copy)
 *
 * Copy constructor for ScalarConverter. Since the class has no data members,
 * this function simply ignores the input parameter.
 *
 * @param copy 						Unused instance of ScalarConverter.
 * 
 * 
 * @brief ScalarConverter::operator=(const ScalarConverter &origin)
 *
 * Assignment operator overload. No actual assignment occurs since the class
 * has no member variables.
 *
 * @param origin 					Unused instance of ScalarConverter.
 * @return 							Reference to the current ScalarConverter 
 * 									instance.
 * 
 * 
 * @brief ScalarConverter::~ScalarConverter()
 *
 * Destructor for ScalarConverter. No resources to free.
 * 
 * 
 * @brief enum Type
 *
 * Enumerates the possible types of scalar values that can be identified
 * and converted by ScalarConverter.
 *
 * - INT: Integer values.
 * - FLOAT: Floating point values with 'f' suffix.
 * - DOUBLE: Double-precision floating point values.
 * - CHAR: Single character values.
 * - PSEUDO: Pseudo-literals like "nan", "+inf", "-inf", etc.
 * - ERROR: Represents an unrecognized or invalid input.
 * 
 * 
 * @brief bool isPseudo(const std::string &inputString)
 *
 * Checks whether the given string is a recognized pseudo-literal.
 * Pseudo-literals include values such as "nan", "+inf", "-inf" with or 
 * without 'f'.
 *
 * @param inputString 				The string to check.
 * @return true 					if the string is a pseudo-literal, false 
 * 									otherwise.
 * 
 * 
 * @brief void pseudo(Type destType, const std::string &pseudoInput)
 *
 * Prints formatted output for pseudo-literals based on the target scalar type.
 * Handles both float and double pseudo-representations.
 *
 * @param destType 					The type to which the pseudo-literal is 
 * 									being converted (FLOAT or DOUBLE).
 * @param pseudoInput 				The pseudo-literal string to be displayed.
 * 
 * 
 * 
 * @brief void printChar(char c)
 *
 * Prints the given character as multiple scalar types.
 * Displays the character as `char`, `int`, `float`, and `double`.
 *
 * @param c 						The character to be printed.
 * 
 * 
 * @brief bool isChar(const std::string &inputString)
 *
 * Determines whether the input string represents a single printable character.
 * Rejects digits, strings longer than 1 character, or non-displayable values.
 *
 * @param inputString 				The input string to check.
 * @return true 					if it is a valid displayable character, 
 * 									false otherwise.
 * 
 * 
 * @brief void printDouble(double nbr)
 *
 * Prints a `double` value as its corresponding char, int, float, and double 
 * representations.
 * Handles edge cases such as out-of-range characters and non-displayable 
 * characters.
 *
 * @param nbr 						The double value to print.
 * 
 * 
 * @brief double ft_atod(const std::string &inputString)
 *
 * Converts a string to a `double` using `strtod`.
 * If the conversion fails due to invalid characters or out-of-range values, 
 * an error is printed and the macro RETURN_ERR_0D() is called.
 *
 * @param inputString				The input string to convert.
 * @return 							The converted double value.
 * 
 * 
 * @brief bool isDouble(const std::string &inputString)
 *
 * Checks whether the input string is a valid representation of a `double` 
 * value.
 * Validates correct format, including handling of optional signs and only 
 * one decimal point.
 *
 * @param inputString 				The string to check.
 * @return true 					if the string is a valid double, false 
 * 									otherwise.
 * 
 * 
 * @brief static void printFloat(float nbr)
 *
 * Prints a float value as various scalar types.
 *
 * Converts the given float to char, int, double and prints them.
 * Handles out-of-range values for displayable characters and prints
 * appropriate messages when characters are not displayable.
 *
 * @param nbr 						The float value to convert and display. 
 * 
 * 
 * @brief static float ft_atof(const std::string &inputString)
 *
 * Converts a string to a float value.
 *
 * Uses strtof to convert a C++ string to a float. It also validates
 * that the conversion is valid, checking for out-of-range values or
 * invalid characters. On error, it prints an error message and returns 0.
 *
 * @param inputString				The input string representing a float 
 * 									number.
 * @return 							The converted float value.
 * 
 * 
 * @brief static bool isFloat(const std::string &inputString)
 *
 * Checks if a string is a valid float literal.
 *
 * Validates that the string is properly formatted to represent
 * a float value (including decimal point and ending with 'f').
 * Also accounts for special float pseudo-literals.
 *
 * @param inputString 				The string to check.
 * @return true 					if it's a valid float literal, false 
 * 									otherwise.
 * 
 * 
 * @brief void printInt(int nbr)
 *
 * Prints the integer as different scalar types: char, float, and double.
 * Handles edge cases like non-displayable characters.
 *
 * @param nbr 						The integer to convert and print.
 * 
 * 
 * @brief int ft_atoi(const std::string &inputString)
 *
 * Converts the given string into an integer using `strtol`.
 * Checks for invalid characters and out-of-range values, printing an error 
 * and exiting if necessary.
 *
 * @param inputString 				The string to convert.
 * @return 							The converted integer value.
 * 
 * 
 * @brief bool isInt(const std::string &inputString)
 *
 * Checks whether the input string represents a valid integer.
 * Allows optional leading minus sign and digits only.
 *
 * @param inputString 				The string to validate.
 * @return true 					if the string is a valid integer, false 
 * 									otherwise.
 * 
 * 
 * @brief Type getType(const std::string &inputString)
 *
 * Determines the scalar type of the input string.
 * This function checks if the string matches any known scalar types 
 * (INT, FLOAT, DOUBLE, CHAR, or PSEUDO).
 * Returns ERROR if the input doesn't match any valid type.
 *
 * @param inputString 				The string to classify.
 * @return 							The identified Type enum value.
 * 
 * 
 * @brief void ScalarConverter::convert(const std::string &inStr)
 *
 * Converts the input string to all possible scalar types (char, int, 
 * float, double).
 * Determines the type of input using `getType`, then performs the 
 * appropriate conversions and prints the results.
 * Handles special cases like pseudo-literals and invalid inputs.
 *
 * @param inStr 					The input string to convert.
 * 
 */

// ============================================================================
// Orthodox canonical format
// ============================================================================

ScalarConverter::ScalarConverter() 
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void)copy;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &origin)
{
	(void)origin;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

// ============================================================================
// Type Definition
// ============================================================================

enum Type 
{
	INT,
	FLOAT,
	DOUBLE,
	CHAR,
	PSEUDO,
	ERROR,
};

// ============================================================================
// Management Pseudo
// ============================================================================

static bool isPseudo(const std::string &inputString)
{
	return (inputString == MINF || inputString == PINF || \
		inputString == NANF || inputString == MIN || \
		inputString == PIN || inputString == NAN);
}

static void pseudo(Type destType, const std::string &pseudoInput) 
{
	std::cout << CYAN CHNP RESET << std::endl;
	std::cout << CYAN INNP RESET << std::endl;
	if (destType == FLOAT)
	{
		std::cout << WHITE PRFLT RESET << pseudoInput << std::endl;
		std::cout << WHITE PRDBL RESET << pseudoInput.substr(0, \
			pseudoInput.length() - 1) << std::endl;
	}
	else if (destType == DOUBLE)
	{
		std::cout << WHITE PRFLT RESET << pseudoInput << STRF << std::endl;
		std::cout << WHITE PRDBL RESET << pseudoInput << std::endl;
	}
}

// ============================================================================
// Management Char
// ============================================================================

static void printChar(char c)
{
	std::cout << WHITE PRCHR QTE RESET << c << WHITE QTE RESET << std::endl;
	std::cout << WHITE PRINT RESET << static_cast<int>(c) << std::endl;
	std::cout << WHITE PRFLT RESET << static_cast<float>(c) << SFXFT \
	<< std::endl;
	std::cout << WHITE PRDBL RESET << static_cast<double>(c) << SFXDB \
	<< std::endl;
}

static bool isChar(const std::string &inputString)
{
	if (inputString.length() != 1)
		return (false);
	if (inputString.at(0) < std::numeric_limits<char>::min() 
	|| inputString.at(0) > std::numeric_limits<char>::max()
	|| isdigit(inputString.at(0)))
		return (false);
	return (true);
}

// ============================================================================
// Management Double
// ============================================================================

static void printDouble(double nbr)
{
	if (nbr <= std::numeric_limits<char>::min() 
	|| nbr >= std::numeric_limits<char>::max()) {
		std::cerr << RED ERR RESET YELLOW OUTRNG2 RESET << std::endl;
	}
	else
	{
		if (isprint(nbr))
		{
			std::cout << WHITE PRCHR QTE RESET << static_cast<char>(nbr) << \
			WHITE QTE RESET << std::endl;
		}
		else
			std::cout << WHITE PRCHR RESET GREEN NODIS RESET << std::endl;
		std::cout << WHITE PRINT RESET << static_cast<int>(nbr) << std::endl;
		std::cout << WHITE PRFLT RESET << static_cast<float>(nbr) << \
		std::setprecision(1) << STRF << std::endl;
		std::cout <<  WHITE PRDBL RESET << std::fixed << std::setprecision(1) \
		<< nbr << std::endl;
	}
}

static double ft_atod(const std::string &inputString)
{
	char *invalidCharacter;

	errno = 0;
	double result = std::strtod(inputString.c_str(), &invalidCharacter);
	if (*invalidCharacter != LF || errno == ERANGE )
	{
		std::cerr << RED ERR RESET YELLOW OUTRNG RESET << std::endl;
		RETURN_ERR_0D() ;
	}
	return (result);
}

static bool isDouble(const std::string &inputString)
{
	bool point = false;
	if (inputString == MIN || inputString == PIN || inputString == NAN)
		return (true);
	for (size_t i = 0; i < inputString.length(); i++)
	{
		if (inputString.at(i) == CHRDOT && point)
			return (false);
		else if (inputString.at(i) == CHRDOT)
		{
			point = true;
			continue;
		}
		if (!isdigit(inputString.at(i)) && inputString.at(i) != CHRMINUS && \
		inputString.at(i) != CHRPLUS)
			return (false);
	}
	return (true);

}

// ============================================================================
// Management Float
// ============================================================================

static void printFloat(float nbr)
{
	if (nbr <= std::numeric_limits<char>::min()
	|| nbr >= std::numeric_limits<char>::max()) {
		std::cerr << RED ERR RESET YELLOW OUTRNG2 RESET << std::endl;
		exit (EXIT_FAILURE);															
	}
	else
	{
		if (isprint(nbr))
		{
			std::cout << WHITE PRCHR QTE RESET << static_cast<char>(nbr) << \
			WHITE QTE RESET << std::endl;
		}
		else
			std::cout << WHITE PRCHR RESET GREEN NODIS RESET << std::endl;
		std::cout << WHITE PRINT RESET << static_cast<int>(nbr) << std::endl;
		std::cout << WHITE PRFLT RESET << std::fixed << std::setprecision(1) \
		<< nbr << STRF << std::endl;
		std::cout << WHITE PRDBL RESET << static_cast<double>(nbr) << std::endl;
	}
}

static float ft_atof(const std::string &inputString)
{
	char *invalidCharacter;

	errno = 0;
	float result = std::strtof(inputString.c_str(), &invalidCharacter);
	if (*invalidCharacter != CHARF || errno == ERANGE)
	{
		std::cerr << RED ERR RESET YELLOW OUTRNG RESET << std::endl;
		RETURN_ERR_0F();
	}
	return static_cast<float>(result);
}

static bool isFloat(const std::string &inputString)
{
	bool point = false;
	if (inputString == MINF || inputString == PINF || inputString == NANF)
		return (true);
	if (inputString.at(inputString.length() - 1) != CHARF)
		return (false);
	for (size_t index = 0; index < inputString.length() - 1; index++)
	{
		if (inputString.at(index) == CHRDOT && point)
			return (false);
		else if (inputString.at(index) == CHRDOT)
		{
			point = true;
			continue;
		}
		if (!isdigit(inputString.at(index)) && inputString.at(index) \
		!= CHRMINUS && inputString.at(index) != CHRPLUS)
			return (false);
	}
	return (true);
}

// ============================================================================
// Management Integer
// ============================================================================

static void printInt(int nbr)
{
	if (nbr >= std::numeric_limits<char>::min() && nbr <= \
	std::numeric_limits<char>::max() && \
	isprint(static_cast<unsigned char>(nbr)))
	{
		std::cout << WHITE PRCHR QTE RESET << static_cast<char>(nbr) << \
		WHITE QTE RESET << std::endl;
	}
	else
		std::cout << WHITE PRCHR RESET GREEN NODIS RESET << std::endl;
	std::cout << WHITE PRINT RESET << nbr << std::endl;
	std::cout << WHITE PRFLT RESET << static_cast<float>(nbr) << SFXFT \
	<< std::endl;
	std::cout << WHITE PRDBL RESET << static_cast<double>(nbr) << SFXDB \
	<< std::endl;

}

static int ft_atoi(const std::string &inputString)
{
	char *invalidCharacter;

	errno = 0;
	long result = std::strtol(inputString.c_str(), &invalidCharacter, 10);
	if (*invalidCharacter != '\0' || errno == ERANGE || result < \
		std::numeric_limits<int>::min() || result > \
		std::numeric_limits<int>::max())
	{
		std::cerr << RED ERR RESET YELLOW OUTRNG RESET << std::endl;
		exit (EXIT_FAILURE);
	}
	return static_cast<int>(result);	
}

static bool isInt(const std::string &inputString)
{
	size_t trigger = 0;
	
	if (inputString.at(0) == '-') 
	{
		trigger = 1;
	}

	for (size_t index = trigger; index < inputString.length(); index++)
	{
		if (!isdigit(inputString.at(index)))
		{
			return (false);
		}
	}
	return (true);
}

// ============================================================================
// Getter of Type Input
// ============================================================================

static Type getType(const std::string &inputString)
{
	if (isInt(inputString))
		return (INT);
	if (isFloat(inputString))
		return (FLOAT);
	if (isDouble(inputString))
		return (DOUBLE);
	if (isChar(inputString))
		return (CHAR);
	if (isPseudo(inputString))
		return (PSEUDO);
	return (ERROR);	
}

// ============================================================================
// Function Converter
// ============================================================================

void ScalarConverter::convert(const std::string &inStr)
{
	switch (getType(inStr))
	{
		case INT:
			printInt(ft_atoi(inStr));
			break ;
		case FLOAT:
			if (isPseudo(inStr))
				pseudo(FLOAT, inStr);
			else
				printFloat(ft_atof(inStr));
			break ;
		case DOUBLE:
			if (isPseudo(inStr))
				pseudo(DOUBLE, inStr);
			else
				printDouble(ft_atod(inStr));
			break ;
		case CHAR:
			printChar(inStr.at(0));
			break ;
		default:
			std::cout << RED ERR RESET YELLOW INVINP RESET << std::endl;
			break ;		
	}
}
