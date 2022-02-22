#include <iostream>

using namespace std;

double harmonicAverage(int, int);

int main(int argc, char *argv[]) {
  int x, y;

  while (true) {
    cout << "please input x,y\n";
    cin >> x;
    cin >> y;

    if (x == 0 || y == 0) {
      cout << "program terminal\n";
      break;
    }

    cout << "harmonic average=" << harmonicAverage(x, y) << "\n";
  }
  return 0;
}

double harmonicAverage(int x, int y) { return 2.0 * x * y / (x + y); }
 