#include <iostream>

int main()
{
    int sum=0;
    for (int x=1;x<=100;x++)
    {
        if (x%2==0){sum+=x;}
    }
    std::cout<<sum<<std::endl;

    return 0;
}