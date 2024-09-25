#include <iostream>
#include <string>
#include <windows.h>

struct person
{
    int account_number;
    std::string name;
    double balance;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    person* ptr = new person;
    std::cout << "Введите номер счёта: " << std::endl;
    std::cin >> ptr->account_number;
    std::cout << "Введите имя: " << std::endl;
    std::cin >> ptr->name;
    std::cout << "Введите баланс: " << std::endl;
    std::cin >> ptr->balance;

    std::cout << "Ваш счёт: " << ptr->account_number << ", ";
    std::cout << ptr->name << ", " << ptr->balance << std::endl;

}