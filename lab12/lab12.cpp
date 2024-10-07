#include <iostream>
#include <limits>  // Для проверки на некорректный ввод

// Функция для нахождения модуля числа
int abs(int x) {
    if (x < 0)
        return -x;
    return x;
}

// Функция для проверки делимости на 3 или 5, но не на оба сразу
bool is35(int x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return false;  // Если делится и на 3, и на 5
    }
    else if (x % 3 == 0 || x % 5 == 0) {
        return true;   // Если делится на 3 или на 5
    }
    return false;      // Если не делится ни на 3, ни на 5
}

// Функция для нахождения максимума из трех чисел
int max3(int x, int y, int z) {
    int max = (x > y) ? x : y;
    return (max > z) ? max : z;
}

// Функция для нахождения суммы двух чисел с условием
int sum2(int x, int y) {
    int sum = x + y;
    if (sum >= 10 && sum <= 19) {
        return 20;
    }
    return sum;
}

// Функция для возвращения названия дня недели
std::string day(int x) {
    switch (x) {
    case 1: return "понедельник";
    case 2: return "вторник";
    case 3: return "среда";
    case 4: return "четверг";
    case 5: return "пятница";
    case 6: return "суббота";
    case 7: return "воскресенье";
    default: return "это не день недели";
    }
}

// Функция для ввода числа с проверкой на корректность
int inputNumber() {
    int x;
    while (true) {
        std::cout << "Введите целое число: ";
        std::cin >> x;

        if (std::cin.fail()) {  // Проверка на некорректный ввод
            std::cin.clear();   // Сброс флага ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера ввода
            std::cout << "Ошибка: введите корректное целое число." << std::endl;
        }
        else {
            break;  // Корректный ввод, выходим из цикла
        }
    }
    return x;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");

    std::cout << "Программа с несколькими функциями: модуль числа, проверка делимости, нахождение максимума из трёх чисел, двойная сумма и день недели." << std::endl;

    // Первая задача: модуль числа
    std::cout << "\nЗадача 1: Модуль числа." << std::endl;
    int number1 = inputNumber(); // Ввод числа с проверкой
    int absResult = abs(number1); // Нахождение модуля числа
    std::cout << "Модуль числа: " << absResult << std::endl;

    // Вторая задача: делимость на 3 или 5
    std::cout << "\nЗадача 2: Проверка делимости на 3 или 5." << std::endl;
    int number2 = inputNumber(); // Ввод числа с проверкой
    bool isDivisible35 = is35(number2);  // Проверка на делимость
    if (isDivisible35) {
        std::cout << "Число делится на 3 или 5, но не на оба сразу." << std::endl;
    }
    else {
        std::cout << "Число либо не делится на 3 и 5, либо делится на оба сразу." << std::endl;
    }

    // Третья задача: нахождение максимума из трех чисел
    std::cout << "\nЗадача 3: Тройной максимум." << std::endl;
    std::cout << "Введите три числа для нахождения максимума." << std::endl;
    int x = inputNumber();  // Ввод первого числа
    int y = inputNumber();  // Ввод второго числа
    int z = inputNumber();  // Ввод третьего числа
    int maxResult = max3(x, y, z);  // Нахождение максимума из трех чисел
    std::cout << "Максимум из трёх чисел: " << maxResult << std::endl;

    // Четвертая задача: двойная сумма
    std::cout << "\nЗадача 4: Двойная сумма." << std::endl;
    std::cout << "Введите два числа для вычисления суммы." << std::endl;
    int a = inputNumber();  // Ввод первого числа
    int b = inputNumber();  // Ввод второго числа
    int sumResult = sum2(a, b);  // Нахождение суммы двух чисел
    std::cout << "Результат суммы: " << sumResult << std::endl;

    // Пятая задача: день недели
    std::cout << "\nЗадача 5: Определение дня недели." << std::endl;
    int dayNumber = inputNumber(); // Ввод числа, обозначающего день недели
    std::string dayResult = day(dayNumber); // Получение названия дня недели
    std::cout << "Результат: " << dayResult << std::endl;

    return 0;
}
