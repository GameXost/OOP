#include <iostream>
#include "additional.h"
int main() {
	int n = 0, m = 0, num = 0;
	if (!(std::cin >> num)) {
		std::cerr<< "error occured: pls enter a number"<< std::endl;
		return INPUT_ERROR;
	}

	StatusCodes status = closest_pair_tonum(num, &m, &n);
	switch (status) {
		case OK:
			std::cout << "m = " << m << ",  n = " << n << std::endl;
			return OK;
		case INPUT_ERROR:
			std::cout<<"wrong number inserted, must be > 1" << std::endl;
			return INPUT_ERROR;
		case NULL_RES:
			std::cout<<"Nothing was found, probably number is too small or too big( >10^9)" << std::endl;
			return NULL_RES;  
	}
}