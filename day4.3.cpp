#include <iostream>

int main()
{
    std::cout << " Enter array size:";
    int arrsize;
    std::cin >> arrsize;
    int arr[arrsize]={0};
    
    for(int i=0; i<arrsize; ++i)
    std::cin >> arr[i];
    
    int max=arr[0];
    int min=arr[0];
   
    for(int i=1; i<arrsize; ++i)
    {
     if(arr[i]<min)
     min=arr[i];
     if(arr[i]>max)
     max=arr[i];
    }
    std::cout << " the smalliest value is: " <<min <<" biggiest value is: "<< max
    << "sum is: " << min+max;
    return 0;
    
}