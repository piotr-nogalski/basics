#include <iostream>

int main()
{
    int x=1, sum=0;

    do
    {
        sum +=x;
        x++;
    }
    while (x<=100);
    std::cout<<sum<<std::endl;

    return 0;
}
