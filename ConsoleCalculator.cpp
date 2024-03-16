#include <iostream>
#include "Calculator.h"
int main()
{
    //Difference between FLOAT & DOUBLE
    /*
    FLOAT:
    ->Single precision floating point number represented in 32 Bits
    ->Provides 6-9 decimal digits of precision
    
    DOUUBLE
    ->Double precision floating point number represented in 64 Bits
    ->Provides 15-17 decimal digits of precision
    ->Suitable for application that requires greater accuracy in representing the fractional numbers
    */

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "Calculator Console Application\n";
    std::cout << "Format: a+b | a-b | a*b | a/b. Enter the operation to perform:";

    //Object Initialization of class 'Calculator' 
    Calculator Cal;
    while (true)
    {
        std::cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            std::cout << "Attempted to divide by ZERO!\n";
            continue;
        }
        else
        {
            result = Cal.Calculate(x, oper, y);
        }
        std::cout << "Result " << "of " << x << oper << y << " is: " << result << std::endl;
    }

    return 0;
}
