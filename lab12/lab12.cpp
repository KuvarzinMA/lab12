#include <iostream>
#include <limits>  // ��� �������� �� ������������ ����

// ������� ��� ���������� ������ �����
int abs(int x) {
    if (x < 0)
        return -x;
    return x;
}

// ������� ��� �������� ��������� �� 3 ��� 5, �� �� �� ��� �����
bool is35(int x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return false;  // ���� ������� � �� 3, � �� 5
    }
    else if (x % 3 == 0 || x % 5 == 0) {
        return true;   // ���� ������� �� 3 ��� �� 5
    }
    return false;      // ���� �� ������� �� �� 3, �� �� 5
}

// ������� ��� ���������� ��������� �� ���� �����
int max3(int x, int y, int z) {
    int max = (x > y) ? x : y;
    return (max > z) ? max : z;
}

// ������� ��� ���������� ����� ���� ����� � ��������
int sum2(int x, int y) {
    int sum = x + y;
    if (sum >= 10 && sum <= 19) {
        return 20;
    }
    return sum;
}

// ������� ��� ����������� �������� ��� ������
std::string day(int x) {
    switch (x) {
    case 1: return "�����������";
    case 2: return "�������";
    case 3: return "�����";
    case 4: return "�������";
    case 5: return "�������";
    case 6: return "�������";
    case 7: return "�����������";
    default: return "��� �� ���� ������";
    }
}

// ������� ��� ����� ����� � ��������� �� ������������
int inputNumber() {
    int x;
    while (true) {
        std::cout << "������� ����� �����: ";
        std::cin >> x;

        if (std::cin.fail()) {  // �������� �� ������������ ����
            std::cin.clear();   // ����� ����� ������
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������� ������ �����
            std::cout << "������: ������� ���������� ����� �����." << std::endl;
        }
        else {
            break;  // ���������� ����, ������� �� �����
        }
    }
    return x;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");

    std::cout << "��������� � ����������� ���������: ������ �����, �������� ���������, ���������� ��������� �� ��� �����, ������� ����� � ���� ������." << std::endl;

    // ������ ������: ������ �����
    std::cout << "\n������ 1: ������ �����." << std::endl;
    int number1 = inputNumber(); // ���� ����� � ���������
    int absResult = abs(number1); // ���������� ������ �����
    std::cout << "������ �����: " << absResult << std::endl;

    // ������ ������: ��������� �� 3 ��� 5
    std::cout << "\n������ 2: �������� ��������� �� 3 ��� 5." << std::endl;
    int number2 = inputNumber(); // ���� ����� � ���������
    bool isDivisible35 = is35(number2);  // �������� �� ���������
    if (isDivisible35) {
        std::cout << "����� ������� �� 3 ��� 5, �� �� �� ��� �����." << std::endl;
    }
    else {
        std::cout << "����� ���� �� ������� �� 3 � 5, ���� ������� �� ��� �����." << std::endl;
    }

    // ������ ������: ���������� ��������� �� ���� �����
    std::cout << "\n������ 3: ������� ��������." << std::endl;
    std::cout << "������� ��� ����� ��� ���������� ���������." << std::endl;
    int x = inputNumber();  // ���� ������� �����
    int y = inputNumber();  // ���� ������� �����
    int z = inputNumber();  // ���� �������� �����
    int maxResult = max3(x, y, z);  // ���������� ��������� �� ���� �����
    std::cout << "�������� �� ��� �����: " << maxResult << std::endl;

    // ��������� ������: ������� �����
    std::cout << "\n������ 4: ������� �����." << std::endl;
    std::cout << "������� ��� ����� ��� ���������� �����." << std::endl;
    int a = inputNumber();  // ���� ������� �����
    int b = inputNumber();  // ���� ������� �����
    int sumResult = sum2(a, b);  // ���������� ����� ���� �����
    std::cout << "��������� �����: " << sumResult << std::endl;

    // ����� ������: ���� ������
    std::cout << "\n������ 5: ����������� ��� ������." << std::endl;
    int dayNumber = inputNumber(); // ���� �����, ������������� ���� ������
    std::string dayResult = day(dayNumber); // ��������� �������� ��� ������
    std::cout << "���������: " << dayResult << std::endl;

    return 0;
}
