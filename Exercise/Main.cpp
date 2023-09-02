#include <iostream>
#include <iomanip>
#include "Math.h"

int main() 
{
    try
    {
        Math<int> num1(1, 0);
        Math<int> num2(0, 3);
        Math<int> num;
        std::cout << std::fixed;
        std::cout << std::showpoint;
        std::cout << std::setprecision(2);
        std::cout << "1: " << num1.getNumerator() << "/" << num1.getDenominator() << "= " << num.divide();
        std::cout << "2: " << num2.getNumerator() << "/" << num2.getDenominator() << "= " << num.divide();
        std::cout << "3: " << num.getNumerator() << "/" << num.getDenominator() << "= " << num.divide();
        std::cout << "Result of division float: " << num2.divide();
    }
    catch (fractionException& e) 
    {
        std::cout << "Exception caught in main: " << e.what() << std::endl;
    }
    return 0;
}