#include <iostream>

using namespace std;

template <class T> T max5(T arr[5]) {
  T max;
  for (int i = 0; i < 5; i++) {
    if (i == 0 || max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int main(int argc, char *argv[]) {
  int arr1[5] = {1, 2, 3, 4, 5};
  cout << max5(arr1) << endl;
  double arr2[5] = {2.0, 3.0, 4.0, 1.0, 0.0};
  cout << max5(arr2) << endl;
  return 0;
}
