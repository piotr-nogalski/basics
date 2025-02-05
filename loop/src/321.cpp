#include<iostream>

int main()
{   
    int r=1,c=1;

    while(r<=10)
    {

        while(c<=10)
        {   
            std::cout << r*c << " ";
            c++;   
        }
        r++;
        c=1;
        std::cout << std::endl;
    }

    return 0;
}