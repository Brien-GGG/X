#include <iostream>

int main()
{
    std::cout << " Enter array size:";
    int arrsize;
    std::cin >> arrsize;
    int arr[arrsize]={0};
    
    for(int i=0; i<arrsize; ++i)
    std::cin >> arr[i];
    
    int index=0;
    for(int i=1, min=arr[0]; i<arrsize; ++i)
    {
        if(arr[i]<min)
        {
        min=arr[i];
        index=i;
        }
    }
    std::cout << " the smalliest index is: "<<index<<" value is: "<< arr[index];
    return 0;
}
