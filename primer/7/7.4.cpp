#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks) {
  long double result = 1.0;
  long double n;
  unsigned p;

  for (n = numbers, p = picks; p > 0; n--, p--) {
    result = result * n / p;
  }
  return result;
}

int main(int argc, char *argv[]) {
  double total1, choices1, total2, choices2;

  while ((cin >> total1 >> choices1 >> total2 >> choices2) &&
         choices1 <= total1 && choices2 <= total2) {

    cout << probability(total1, choices1) * probability(total2, choices2);
  }

  cout << "bye\n";
  return 0;
}
