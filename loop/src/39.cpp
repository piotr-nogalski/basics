#include <iostream>

int main()
{
    int x=1,sum=0;

    while(x<=100)
    {
        sum+=x;
        x++;
    }

    std::cout<<sum<<std::endl; 

    return 0;
}
