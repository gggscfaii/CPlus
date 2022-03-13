
#include "sales.hpp"
#include "sales.cpp"

using namespace SALES;

int main(int argc, char const *argv[])
{
    Sales s;

    double ar[] = {1.0, 2.0, 3.0, 4.0};
    setSales(s, ar, 4);
    showSales(s);
    return 0;
}
