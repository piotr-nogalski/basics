#include <iostream>

int main ()
{
    int x=0,y=0;


    do
    {   
        y = 3*x;
        std::cout << "y=" << y << " for x=" << x << std::endl;
        x += 1;
    }
    while (x<=10);


    return 0;
}