#include <iostream>
#include <math.h>
// This code provides solutions for both tasks 1.5 and 1.6
int main(){
	int a, b;
	std::cout << "Provide number a and b, to count a/b with r." << std::endl;
	std::cin >> a >> b;
	std::cout << std::endl << a/b <<  " r " << a%b << std::endl;

	return 0;
}
