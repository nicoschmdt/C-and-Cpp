#include <iostream>

int main(int args, char* argv[]){
	int A = 1;
	int B = 1;
	int temp;
	int end = atoi(argv[1]);
	while(A <= end){
		std::cout << A << std::endl; //por o print no inicio para printar os 2 1's
		temp = A;
		A = B;
		B = B + temp;
	}
	return 0;
}