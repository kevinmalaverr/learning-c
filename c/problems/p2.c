#include <stdio.h>

// hourglass sum

int hourglassSum(int arr[6][6])
{
  int maxSum = -63;
  int i, j;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      int sum = arr[i][j] +
                arr[i][j + 1] +
                arr[i][j + 2] +
                arr[i + 1][j + 1] +
                arr[i + 2][j] +
                arr[i + 2][j + 1] +
                arr[i + 2][j + 2];

      if (sum > maxSum) maxSum = sum;
    }
  }
  return maxSum;
}

int main()
{
  int arr[6][6] = {{0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}};
  printf("%d", hourglassSum(arr));
}