#include <iostream>


int main()
{
    std::cout << " Enter an integer :";
    int numb =0;
    std::cin >> numb;
    for(; numb; --numb)
    std::cout << numb << std::endl;
    
    return 0;
    
}
