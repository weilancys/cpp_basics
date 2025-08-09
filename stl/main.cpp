#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>


int main(int argc, char const *argv[])
{
    // vector
    std::vector<int> vector_for_ints = {1, 2, 3, 10, 20, 30};
    vector_for_ints.push_back(100);
    for (int i : vector_for_ints) {
        std::cout << i << std::endl;
    }


    // map
    std::map<std::string, int> ages = {
        {"Jack", 35},
        {"Lucy", 9},
        {"Jim", 30}
    };
    for (const auto &pair: ages) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    
    // unordered_map
    std::unordered_map <std::string, int> scores = {
        {"Alice", 90},
        {"Bob", 80},
        {"Charlie", 70}
    };
    scores["Dave"] = 99;
    for (auto it = scores.begin(); it != scores.end(); ++it) {
        std::cout << it -> first << ": " << it -> second << std::endl;
    }
    for (const auto &pair: scores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }


    // set
    std::set<std::string> names = {"Alice", "Bob", "Charlie"};
    names.insert("Dave");
    for (const auto &name: names) {
        std::cout << name << std::endl;
    }


    // unordered_set
    std::unordered_set<int> numbers = {1, 2, 3, 4, 5};
    numbers.insert(6);
    for (const auto &number: numbers) {
        std::cout << number << std::endl;
    }


    return 0;
}