#include<iostream>

int main()
{
    int table[10];

    for (int i=0;i<10;i++)
    {
        table[i] = i;
        std::cout << table[i] << " ";

    }
    std::cout<<std::endl;

    return 0;
}   