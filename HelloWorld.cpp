#include <iostream>

extern "C" int add(int a, int b);
extern "C" const char* hello();

int main() {
    std::cout << "Sum = " << add(2, 3) << "\n";
    std::cout << hello() << "\n";
    std::cout << "Press Enter to exit...";
    std::cin.get();
    return 0;
}


extern "C" int add(int a, int b);
extern "C" const char* hello();
