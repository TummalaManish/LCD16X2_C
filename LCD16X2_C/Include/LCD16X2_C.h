/**
 * @file LCD16X2_c.h
 * @author ManishTummala
 * @date TODO
 * @brief Internal interface header for the LCD16X2 library.
 *
 * TODO:
 * @see http://www.stack.nl/~dimitri/doxygen/docblocks.html
 * @see http://www.stack.nl/~dimitri/doxygen/commands.html
 * https://www.google.com
 */

/*!
 * general naming style and information
 *
 * Only typedef of the structures are encouraged to be used in the application
 * every structure typedef will have a '_s' post-fix.
 * all the structures are not exposed to the application and cannot be used in that way.
 *
 */
#ifndef INCLUDE_LCD16X2_C_H_
#define INCLUDE_LCD16X2_C_H_

/*Dependent Includes*/
#include <stdint.h>
#include "LCD16X2_FunDefs.h"

typedef struct Line_ll{/*Line_ll is used only inside the library*/
	/*Main Elements of the structure*/
	char current_char_; /*<Place holder for each character in the line>*/

	/*Links to the other elements on the Linked List*/
	char *forward_, *backward_; /*<Pointers to the other characters in the line>*/
}line_s;

typedef struct Page_ll{/*Page_ll is used only inside the library*/
	/*Main Elements of the structure*/
	/*TODO: Data type decelerations must be modifiable by preprocessor directives*/
	uint8_t current_line_number_; /*<Holds the number of current line in the Page>*/
	struct Line_ll current_page_; /*<Current line element that can be accessed as an structure element>*/

	/*Links to the other elements in the Linked List*/
	struct Line_ll* forward_, backward_; /*<Pointers to the other lines in the page>*/
}page_s;

/*------------------ Factory functions to the above classes -------------------*/
#if CUSTOM_FUN_DEF > 0
struct Page_ll* ps_CREATE_PAGE(void *);
#else
struct Page_ll* ps_createPage(void *);
#endif
/*-----------------------------------------------------------------------------*/

#endif /* INCLUDE_LCD16X2_C_H_ */
