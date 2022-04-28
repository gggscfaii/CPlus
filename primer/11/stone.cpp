#include <iostream>
#include "stonewt.h"
#include "stonewt.cpp"

using namespace std;
void display(const Stonewt &st, int n);

Stonewt* getStonewt()
{

    Stonewt *st = new Stonewt(100, 200);
    return st;
}

int main()
{
    // Stonewt pavarotti = 260;
    // Stonewt wolfe(285.7);
    // Stonewt taft(21, 8);

    // cout << "The tenor weighed " << pavarotti;
    // // pavarotti.show_stn();
    // cout << "The detective weighed " << wolfe;
    // // wolfe.show_stn();
    // cout << "The president weighed " << taft;
    // // taft.show_lbs();
    // pavarotti = 265.8;
    // taft = 325;
    // cout << "After dinner, then tenor weighed " << taft;
    // // taft.show_lbs();
    // display(taft, 2);
    // cout << "The wrestler weighed even more.\n";
    // display(422, 2);
    // cout << "No Stone left unearned\n";

    // Stonewt jennySt(9, 12);
    // Stonewt bennySt(12, 8);

    // Stonewt total = jennySt + bennySt;
    // cout << total;
    // cout << total - jennySt;

    // Stonewt sts[6] = {Stonewt(9, 12), Stonewt(10, 13), Stonewt(11, 14)};

    // sort(sts, sts + 6, [](Stonewt &s1, Stonewt &s2)
    //      { return s1 >= s2; });

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << sts[i];
    // }

    // Stonewt testSt = jennySt;
    // cout << testSt;

    Stonewt *st = getStonewt();
    cout << "123\n";
    // cout << s;
    delete st;
    return 0;
}

void display(const Stonewt &st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}
