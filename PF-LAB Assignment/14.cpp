#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum (int): " << findMax(10, 20) << endl;
    cout << "Maximum (double): " << findMax(15.5, 10.5) << endl;
    return 0;
}
