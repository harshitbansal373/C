#include <stdio.h>
#include "def_callback.h"
#include "reg_callback.h"

int register_cb(cback ptr_reg_callback) {
	int r1; 
	printf("Callback registration\n");

	/*calling the callback */
	r1 = (*ptr_reg_callback)(6, 13); 
	return r1; 
}


