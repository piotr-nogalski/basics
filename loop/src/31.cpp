#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Program shows value of y f or function y=3x , for x (0,9)" << std::endl;

    for (int x=0;x<=9;x++)
    {
        std::cout << "For x=" << x << " y = " << 3*x << std::endl;
    }

    return 0;
}