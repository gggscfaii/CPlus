
#include <iostream>
#include <new>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};

const int N = 5;
const int BUF = 2048;
char buffer[BUF];

int main(int argc, char const *argv[])
{
    chaff *ch1, *ch2;

    ch1 = new chaff[N];
    ch2 = new (buffer) chaff[N];

    for (int i = 0; i < N; i++)
    {
        char c1[N] = {'c', 'h', '1', '-', 65 + i}, c2[N] = {'c', 'h', '2', '-', 65 + i};
        strcpy(ch1[i].dross, c1);
        strcpy(ch2[i].dross, c2);
        ch1[i].slag = ch2[i].slag = i;
    }

    for (int i = 0; i < N; i++)
    {
        cout << ch1[i].dross << " at " << &ch1[i] << "; ";
        cout << ch2[i].dross << " at " << &ch2[i] << endl;
    }

    return 0;
}
