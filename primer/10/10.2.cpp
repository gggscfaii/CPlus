
#include <iostream>
#include <string.h>

using namespace std;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person()
    {
        lname = "";
        fname[0] = '\0';
    }
    Person(const string &ln, const char *fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const
{
    cout << lname << endl;
}

void Person::FormalShow() const
{
    cout << fname << endl;
}

int main(int argc, char const *argv[])
{
    Person one, two("test"), three("wang", "shudong");
    one.Show();
    one.FormalShow();

    two.Show();
    two.FormalShow();

    three.Show();
    three.FormalShow();
    return 0;
}
