#include <stdio.h>
#include <stdlib.h>

int main(int args, char* argv[]){
	int A = 1;
	int B = 1;
	int temp;
	int end = atoi(argv[1]);
	for(int i = 1; i <= end; i++){
		printf("%d\n", A);
		temp = A;
		A = B;
		B = temp + B;
	}
	return 0;
}
