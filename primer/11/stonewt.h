#ifndef STONEWT_H_

#define STONEWT_H_
#include <iostream>
using namespace std;

class Stonewt
{
public:
    enum
    {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    Stonewt operator+(const Stonewt &st);
    Stonewt operator-(const Stonewt &st);
    bool operator>=(const Stonewt &st);
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &st);
};

#endif