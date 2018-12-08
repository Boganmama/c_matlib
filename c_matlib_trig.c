/**
  * Mathematics library to perform trig. Custom made with error calculations.
  * Author: Joshua Tambunan
  * Date: 8/12/2018
  * Dependencies: 
  * References: 
  * ===========================================================================
  */

"include c_matlib_trig.h"




/**
  *
  */
extern uint32_t factorial (uint32_t arg) {

	// base case
	if (arg < 0) {

		return -1;

	} else if  (arg == 0 || arg == 1) {

		return 1;
	} 

	return arg * factorial(arg - 1);
}


/**
  * Function to compute the trigonometric sine of the 
  */
float sin(float x) {


}