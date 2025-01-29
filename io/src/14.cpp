#include <iostream>
#include <iomanip>
#define USE_MATH_DEFINES
#include <math.h>

int main(){
	double R, V;
	std::cout << "Provide R:";
	std::cin >> R;
	std::cout << std::endl;
	V = 4*M_PI*R*R*R/3;
	std::cout << "Volume is equal to " << std::fixed << std::setprecision(2) << V << std::endl;
	return 0;
}
