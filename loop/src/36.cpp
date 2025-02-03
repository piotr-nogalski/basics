#include <iostream>

int main()
{
    int x=1;
    while (x<=20)
    {
        if (x<20){std::cout << x << ",";}
        else{std::cout << x << "." << std::endl;}
        x++;
    }

    return 0;
}