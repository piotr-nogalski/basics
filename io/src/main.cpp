#include <iostream>

int main(){
	float a,b,pole;

	std::cout << "Program will calculate area of rectangle plese provide lengh of side a and side b" << std::endl;
	std::cin >> a >> b;
	std::cout << std::endl;
	pole = a*b;
	std::cout << " Area of provided rectangle is " << pole << "." << std::endl;

	return 0;
}
