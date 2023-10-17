#include "Employeeh.h"
int main() {
    setlocale(0, "");
    Employee employees[5];
    employees[0] = { "Иванов", 1955, "Инженер", 60000.00, "Высшее" };
    employees[1] = { "Петров", 1963, "Менеджер", 55000.00, "Среднее" };
    employees[2] = { "Сидоров", 1957, "Программист", 65000.00, "Высшее" };
    employees[3] = { "Козлов", 1972, "Аналитик", 58000.00, "Высшее" };
    employees[4] = { "Смирнов", 1948, "Директор", 75000.00, "Высшее" };

    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (2023 - employees[i].birthYear > 60) {
            cout << "Фамилия: " << employees[i].lastName << endl;
            cout << "Год рождения: " << employees[i].birthYear << endl;
            cout << "Должность: " << employees[i].position << endl;
            cout << "Зарплата: " << employees[i].salary << endl;
            cout << "Образование: " << employees[i].education << endl;
            cout << endl;
            count++;
        }
    }

    cout << "Всего работников старше 60 лет: " << count << endl;
    return 0;
}