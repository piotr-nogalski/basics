#include <iostream>
#include <iomanip>

int main(){
	float a,b,c,x;
	std::cout << "Program will calculate result for equation ax+b=c." << std::endl;
	std::cout << "Provide a:";
	std::cin >> a;

	while (a == 0)
	{
		std::cout << "For this solve a cannot be equal 0, please provide different a:";
		std::cin >> a; 
	}
	std::cout << std::endl << "Provide b:";
	std::cin >> b;
	std::cout << std::endl << "Provide c:";
	std::cin >> c;

	x = (c-b)/a;

	std::cout << "For equation" << std::setprecision(2) << a << "*x" << "+" << b << "=" << c << std::endl;
	std::cout << "x=" << std::setprecision(2) << x << std::endl;

	return 0;
}
