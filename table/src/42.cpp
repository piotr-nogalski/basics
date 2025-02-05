#include<iostream>

int main()
{
    int table[10];
    int size = 10;

    for (int i=0;i<10;i++)
    {
        table[i] = size-1-i;
        std::cout << table[i] << " ";

    }
    std::cout<<std::endl;

    return 0;
}   