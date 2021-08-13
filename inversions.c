#include<stdio.h>
#include<stdlib.h>

int sort(int *arr, int n){
	
	int count = 0, temp = 0;
	int i,j;
	for(i = 0; i < n-1; i++){

		for(j = i+1; j < n; j++){

			if(arr[i] > arr[j]){

				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				count++;
			}
		}
	}
	return count;
}

void main(){

	int n, a[30];
	printf("Enter number of elements: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){

		scanf("%d", &a[i]); 
	}

	printf("%d ", sort(a, n));
}
