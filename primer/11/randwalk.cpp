
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vect.h"
#include "vect.cpp"

int main(int argc, char const *argv[])
{

    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);

    unsigned long steps = 0;
    double target, dstep;

    ofstream fcout("rw.txt");

    cout << "Enter target distance ( q to quit):";
    while (cin >> target)
    {
        cout << "Enter step length:";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.set(dstep, direction, 'p');
            result = result + step;
            steps++;

            fcout << steps << ":" << step << endl;
        }

        fcout << "After " << steps << " steps, the subject "
                                      " has the fowllowing location: \n";
        fcout << result << endl;
        result.polar_mode();
        fcout << " or\n"
              << result << endl;
        fcout << "Average outward distaince per step = " << result.magval() / steps << endl;
        steps = 0;
        result.set(0.0, 0.0);
        cout << "Enter target distance (q to quit):";
    }

    cout << "Bye!\n";
    fcout.close();
    return 0;
}
