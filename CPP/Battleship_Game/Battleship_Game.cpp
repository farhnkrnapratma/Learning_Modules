#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "Battleship Game\n\n";
    std::cout << "Size options:\n\n";

    std::vector<std::string> lists {"Exit", "4x4", "5x5", "7x7", "9x9", "12x12"};
    
    for(int i = 0; i < lists.size(); i++) {
        std::cout << "[" << i << "] "<< lists[i] << std::endl;
    }

    int options;
    std::cout << "\nEnter your option: ";
    std::cin >> options;

    if(options == 0) return 0;
    
    return 0;
}