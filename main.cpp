#include <iostream>

import BPZ1901.Bachaev.Lab3.Task1;
import BPZ1901.Bachaev.Lab3.Task2;
import BPZ1901.Bachaev.Lab3.Task3;
int main() {
    using namespace std;
    double x, eps;
    int n;
    setlocale(LC_ALL, "ru");
    cout << "\n ������� x, n, eps:" << endl;
    cin >> x >> n >> eps;
    cout << "namespace Task1:"
         << "\n f_1(x)=" << RBPO::Lab3::Task1::f1(x)
         << "\n f_2(x)=" << RBPO::Lab3::Task1::f2(x)
         << "\n f_3(n)=" << RBPO::Lab3::Task1::f3(n)
         << "\n f_4(n)=" << RBPO::Lab3::Task1::f4(eps);
    cout << "\n namespace Task2:"
         << "\n f_1(x)=" << RBPO::Lab3::Task2::f1(x)
         << "\n f_2(x)=" << RBPO::Lab3::Task2::f2(x)
         << "\n f_3(n)=" << RBPO::Lab3::Task2::f3(n)
         << "\n f_4(n)=" << RBPO::Lab3::Task2::f4(eps);
    cout << "\n namespace Task3:"
        << "\n f_1(x)=" << RBPO::Lab3::Task3::f1(x)
        << "\n f_2(x)=" << RBPO::Lab3::Task3::f2(x)
        << "\n f_3(n)=" << RBPO::Lab3::Task3::f3(n)
        << "\n f_4(n)=" << RBPO::Lab3::Task3::f4(eps);


}