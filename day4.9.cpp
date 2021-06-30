#include <iostream>

int main()
{
    std::cout << " Enter square matrix size:";
    int arrsize;
    std::cin >> arrsize;
    int arr1[arrsize][arrsize]={0};
    
    std::cout << " Enter the values of matrix by rows:";
    for(int r=0; r<arrsize; ++r)
    for(int k=0; k<arrsize; ++k)
    std::cin >> arr1[r][k];
    
    for(int r=0; r<arrsize; ++r)
    {
        std::cout << std::endl;
        for(int k=0; k<arrsize; ++k)
        std::cout << arr1[r][k] <<'\t';
    }
    
    int sum=0;
    
    std::cout<< std::endl << "the main diagonal values is: "; 
    for(int r=0, k=0; r<arrsize; ++r,++k)
    {
    std::cout << arr1[r][k] << " ";
    sum+=arr1[r][k];
    }
    
    std::cout<<std::endl << "the side diagonal values is: "; 
    for(int r=arrsize-1, k=0; r>=0, k<arrsize; --r,++k)
    {
    std::cout << arr1[r][k] << " ";
    sum+=arr1[r][k];
    }
    std::cout << std::endl << "the sum of side+main = " << sum;
    
    return 0;
    
}
