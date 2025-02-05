#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(0,99);

    int min,max,sum,n,x=1;
    std::cout << "Give the number of random samples:";
    std::cin >> n;

    min = dist(rd); 
    max = min;
    std::cout << min << ",";

    do
    {
        int num = dist(rd);
        if (num < min) min=num;
        if (num > max) max=num;
        sum += num;

        if (x == n-1) std::cout << num << "." << std::endl;
        else std::cout << num << ",";
        
        x++;
    }while(x<=n-1);

    std::cout << "Max=" << max << " Min=" << min << std::endl;
    std::cout << "Mean=" << sum/n << std::endl;

    return 0;
}