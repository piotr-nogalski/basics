#include <iostream>

int main()
{
    int x=1;
    do
    {
        if (x<20){std::cout << x << ",";}
        else{std::cout << x << "." << std::endl;}
        x++;
    }
    while(x <= 20);
    return 0;
}