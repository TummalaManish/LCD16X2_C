/**
 * @file LCD16X2_FunDefs.h
 * @brief File contains the macros for that can be used to customize
 * 		  the library function names.
 * @author ManishTummala
 * @date TODO
 *
 */

/**
 * Naming conventions for the functions.
 *
 * all the function names have a prefix that describes their return
 * type.
 *
 * 'ps_' describes a pointer to structure data type. Here
 * 		 'p' stands for the pointer and 's' stands for the
 * 		 structure. The actual structure type is specified
 * 		 in the function name.
 */
#ifndef INCLUDE_LCD16X2_FUNDEFS_H_
#define INCLUDE_LCD16X2_FUNDEFS_H_

/*!
 * @brief set the value of the macro CUSTOM_FUN_DEF to more than '0'
 * 		  to enable the custom function definitions.
 */
#define CUSTOM_FUN_DEF 1

/*!
 * @brief Creates a page structure. This function should be use to
 * 		  create a page to prevent memory leaks.
 * @param void: Takes in no parameters.
 * @return pointer to the created page structure.
 */
#define ps_CREATE_PAGE ps_create_page /*<Function name that will to use to create a function>*/



#endif /* INCLUDE_LCD16X2_FUNDEFS_H_ */
