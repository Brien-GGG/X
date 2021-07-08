#include <iostream>

void funback (int x)
{
    std::cout << x << std::endl;
    if(x)
    funback(x-1);
}


int main()
{
    std::cout << " Enter an integer :";
    int numb =0;
    std::cin >> numb;
    funback(numb);
    
    return 0;
    
}