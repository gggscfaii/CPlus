
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int age = 39;
  const int *pt = &age;
  //*pt += 1;
  // cin >> *pt;
  cout << age << endl;

  age = 40;
  cout << "*pt=" << *pt << endl;

  /* const int **pp2;
   int *p1;
   const int n = 13;
   pp2 = &p1;
   *pp2 = &n;
   *p1 = 10;

   cout << "*p1=" << *p1 << "*pp2=" << **pp2 << "n=" << n << endl;
   */

  int sloth = 3;
  // const int *ps = &solth;
  int *const finger = &sloth;

  *finger = 4;
  cout << "sloth=" << sloth << endl;
  return 0;
}
