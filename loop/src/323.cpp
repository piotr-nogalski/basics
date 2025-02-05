#include<iostream>

int main()
{   char letter = 'A';
    
    do{
        std::cout << letter << " ";
        letter++;
    }while(letter<='Z');
    std::cout << std::endl;

    do{
        letter--;
        std::cout << letter << " ";
    }while(letter>='B');
    std::cout << std::endl;

    return 0;
}