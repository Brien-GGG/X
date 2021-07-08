#include <iostream>

int fibnumb (int index)
{
    int fibarr[index]={0,1};
    if(index<2)
    return index;
    else
    {
        for(int i=2; i<=index; ++i)
        fibarr[i]=fibarr[i-1]+fibarr[i-2];
        return fibarr[index];
    
    }
}

int main()
{
    
    std::cout << " Enter Fibonache's numb :";
    int numb =0;
    std::cin >> numb;
    
    std::cout << fibnumb(numb);
    
    return 0;
}