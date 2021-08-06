#include<stdio.h>

void TowerOfHanoi(int n, char from, char to, char aux){

	if(n > 0){
		TowerOfHanoi(n-1, from, aux, to);
			printf("%c to %c\n", from, to);
		TowerOfHanoi(n-1, aux, to, from);
	}

}

int main(){
	
	char A = 'A', B = 'B', C = 'C';
	TowerOfHanoi(3, A, C, B);

	return 0;
}

