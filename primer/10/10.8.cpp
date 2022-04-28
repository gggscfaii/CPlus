#include <iostream>

using namespace std;

typedef long Item;

class List
{
private:
    enum
    {
        MAX = 10
    };
    Item items[MAX];
    int size;

public:
    List()
    {
        size = 0;
    }

    bool isempty()
    {
        return size == 0;
    }

    bool isfull()
    {
        return size == MAX;
    }

    bool add(const Item &item)
    {
        if (size < MAX)
        {
            items[size++] = item;
            return true;
        }

        return false;
    }

    void visit(void (*pf)(Item &item))
    {
        for (int i = 0; i < size; i++)
        {
            pf(items[i]);
        }
    }
};

int main(int argc, char const *argv[])
{

    List list;

    list.add(1);
    list.add(2);
    list.add(3);

    auto f = [](Item &item) {cout<<item<<endl;};
    list.visit(f);
    return 0;
}
