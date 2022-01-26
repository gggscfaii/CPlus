#include <iostream>

using namespace std;
#include <string.h>

struct stringy {
  string str;
  int ct;
};

void set(struct stringy &gy, const char *s) {
  gy.str = s;
  gy.ct = strlen(s);
}

void show(struct stringy gy, int n = 1) {
  for (int i = 0; i < n; i++) {
    cout << gy.str << " " << gy.ct << endl;
  }
}

void show(const char *s, int n = 1) {
  for (int i = 0; i < n; i++) {
    cout << s << endl;
  }
}

int main(int argc, char *argv[]) {
  stringy beany;
  char testing[] = "Reality isn't what is used to be.";
  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done! ");
  return 0;
}
