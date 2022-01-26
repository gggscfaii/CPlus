#include <iostream>
using namespace std;

struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void display(struct box b) {
  cout << "maker=" << b.maker << endl;
  cout << "height=" << b.height << ",width" << b.width << endl;
  cout << "length=" << b.length << endl;
  cout << "volume=" << b.volume << endl;
}

void setVolume(struct box &b) { b.volume = b.width * b.height * b.length; }

int main(int argc, char *argv[]) {
  struct box b;

  b.maker[0] = '1';
  b.height = 10;
  b.width = 20;
  b.length = 10;

  setVolume(b);
  display(b);
  return 0;
}
