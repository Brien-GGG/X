#include <iostream>


int main()
{
    std::cout << " Enter an integer for factorial calculating:";
    int numb =0;
    long long fact=1;
    std::cin >> numb;
    
    if(numb <0)
    fact=0;
    else
    for(int x=numb; x>1; --x)
    fact*=x;
    
    std::cout << std::endl << " Factorial is: " << fact;
    
    return 0;
    
}