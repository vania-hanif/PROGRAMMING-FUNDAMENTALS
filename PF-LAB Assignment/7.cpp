#include <iostream>
using namespace std;

// Function Prototype
void printSum(int a, int b);

int main() {
    printSum(10, 20);
    printSum(30, 40);
    return 0;
}

// Function Definition
void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}
