#ifndef _SALES
#define _SALES _sales

namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s, double ar[], int n);

    void setSales(Sales &s);

    void showSales(const Sales &s);
}

#endif