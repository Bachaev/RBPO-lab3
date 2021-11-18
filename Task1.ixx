export module BPZ1901.Bachaev.Lab3.Task1;
import <cmath>;
namespace RBPO::Lab3::Task1
{
    export double f1(const double x) {
        return cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
    }
    export double f2(const double x) {
        return ((x >= 1.1) ? (9 - x) : sin(3 * x) / (x*x*x*x + 1));
    }
    export double a(const double i) {
        return pow(-1.0, i) * (i + 1) / (i * i * i + 2);
    }
    export double f3(double n) {
        double f_3 = 0;
        for (int i = 0; i <= n; ++i) {
            f_3 += a(i);
        }
        return f_3;
    }
    export double f4(double eps) {
        int i;
        for (i = 0; abs(a(i) - a(i + 1)) < eps; ++i){}
        return a(i+1);
    }
}
