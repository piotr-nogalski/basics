#include<iostream>

int main()
{
    int n=10,matrix[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(j==0)
            {
                matrix[i][j]=i;
            }
            else if(j==1)
            {
                matrix[i][j]=i*i;
            }
            else matrix[i][j]=0;

            std::cout<<matrix[i][j]<<" ";

        }
        std::cout<<std::endl;
    }

    return 0;
}