#include <iostream>

int main(int args, char* argv[]){
	int A = 1;
	int B = 1;
	int temp;
	int end = atoi(argv[1]);
	for(int i = 1; i <= end; i++){
		std::cout << A << std::endl;
		temp = A;
		A = B;
		B = B + temp;
	}
	return 0;
}
