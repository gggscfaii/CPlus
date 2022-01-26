#include <iostream>

using namespace std;

const int MAX_LEN = 10;
int arr[MAX_LEN];

void handleInput();

int sum();

double avg();

int main(int argc, char *argv[]) {

  handleInput();
  cout << sum() << endl;
  cout << avg() << endl;
  return 0;
}

void handleInput() {

  for (int i = 0; i < MAX_LEN; i++) {
    cin >> arr[i];
  }
}

int sum() {
  int sum = 0;
  for (int i = 0; i < MAX_LEN; i++) {
    sum += arr[i];
  }
  return sum;
}

double avg() {
  int sum = 0;
  for (int i = 0; i < MAX_LEN; i++) {
    sum += arr[i];
  }
  return sum * 1.0 / MAX_LEN;
}
