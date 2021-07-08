#include <iostream>

int fibnumb(int num)
{
    if(num<2)
    return num;
    else
    return fibnumb(num-1)+fibnumb(num-2);
}

int main()
{
    std::cout << " Enter Fibonache's numb :";
    int numb =0;
    std::cin >> numb;
    
    std::cout << fibnumb(numb);
    
    return 0;
    
}