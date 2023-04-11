#include <stdio.h>
#include "def_callback.h"
#include "reg_callback.h"


int main()
{
	/*initialise function pointer to callback*/ 
	cback cbPtr = cback_one;
	printf("Callback demonstration\n");

	/* register callback function */
	printf("Value is: %d \n", register_cb(cbPtr)); 
	printf("Demonstration complete\n");
}


