#include <iostream>
#include <string>
#include <vector>
//exercise 1
//dunno how to do it
// bool balanced(std::string str) {
        //TODO
// }

//exercise 2
int count_occurences(char c, std::string str){
    auto times = 0;
    for(auto i = 0; i < str.size(); i++){
        if(str[i] == c) {
            times++;
        }
    }
    return times;
}
// //exercise 3
void swap(int& i, int& j) {
    auto remain = i;
    i = j;
    j = remain;
}
//exercise 4
std::vector<int> remove_duplicates(const std::vector<int> vector) {
    auto v = std::vector<int>{};
    auto compare = 0;
    //eu tirei o cont, verificar se mudou algo
    for (auto i = 0; i < vector.size() ; i++) {
        if(i == 0){
            compare = vector[i];
            v.push_back(vector[i]);
        }else{
            if (compare != vector[i]) {
                v.push_back(vector[i]);
                compare = vector[i];
            }
        }
    }
    return v;
}
//exercise 5
void remove_duplicates2(std::vector<int>& vector) {
    auto compare = vector[0];
    for (auto i = 1; i < vector.size() ; i++) {
        if(compare == vector[i]) {
            vector.erase(vector.begin()+i);
            i--;
        }
        compare = vector[i];
    }
    
}

int main()
{
    //1

    //2
    // using namespace std::string_literals;

    // const auto word = "evidentemente"s;
    // const auto letter = 'e';
    // std::cout << "number of " << letter << " in " << word << ": " << count_occurences(letter, word) << "\n";
    // 3
    // auto i = 2, j = 3;
    // swap(i, j);
    // std::cout << i << "\n"; // deve imprimir 3
    // std::cout << j << "\n"; // deve imprimir 2
    // 4
    // for (auto i: remove_duplicates({1, 1, 1, 2, 3, 3, 4, 1, 1})) {
    //     std::cout << i << '\n';
    // }
    //5
    auto ints = std::vector<int>{1, 1, 1, 2, 3, 3, 4, 1, 1} ;

    remove_duplicates2(ints);

    for (auto i: ints) {
        std::cout << i << '\n';
    }
}