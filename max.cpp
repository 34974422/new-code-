#include <iostream>
using namespace std;

int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10, num2 = 20;
    cout << "The maximum is: " << maxNumber(num1, num2) << endl;
    return 0;
}