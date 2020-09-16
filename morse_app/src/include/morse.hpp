/**
 * @file morse.h
 * @author Emanuele Belia
 * @date 15 June 2020
 * @brief Template for module header
 *
 * Here typically goes a more extensive explanation of the module 
 */

#ifndef MORSE_HPP
#define MORSE_HPP




/*-----------------------------------*
 * INCLUDE FILES
 *-----------------------------------*/
#include <Arduino.h> 
/*-----------------------------------*
 * PUBLIC DEFINES
 *-----------------------------------*/


/*-----------------------------------*
 * PUBLIC MACROS
 *-----------------------------------*/
/* None */

/*-----------------------------------*
 * PUBLIC TYPEDEFS
 *-----------------------------------*/

/*-----------------------------------*
 * PUBLIC VARIABLE DECLARATIONS
 *-----------------------------------*/
/* None */

/*-----------------------------------*
 * PUBLIC FUNCTION PROTOTYPES
 *-----------------------------------*/
/**
 * @brief   ExampleFunctionA description
 */
// String* parseString(String phrase, int len);
void parseString(String phrase, String* parsedString, int len);

char parseMorse(String morse);

#endif /* TEMPLATE_C_H */

/****************************************************************************
 ****************************************************************************/
