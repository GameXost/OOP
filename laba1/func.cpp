#include <cmath>
#include "additional.h"

StatusCodes closest_pair_tonum(int num, int *m, int *n) {
	if (num < 1) {
		return INPUT_ERROR;
	}
	for (int i = num - 1; i > 1; i--) {
		for (int j = i - 1; j > 0; j--) {
			int sum = (int)sqrt(i + j);
			int diff = (int)sqrt(i - j);
			if ((i + j) == sum * sum && (i - j) == diff * diff) {
				*m = i;
				*n = j;				
				return OK;
			}			  
		}
	}
	return NULL_RES;
}
