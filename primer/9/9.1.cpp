
#include "golf1.h"
#include "golf.cpp"

int main(int argc, char const *argv[])
{
    struct golf g[10];

    for (int i = 0; i < 10; i++)
    {
        setgolf(g[i]);

        if (g[i].fullname[0] == '\0')
        {
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        showgolf(g[i]);
    }

    return 0;
}
