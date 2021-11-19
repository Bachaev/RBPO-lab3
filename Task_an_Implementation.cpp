module BPZ1901.Bachaev.Lab3.Task4:a_n;
import <cmath>;
namespace RBPO::Lab3::Task4 {
    double a(const double i) {
        return pow(-1.0, i) * (i + 1) / (i * i * i + 2);
    }
}
