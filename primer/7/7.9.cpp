#include <iostream>

using namespace std;

double add(double x, double y) { return x + y; }
double mul(double x, double y) { return x * y; }
double sub(double x, double y) { return x - y; }

double calculate(double x, double y, double (*f)(double, double)) {
  return f(x, y);
}

int main(int argc, char *argv[]) {

  double (*pf[3])(double, double) = {add, mul, sub};

  double x, y;
  while (cin >> x >> y) {
    for (int i = 0; i < 3; i++) {
      cout << calculate(x, y, pf[i]) << endl;
    }
  }
  return 0;
}
