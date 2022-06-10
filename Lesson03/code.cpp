#include <iostream>
#include <vector>
#include <string>
 
int main() {
    std::ios_base::sync_with_stdio(0), std::cin.tie(nullptr);
 
    std::vector<int> vec = { 1, 3, 2 };
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
 
    vec[0] = 120;
    std::cout.put('\n');
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
 
    std::cout.put('\n');
    vec.push_back(55);
    vec.push_back(55);
    vec.emplace_back(55);
    for (auto el : vec) {
        std::cout << el << " ";
    }
 
    int sum = 0;
    for (auto el : vec) {
        sum += el;
    }
    std::cout << std::endl << "Sum: " << sum;
    std::cout.precision(10);
    std::cout << std::endl << "Avg: " << 1.0 * sum / vec.size();
 
    vec.erase(vec.begin() + 2);
    std::cout.put('\n');
    for (auto el : vec) {
        std::cout << el << " ";
    }
 
    std::cout.put('\n');
    for (size_t i = 1; i < vec.size(); ++i) {
        for (size_t j = i; j > 0; --j) {
            if (vec[j - 1] > vec[j]) {
                std::swap(vec[j - 1], vec[j]);
            }
        }
    }
    for (auto el : vec) {
        std::cout << el << " ";
    }
}
