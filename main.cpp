#include <iostream>
#include <vector>

#include "functions_to_implement.cpp"

int main() {
    std::vector<double> numbers = {4.2, 3.5, 1.2};
    double sums = Sum(numbers);
    double products = Product(numbers);
    double n = 5.6;
    
    std::cout << "sum: " << sums << " products: " << products << std::endl;

    std::cout << "before: [";
    for (int i = 0; i < numbers.size(); i++) {
         std::cout << numbers[i] << " ";
    } std::cout << "]" << std::endl;
    AddN(numbers, n);
    std::cout << "after: [";
    for (int i = 0; i < numbers.size(); i++) {
         std::cout << numbers[i] << " ";
    } std::cout << "]" << std::endl;
    

    std::cout << Factorial (5) <<std::endl;
	std::vector<int> v{1,2,3};
	std::vector<int> res = AddN(v, 5);
	for(int i=0;i<res.size();i++){
		std::cout<<res[i]<<" ";
	}
    // std::string test_whole = "Hello,World";
    // std::vector<std::string> split = Split(test_whole, ",");
    // for (int i = 0; i < split.size(); i++) {
    //     std::cout << split[i] << " ";
    // } std::cout << std::endl;

    // std::string combined = Join(split, " ");
    // std::cout << combined << std::endl;

}
