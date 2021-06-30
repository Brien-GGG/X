#include <iostream>

int mulofarr(int arrsize, int arr[])
{
    int mult=1;
    for(int i=0; i<arrsize; ++i)
    mult*=arr[i];
    
    return mult;
    
}

int main()
{
    std::cout << " Enter first array size:";
    int arrsize1;
    std::cin >> arrsize1;
    int arr1[arrsize1]={0};
    std::cout << " Enter the values offirst array:";
    for(int i=0; i<arrsize1; ++i)
    std::cin >> arr1[i];
    
    std::cout << " Enter second array size:";
    int arrsize2;
    std::cin >> arrsize2;
    int arr2[arrsize2]={0};
    std::cout << " Enter the values of second array:";
    for(int i=0; i<arrsize2; ++i)
    std::cin >> arr2[i];
    
    std::cout<< mulofarr(arrsize1,arr1)*mulofarr(arrsize2, arr2);
    
    return 0;
    
}