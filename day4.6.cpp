#include <iostream>

int sumofarr(int arrsize, int arr[])
{
    int sum=0;
    for(int i=0; i<arrsize; ++i)
    sum+=arr[i];
    return sum;
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
    
    std::cout<< sumofarr(arrsize1,arr1)+sumofarr(arrsize2, arr2);
    
    return 0;
    
}