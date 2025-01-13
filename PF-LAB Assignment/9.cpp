#include <iostream>
using namespace std;

void modifyValue(int value) {
    value += 10;
    cout << "Inside function: " << value << endl;
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Outside function: " << num << endl;
    return 0;
}
