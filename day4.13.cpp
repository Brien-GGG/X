#include <iostream>

int
main ()
{
  std::cout << " Enter square matrix size:";
  int arrsize;
  std::cin >> arrsize;
  int arr1[arrsize][arrsize] = { 0 };
  int linearr[arrsize*arrsize]={0};

  std::cout << " Enter the values of matrix by rows:";
  for (int r = 0; r < arrsize; ++r)
    for (int k = 0; k < arrsize; ++k)
      std::cin >> arr1[r][k];

  for (int r = 0; r < arrsize; ++r)
    {
      std::cout << std::endl;
      for (int k = 0; k < arrsize; ++k)
      std::cout << arr1[r][k] << '\t';
    }

  std::cout << std::endl << "Your matrix in line is: " <<  std::endl;
  
  int i=0;
  for(int r=0; r<arrsize; ++r)
  for(int k=0; k<arrsize; ++k)
  {
      linearr[i]=arr1[r][k];
      ++i;
  }
  

  
  for(int i=0; i<arrsize*arrsize; ++i)
  std::cout << linearr[i];

  return 0;

}