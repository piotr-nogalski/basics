#include <iostream>

int main()
{
    int x=0, y=0;

    while (x<=10)
    {   
        y = 3*x;
        std::cout << "y=" << y << " for x=" << x << std::endl;
        x++;
    }

    return 0;
}