#include <iostream>

using namespace std;

int main() {
    // Настройка корректного отображения русского языка в консоли
    setlocale(LC_ALL, "Russian");

    int number; // Объявляем переменную для хранения числа
    cin >> number; // Считываем число с клавиатуры

    if (number > 0) {
        cout << "Положительное" << endl;
    } // Ваш код:



    return 0;
}
