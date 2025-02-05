#include<iostream>
#include<random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,99);
    int min,max,x=1,n,sum;

    std::cout << "Give number of random sample:";
    std::cin >> n;

    min = dist(rd);
    max=min;
    sum+=max;

    std::cout << min << ",";

    while(x<=n-1)
    {
        int number = dist(rd);
        sum+=number;
        if(number<min) min=number;
        if(number>max) max=number;
        if(x == n-1) std::cout << number << "." << std::endl;
        else std::cout << number << ",";
        x++;
    }
    std::cout << "Max=" << max << " Min=" << min << " Mean=" << sum/n << std::endl;

    return 0;
}