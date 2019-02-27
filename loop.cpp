#include <iostream>

int main(int args, char* argv[]){
    int init1 = 1;
    int init2 = 1;
    int init = 1;
    int start = atoi(argv[1]);
    for(int i = 2; i <= start; i++){
        if(start%2 == 0){
            init1 = init1 + init2;
            init = init1;
        }else{
            init2 = init1 + init2;
            init = init2;
        }
    }
    std::cout << init << std::endl;
    return 0;
}