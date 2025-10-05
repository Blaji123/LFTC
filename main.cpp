#include <iostream>
#include <vector>

const float pi = 3.14;

float CalculateCircleArea(float radius)
{
    return pi * radius * radius;
}

float CalculateCirclePerimeter(float radius)
{
    return 2 * pi * radius;
}

int CalculateCmmdc(int a, int b)
{
    while(b!=0)
    {
        int r = a%b;
        a = b;
        b = r;
    }

    return a;
}

int CalculateSum(int n, std::vector<int> arr)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main() {
    float radius;
    int a, b, n, num;
    std::vector<int> arr;

    std::cout << "Give the radius: ";
    std::cin >> radius;
    std::cout << CalculateCirclePerimeter(radius) << " " << CalculateCircleArea(radius) << std::endl;

    std::cout << "Give a and b: ";
    std::cin >> a >> b;
    std::cout << CalculateCmmdc(a, b) << std::endl;

    std::cout << "Give n: ";
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> num;
        arr.push_back(num);
    }

    std::cout << CalculateSum(n, arr) << std::endl;

    return 0;
}
