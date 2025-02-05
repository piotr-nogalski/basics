#include<iostream>

int main()
{
    for(char letter = 'A';letter <= 'Z';letter++)
    {
        std::cout << letter << " ";
    }
    std::cout << std::endl;

    for(char letter = 'Z';letter >= 'A';letter--)
    {
        std::cout << letter << " ";
    }
    std::cout << std::endl;

    return 0;
}