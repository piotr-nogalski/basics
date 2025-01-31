#include <iostream>
#include <math.h>

int main(){

	float a,b,c,x1,x2;
	std::cout << "Program will calculate null places for quadratic equasion a*x^2+b*x+c with povided values a,b and c."<< std::endl;
	std::cin >> a >> b >> c; 
	std::cout << std::endl;


	float delta = (b*b)-(4*a*c);
	
	if (delta < 0)
	{
		std::cout << "Brak miejsc zerowych"<< std::endl;
	}

	else
	{
		x1=(-b)+sqrt(delta)/(2*a);
		x2=(-b)-sqrt(delta)/(2*a);
		std::cout << "X1 = "<< x1 << " X2 = " << x2 << std::endl;
	}

	return 0;
}
