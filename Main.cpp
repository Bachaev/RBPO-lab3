#include <iostream>

import BPZ1901.Bachaev.Lab3.Task1;
import BPZ1901.Bachaev.Lab3.Task2;
import BPZ1901.Bachaev.Lab3.Task3;
import BPZ1901.Bachaev.Lab3.Task4;
import BPZ1901.Bachaev.Lab3.Task5;

int main() {
    using namespace std;
    double x, eps;
    int n;
    int Task;
        cout << "Enter your data:" << endl;
        cout << "x = "; cin >> x;
        cout << "n = "; cin >> n;
        cout << "eps = "; cin >> eps;
    cout << " Please, choose number of the Task, what you want to output:" << endl;
        cout <<"Variants: "<<"    Task 1\n" << "        Task 2\n" << "        Task 3\n" << "        Task 4\n" << "        Task 5\n";
        cout << "Task "; cin >> Task;
        if (Task <= 0) return 0;
    switch (Task) {
        case(1):
                    cout << "\n namespace Task1:"
                         << "\n f_1(x)=" << RBPO::Lab3::Task1::f1(x)
                         << "\n f_2(x)=" << RBPO::Lab3::Task1::f2(x)
                         << "\n f_3(n)=" << RBPO::Lab3::Task1::f3(n)
                         << "\n f_4(n)=" << RBPO::Lab3::Task1::f4(eps);
            break;
        case(2):
                    cout << "\n namespace Task2:"
                         << "\n f_1(x)=" << RBPO::Lab3::Task2::f1(x)
                         << "\n f_2(x)=" << RBPO::Lab3::Task2::f2(x)
                         << "\n f_3(n)=" << RBPO::Lab3::Task2::f3(n)
                         << "\n f_4(n)=" << RBPO::Lab3::Task2::f4(eps);
            break;
        case(3):
                    cout << "\n namespace Task3:"
                         << "\n f_1(x)=" << RBPO::Lab3::Task3::f1(x)
                         << "\n f_2(x)=" << RBPO::Lab3::Task3::f2(x)
                         << "\n f_3(n)=" << RBPO::Lab3::Task3::f3(n)
                         << "\n f_4(n)=" << RBPO::Lab3::Task3::f4(eps);
            break;
        case(4):
                    cout << "\n namespace Task4:"
                         << "\n f_1(x)=" << RBPO::Lab3::Task4::f1(x)
                         << "\n f_2(x)=" << RBPO::Lab3::Task4::f2(x)
                         << "\n f_3(n)=" << RBPO::Lab3::Task4::f3(n)
                         << "\n f_4(n)=" << RBPO::Lab3::Task4::f4(eps);
            break;
        case(5):
                    cout << "\n namespace Task5:"
                         << "\n f_1(x)=" << RBPO::Lab3::Task5::f1(x)
                         << "\n f_2(x)=" << RBPO::Lab3::Task5::f2(x)
                         << "\n f_3(n)=" << RBPO::Lab3::Task5::f3(n)
                         << "\n f_4(n)=" << RBPO::Lab3::Task5::f4(eps);
            break;
    }
}
