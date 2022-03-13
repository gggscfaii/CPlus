
#include <iostream>
#include "sales.hpp"

namespace SALES
{
    using namespace std;
    void setSales(Sales &s, double ar[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            s.sales[i] = ar[i];
        }

        setSales(s);
    }

    void setSales(Sales &s)
    {
        double sum = 0.0, min = s.sales[0], max = s.sales[0];
        double *ar;

        ar = s.sales;
        for (int i = 0; i < QUARTERS; i++)
        {
            sum += ar[i];

            if (min > ar[i])
                min = ar[i];
            if (max < ar[i])
                max = ar[i];
        }

        s.average = sum / QUARTERS;
        s.max = max;
        s.min = min;
    }

    void showSales(const Sales &s)
    {
        cout << s.average << " " << s.min << " " << s.max << endl;
    }

}