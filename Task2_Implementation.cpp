module BPZ1901.Bachaev.Lab3.Task2;
namespace RBPO::Lab3::Task2
{
    double f1(const double x) {
        return cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
    }
    double f2(const double x) {
        if (x >= 1.1) return 9 - x;
        else return sin(3 * x) / (x * x * x * x + 1);
    }
    double a(const double i) {
        return pow(-1.0, i) * (i + 1) / (i * i * i + 2);
    }
    double f3(double n) {
        double f_3 = 0;
        while (n >= 0) {
            f_3 += a(n--);
        }
        return f_3;
    }
    double f4(double eps) {
        double prev_f4 = a(0);
        double curr_f4 = a(1);
        int k = 1;
        while (abs(prev_f4 - curr_f4) < eps && k < 999) {
            prev_f4 = curr_f4;
            curr_f4 = a(++k);
        }
        return curr_f4;
    }
}