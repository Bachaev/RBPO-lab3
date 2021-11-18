module BPZ1901.Bachaev.Lab3.Task3;
namespace RBPO::Lab3::Task3 {
    double f2(const double x) {
        if (x >= 1.1) return 9 - x;
        else return sin(3 * x) / (x * x * x * x + 1);
    }
}
