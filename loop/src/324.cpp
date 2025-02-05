#include<iostream>

int main()
{
    char letter = 'A';

    while(letter <= 'Z')
    {
        std::cout << letter << " ";
        letter++;
    }

    std::cout << std::endl;

    while(letter >= 'B')
    {
        letter--;
        std::cout << letter << " ";
        
    }

    std::cout<<std::endl;

    return 0;

}