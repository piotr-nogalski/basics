#include<iostream>

int main()
{
    int matrix[10][10];
    int sum = 0,n=10;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)matrix[i][j] = j; 
            else matrix[i][j] = 0;
            sum+=matrix[i][j];
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << sum << std::endl;

    return 0;
}