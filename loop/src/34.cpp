#include <iostream>

int main()
{
    for (int x=1;x<=20;x++)
    {
        if (x<20){std::cout << x << ",";}
        else{std::cout << x << "." << std::endl;}
    }
    return 0;
}