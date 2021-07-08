#include <iostream>

long long fact (int fnum)
{
    if(fnum<0)
    return 0;
    if(fnum==0)
    return 1;
    else return fnum * fact(fnum-1);
}

int main()
{
    std::cout << " Enter an integer for factorial calculating:";
    int numb =0;
    std::cin >> numb;
    
    std::cout << std::endl << " Factorial is: " << fact(numb);
    
    return 0;
    
}