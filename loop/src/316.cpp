#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0,99);

    int max,min,n,sum;

    std::cout << "Provide the number of desired random numbers:";
    std::cin >> n;

    min=dist(rd);
    max=min;
    sum+=max;
    std::cout << "List of " << n << " numebrs:" << min << ",";

    for (int x=1; x<=n-1; x++)
    {
        int num = dist(gen);
        sum += num;
        if (num < min){min=num;}
        if (num > max){max=num;}

        if (x == n-1){std::cout << num << "." << std::endl;}
        else{std::cout << num << ",";}
    
    }   

    std::cout << "Biggest number " << max << " smallest number " << min << std::endl;
    std::cout << "Mean of the numbers: " << sum/n << std::endl;

    return 0;
}