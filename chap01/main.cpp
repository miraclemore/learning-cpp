#include <iostream>

int func_print();
int func_flowOfControl();

int main() {
    func_print();
    func_flowOfControl();

    return 0;
}

int func_print() {
    std::cout << "hello world" << std::endl;

    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    std::cout << "The multiply of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;

    return 0;
}

int func_flowOfControl() {
    int sum = 0, val = 1;

    while (val <= 10) {
        sum += val;     // assigns sum + val to sum
        ++val;          // add 1 to val
    }

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}

