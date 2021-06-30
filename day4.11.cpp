#include <iostream>

int main()
{
    std::cout << " Enter array size:";
    int arrsize;
    std::cin >> arrsize;
    int arr[arrsize]={0};
    
    std::cout << " Enter the values of array:";
    for(int i=0; i<arrsize; ++i)
    std::cin >> arr[i];
    
    int counter=0;
    
    for(int i=0; i<arrsize; i++)
    if(arr[i]%2!=0)
    ++counter;
    
    std::cout << std::endl << " Odds numbers quntity is: " <<counter;
    
    return 0;
}