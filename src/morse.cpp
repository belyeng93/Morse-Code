/**
 * @file template_c.c
 * @author Emanuele Belia
 * @date 15 June 2020
 * @brief Template for module header
 *
 * Here typically goes a more extensive explanation of the module 
 */

/*-----------------------------------*
 * INCLUDE FILES
 *-----------------------------------*/
#include "morse.h"

/*-----------------------------------*
 * PUBLIC VARIABLE DEFINITIONS
 *-----------------------------------*/
/* None */

/*-----------------------------------*
 * PRIVATE DEFINES
 *-----------------------------------*/
/* None */

/*-----------------------------------*
 * PRIVATE MACROS
 *-----------------------------------*/
/* None */

/*-----------------------------------*
 * PRIVATE TYPEDEFS
 *-----------------------------------*/
/* None */

/*-----------------------------------*
 * PRIVATE FUNCTION PROTOTYPES
 *-----------------------------------*/
/**
 * @brief   do_something_private description
 * @param [in] param1 Description of input param1
 * @param [out] param2 Description of output param2
 * @retval TRUE   Successfully did nothing.
 * @retval FALSE  Oops, did something.
 *
 * do_something_private detailed description
 */
static String parseLetter(char letter);

/*-----------------------------------*
 * PRIVATE VARIABLES
 *-----------------------------------*/
/* None */

/*-----------------------------------*
 * PUBLIC FUNCTION DEFINITIONS
 *-----------------------------------*/
String[] parseString(String phrase, int *len)
{
	String[] parsedString = new String[&len];
	for(int idx ; idx < &len; idx++)
	{
		parsedString[idx] = parseLetter(phrase.charAt(idx));
	}
}

  
/*-----------------------------------*
 * PRIVATE FUNCTION DEFINITIONS
 *-----------------------------------*/
static String parseLetter(char letter)
{
	switch (letter)
	{
	case 'a':
	{
		return ".-"
		break;
	}
	case 'b':
	{
		return "-..."
		break;
	}
	case 'c':
	{
		return "-.-."
		break;
	}
	case 'd':
	{
		return "-.."
		break;
	}
	case 'e':
	{
		return "."
		break;
	}
	case 'f':
	{
		return "..-."
		break;
	}
	case 'g':
	{
		return "--."
		break;
	}
	case 'h':
	{
		return "...."
		break;
	}
	case 'i':
	{
		return ".."
		break;
	}
	case 'j':
	{
		return ".---"
		break;
	}
	case 'k':
	{
		return "-.-"
		break;
	}
	case 'l':
	{
		return ".-.."
		break;
	}
	case 'm':
	{
		return "--"
		break;
	}
	case 'n':
	{
		return "-."
		break;
	}
	case 'o':
	{
		return "---"
		break;
	}
	case 'p':
	{
		return ".--."
		break;
	}
	case 'q':
	{
		return "--.-"
		break;
	}
	case 'r':
	{
		return ".-."
		break;
	}
	case 's':
	{
		return "..."
		break;
	}
	case 't':
	{
		return "-"
		break;
	}
	case 'u':
	{
		return "..-"
		break;
	}
	case 'v':
	{
		return "...-"
		break;
	}
	case 'w':
	{
		return ".--"
		break;
	}
	case 'x':
	{
		return "-..-"
		break;
	}
	case 'y':
	{
		return "-.--"
		break;
	}

	case 'z':
	{
		return "--.."
		break;
	}

	case ' ':
	{
		return "--.."
		break;
	}

	default:


}



/****************************************************************************
 ****************************************************************************/