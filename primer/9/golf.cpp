
#include <iostream>
#include <string.h>
#include "golf1.h"

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    std::cin >> g.fullname >> g.handicap;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << g.fullname << " " << g.handicap << std::endl;
}
