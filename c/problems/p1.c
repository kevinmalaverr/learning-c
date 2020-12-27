#include <stdio.h>
#include <stdlib.h>
// program to count number of even elements in a given array of integers

int calcEven(int nums[], int len)
{
  int n = 0;
  int i;

  for (i = 0; i < len; i++)
  {
    if(nums[i] % 2 == 0) n++;
  }

  return n;
}

int main()
{ 
  int arr[] = {1,2,3,4,5,6,7};
  int len = (sizeof(arr) / sizeof(arr[0]));
  int n = calcEven(arr, len);
  printf("%d", n);
}