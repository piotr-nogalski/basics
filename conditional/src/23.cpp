#include <iostream>
#include <math.h>


int main(){
	float a,b,c,x1,x2,delta;
	int  zeros;
	std::cout << "Another way of calucalating quadratic equation." << std::endl;
	std::cin >> a >> b >> c;
	std::cout << std::endl;

	delta = (b*b)-(4*b*c);

	if (delta > 0){zeros = 2;}
	if (delta == 0){zeros = 1;}
	if (delta < 0){zeros = 0;}



	switch (zeros)
	{
		case 0:
			std::cout << "No zero points." << std::endl;
			break;
		case 1:
			x1 = -b/2*a;
			std::cout << "x=" << x1  <<std::endl;
			break;
		case 2:
			x1 = (-b-sqrt(delta))/(2*a);
			x2 = (-b+sqrt(delta))/(2*a);
			std::cout << "x1=" << x1 << " x2=" << x2 << std::endl;
			break;
	}

	return 0;

}
