#include <iostream>

using namespace std;

const int ArSize = 10;
void strcount(const string *str);

int main(int argc, char const *argv[])
{
    string input;
    char next;

    cout << "Enter a line: \n";
    cin >> input;

    while (cin)
    {
        strcount(&input);
        cout << "Enter next line (empty line to quit): \n";
        cin >> input;
    }

    return 0;
}

void strcount(const string *str)
{
    static int total = 0;

    cout << *str << endl;

    cout << (*str).size() << " characters" << endl;
    total += (*str).size();
    cout << total << " characters total" << endl;
}