#include <iostream>

using namespace std;

const int SLEN = 30;

struct student {

  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

int getinfo(student pa[], int n) {

  int entered = 0;
  for (int i = 0; i < n; i++) {
    cin >> pa[i].fullname >> pa[i].hobby >> pa[i].ooplevel;
    entered++;
  }

  return entered;
}

void display1(student st) {
  cout << st.fullname << " " << st.hobby << " " << st.ooplevel << endl;
  st.ooplevel = 20;
}

void display2(const student *ps) { display1(*ps); }

void display3(const student pa[], int n) {
  for (int i = 0; i < n; i++) {
    display1(pa[i]);
  }
}

int main(int argc, char *argv[]) {
  cout << "Enter class size: ";
  int class_size;
  cin >> class_size;
  while (cin.get() != '\n') {
    continue;
  }

  student *ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  cout << entered << endl;
  for (int i = 0; i < entered; i++) {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  return 0;
}
