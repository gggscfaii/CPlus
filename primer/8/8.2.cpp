#include <iostream>
#include <string.h>

using namespace std;

struct CandyBar {
  char *brandName;
  double weight;
  int hot;
};

void setCandyBar(struct CandyBar &b, const char *brandName, double weight,
                 int hot) {

  strcpy(b.brandName, brandName);
  b.weight = weight;
  b.hot = hot;
}

int main(int argc, char *argv[]) {
  struct CandyBar b;
  char s[] = {'1', '2', '3'};
  setCandyBar(b, s, 20.1, 20);
  cout << b.brandName << " " << b.weight << " " << b.hot << endl;
  return 0;
}
