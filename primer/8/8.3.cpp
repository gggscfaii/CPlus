#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
  string s;

  cout << "Enter a string (q to quit):";
  while (cin >> s) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    cout << "Next string(q to quit):";
  }
  return 0;
}
