#include<iostream>

int main()
{
    int n=10,matrix[n][n],sum=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(n==j+i+1)
            {
                matrix[i][j]=n-j-1;
                sum+=matrix[i][j];
            }
            else matrix[i][j]=0;

            std::cout<<matrix[i][j];

        }
        std::cout<<std::endl;
    }

    std::cout<<sum<<std::endl;

    return 0;
}