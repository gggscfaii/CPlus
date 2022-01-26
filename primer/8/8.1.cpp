#include <iostream>

using namespace std;

void printString(const char *s, int n = 0) {

  if (n > 0) {
    printString(s, --n);
  }

  cout << s << endl;
}

int main(int argc, char *argv[]) {
  char s[40];
  int n;

  while (cin >> s >> n) {
    printString(s, n);
  }
  return 0;
}
