#include <iostream>
#include <string>

void fib_up_to(int n) {
	auto f1 = 0;
	auto f2 = 1;
	for(int i = 0; i <= n; i ++) {
		std::cout << f1 << '\n';
		auto temp = f2;
		f2 = f1 + f2;
		f1 = temp;
	}
}

void fib_less_than_or_eq(int x) {
	auto f1 = 0;
	auto f2 = 1;
	while(f1 <= x){
		std::cout << f1 << '\n';
		auto temp = f2;
		f2 = f1 + f2;
		f1 = temp;
	}	
}

void is_even_number(int number) {
	int begin = 1;
	for(int i = begin; i <= number; i++) {
		if(begin%2 != 1) {
			std::cout << begin << '\n';
		}
		begin++;
	}
}

void fizz_buzz_both(int n) {
	int begin = 1;
	for(int i = 0; i <= n ; i++) {
		bool isModTree = false;
		bool isModFive = false;
		if (begin%3 == 0){
			isModTree = true;
		}
		if (begin%5 == 0){
			isModFive = true;
		}
		if(isModFive and isModTree){
			//std::cout << begin << '\n';
			std::cout << "fizzbuzz" << '\n';
		} else if(isModTree) {
			//std::cout << begin << '\n';
			std::cout << "fizz" << '\n';
		} else if(isModFive) {
			//std::cout << begin << '\n';
			std::cout << "buzz" << '\n';
		}
		begin++;
	}
}

std::string check_palindrome(std::string word) {
	int size = word.size();
	for(int i = 0; i <= size/2 ; i++) {
		if(word[i] != word[size-1 - i]){
			return "not a palindrome\n";
		}

	}
	return "palindrome\n";
}


int main()
{
    //fib_up_to(10);
    //fib_less_than_or_eq(1024);
    //is_even_number(100);
    //fizz_buzz_both(100);
    using namespace std::string_literals;

    std::cout << "arara is "s << check_palindrome("arara"s);
    std::cout << "banana is "s << check_palindrome("banana"s);


}