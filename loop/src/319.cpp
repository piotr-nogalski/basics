#include<iostream>

int main()
{
    int r=1,c=1;
    for(r;r<=10;r++)
    {
        for(c;c<=10;c++)
        {
            std::cout << r*c << " ";
        }
        std::cout << std::endl;
        c=1;
    }

    return 0;

}
