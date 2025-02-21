#include <iostream>
#include <iomanip>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout << "Please input numbers to find average.\n";
        return 0;
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = 1; i < argc; ++i) {
        sum += std::atof(argv[i]);
        count++;
    }
    
    int average = sum / count;
    
    std::cout << "---------------------------------\n";
    std::cout << "Average of " << count << " numbers = " 
              << std::fixed << std::setprecision(3) << average << "\n";
    std::cout << "---------------------------------\n";
    
    return 0;
}

