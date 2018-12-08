/**
  * Mathematics library to perform trig. Custom made with error calculations.
  * Author: Joshua Tambunan
  * Date: 8/12/2018
  * Dependencies: 
  * References: 
  * ===========================================================================
  */


int main (void) {


	float x = 3.14159;

	int y = (int)x;

	printf("x is %d\n", y);
	
	return 0;
}
uint8_t sign(float num) {

	if (num > 0) {

		return 1;
	
	} else if (num == 0) {

		return 0;

	} else {

		return -1;
	}
}

/**
  *
  */
uint8_t is_integer(float arg) {


}

uint32_t abs (float arg) {

	return sign(arg) * arg;
}