#include <stdio.h>

void double_array(int arr[], int size);
void print_array(int arr[], int size);


int main()
{
  int arr[10], i;
  for (i = 0; i < 10; i++)
  {
    printf("Enter element no %d :", i);
    scanf("%d", &arr[i]);
  }
  print_array(arr, 10);
  double_array(arr, 10);
  print_array(arr, 10);
  return (0);
} 

void double_array(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    arr[i] = 2 * arr[i];
}

void print_array(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    printf("The element no: %d is %d\n", i, arr[i]);
}

