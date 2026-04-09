#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    if (number >= 1 && number <= 10) {
        cout << "Число принадлежит диапазону" << endl;
    } else {
        cout << "Число не принадлежит диапазону" << endl;
    } 
    
    return 0;
}
