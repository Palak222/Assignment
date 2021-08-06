#include<stdio.h>
void selection(int arr[], int n, int i){

	int min = i, temp=0, j;
	for(j = i+1; j < n; j++)
	{
		if(arr[j] < arr[min])
		{
			min = j;
		}
	}
	temp = arr[min];
	arr[min] = arr[i];
	arr[i] = temp;

	if(i+1 < n)
	{
		selection(arr, n, i+1);
	}

}
void printArray(int arr[], int n)
{
	for(int j = 0; j < n; j++)
	{
		printf("%d ", arr[j]);
	}
}
int main(){

	int arr[] = {4,3,5,2,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	selection(arr, n, 0);
	printArray(arr, n);

	return 0;

}	
