#include <iostream>

using namespace std;

long factorial(int n) {
  if (n == 0) {
    return 1L;
  }

  return n * factorial(n - 1);
}

int main(int argc, char *argv[]) {
  int n;

  while (cin >> n) {
    cout << factorial(n) << endl;
  }
  return 0;
}
