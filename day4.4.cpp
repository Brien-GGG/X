#include <iostream>

int main()
{
    std::cout << " Enter array size:";
    int arrsize;
    std::cin >> arrsize;
    int arr[arrsize]={0};
    
    for(int i=0; i<arrsize; ++i)
    std::cin >> arr[i];
    
    for(int i=arrsize-1; i>=0; i--)
    std::cout << arr[i] << '\t';
    
    return 0;
    
}
