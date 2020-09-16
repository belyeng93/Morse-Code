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
#include "include/morse.hpp"
/*-----------------------------------*
 * PUBLIC VARIABLE DEFINITIONS
 *-----------------------------------*/
/* None */

/*-----------------------------------*
 * PRIVATE DEFINES
 *-----------------------------------*/
const String morse_a = ".-"; 
const String morse_b = "-..."; 
const String morse_c = "-.-."; 
const String morse_d = "-.."; 
const String morse_e = "."; 
const String morse_f = "..-."; 
const String morse_g = "--."; 
const String morse_h = "...."; 
const String morse_i = ".."; 
const String morse_j = ".---"; 
const String morse_k = "-.-"; 
const String morse_l = ".-.."; 
const String morse_m = "--"; 
const String morse_n = "-."; 
const String morse_o = "---"; 
const String morse_p = ".--."; 
const String morse_q = "--.-"; 
const String morse_r = ".-."; 
const String morse_s = "..."; 
const String morse_t = "-"; 
const String morse_u = "..-"; 
const String morse_v = "...-"; 
const String morse_w = ".--"; 
const String morse_x = "-..-"; 
const String morse_y = "-.--"; 
const String morse_z = "--.."; 

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
void parseString(String phrase, String* parsedString, int len)
{
	// String parsedString [len];
	for(int idx ; idx < len; idx++)
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
			return morse_a;
			break;
		}
		case 'b':
		{
			return morse_b;
			break;
		}
		case 'c':
		{
			return morse_c;
			break;
		}
		case 'd':
		{
			return morse_d;
			break;
		}
		case 'e':
		{
			return morse_e;
			break;
		}
		case 'f':
		{
			return morse_f;
			break;
		}
		case 'g':
		{
			return morse_g;
			break;
		}
		case 'h':
		{
			return morse_h;
			break;
		}
		case 'i':
		{
			return morse_i;
			break;
		}
		case 'j':
		{
			return morse_j;
			break;
		}
		case 'k':
		{
			return morse_k;
			break;
		}
		case 'l':
		{
			return morse_l;
			break;
		}
		case 'm':
		{
			return morse_m;
			break;
		}
		case 'n':
		{
			return morse_n;
			break;
		}
		case 'o':
		{
			return morse_o;
			break;
		}
		case 'p':
		{
			return morse_p;
			break;
		}
		case 'q':
		{
			return morse_q;
			break;
		}
		case 'r':
		{
			return morse_r;
			break;
		}
		case 's':
		{
			return morse_s;
			break;
		}
		case 't':
		{
			return morse_t;
			break;
		}
		case 'u':
		{
			return morse_u;
			break;
		}
		case 'v':
		{
			return morse_v;
			break;
		}
		case 'w':
		{
			return morse_w;
			break;
		}
		case 'x':
		{
			return morse_x;
			break;
		}
		case 'y':
		{
			return morse_y;
			break;
		}

		case 'z':
		{
			return morse_z;
			break;
		}

		default:
		{
			return " ";
			break;
		}
	}
}

char parseMorse(String morse)
{
	if ((morse == morse_a))
	{
		return 'a';
	}
	else if((morse == morse_b))
	{
		return 'b';
	}
	else if((morse == morse_c))
	{
		return 'c';
	}
	else if((morse == morse_d))
	{
		return 'd';
	}
	else if((morse == morse_e))
	{
		return 'e';
	}
	else if((morse == morse_f))
	{
		return 'f';
	}
	else if((morse == morse_g))
	{
		return 'g';
	}
	else if((morse == morse_h))
	{
		return 'h';
	}
	else if((morse == morse_i))
	{
		return 'i';
	}
	else if((morse == morse_k))
	{
		return 'k';
	}
	else if((morse == morse_l))
	{
		return 'l';
	}
	else if((morse == morse_m))
	{
		return 'm';
	}
	else if((morse == morse_n))
	{
		return 'n';
	}
	else if((morse == morse_o))
	{
		return 'o';
	}
	else if((morse == morse_p))
	{
		return 'p';
	}
	else if((morse == morse_q))
	{
		return 'q';
	}
	else if((morse == morse_r))
	{
		return 'r';
	}
	else if((morse == morse_s))
	{
		return 's';
	}
	else if((morse == morse_t))
	{
		return 't';
	}
	else if((morse == morse_u))
	{
		return 'u';
	}
	else if((morse == morse_v))
	{
		return 'v';
	}
	else if((morse == morse_w))
	{
		return 'w';
	}
	else if((morse == morse_x))
	{
		return 'x';
	}
	else if((morse == morse_y))
	{
		return 'y';
	}
	else if((morse == morse_z))
	{
		return 'z';
	}
	else
	{
		return ' ';
	}
}




/****************************************************************************
 ****************************************************************************/