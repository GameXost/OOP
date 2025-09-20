#pragma once

#include <cstddef>
enum StatusCodes {
	OK = 0,
	INPUT_ERROR = 1,
	NULL_RES= 2
};



StatusCodes closest_pair_tonum(int num, int *m, int *n);


