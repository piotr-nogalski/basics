#include <iostream>

int main(){
	int a,b,c;

	std::cout << "Program will check if three provied straight lenghts can form a right triangle." << std::endl;
	std::cin >> a >> b >> c;
	
	if ((a*a+b*b) == c*c)
		{
			std::cout << "This is right triagnle" << std::endl;
		}
		else
		{
			std::cout << "This is NOT right triagnle" << std::endl;
		}

	return 0;

}
