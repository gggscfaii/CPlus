
#include <stdio.h>
#include <string.h>

struct Person
{
  char name[10];
};

struct Person getPerson()
{
  struct Person p;
  strcpy(p.name, "wang");
  return p;
}

int main(int argc, char *argv[])
{
  int a[] = {1, 2, 3};
  printf("%d\n", a[0]);

  struct Person p = getPerson();
  printf("%s\n", p.name);
  return 0;
}
