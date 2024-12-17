#include <iostream>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Задание 1
    const int rows = 1;
    const int cols = 5;
    int array[rows][cols];

    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    for (int j = 0; j < cols; j++) {
        if (j == 0) {
            array[0][j] = number;
        }
        else {
            array[0][j] = array[0][j - 1] * 2;
        }
    }

    std::cout << "Созданный массив:\n";
    for (int j = 0; j < cols; j++) {
        std::cout << array[0][j] << " ";
    }
    std::cout << "\n";

    //Задание 2
    const int rows1 = 1;
    const int cols1 = 5;
    int array1[rows1][cols1];

    int number1;
    std::cout << "Введите число: ";
    std::cin >> number1;

    for (int j = 0; j < cols1; j++) {
        if (j == 0) {
            array1[0][j] = number1;
        }
        else {
            array1[0][j] = array1[0][j - 1] + 1;
        }
    }

    std::cout << "Созданный массив:\n";
    for (int j = 0; j < cols1; j++) {
        std::cout << array1[0][j] << " ";
    }
    std::cout << "\n";

    return 0;
}