#include <iostream>

int main()
{   int r=1,c=1;
    do{
        do{
            std::cout << c*r << " ";
            c++;
        }while(c<=10);
        std::cout << std::endl;
        c=1;
        r++;
    }while(r<=10);

    return 0;
}