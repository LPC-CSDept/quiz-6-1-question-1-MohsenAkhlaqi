
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************


#include <iostream>
#include <iomanip>

using namespace std;

void swapTwoValues(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapTwoValues(float f1, float f2) {
    float temp = f1;
    f1 = f2;
    f2 = temp;
}

void getinput(int& n1, int& n2) {
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
}

void getinput(float& f1, float& f2) {
    cout << "Enter two floats: ";
    cin >> f1 >> f2;
}

int main() {
    int n1, n2;
    getinput(n1, n2);
    swapTwoValues(n1, n2);
    cout << "After swapping: " << n1 << " " << n2 << endl;

    float f1, f2;
    getinput(f1, f2);
    swapTwoValues(f1, f2);
    cout << "After swapping: " << fixed << setprecision(2) << f1 << " " << f2 << endl;

    return 0;
}