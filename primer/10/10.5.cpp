
#include <iostream>
#include <string.h>

using namespace std;

struct customer
{
    char fullname[50];
    double payment;
};

typedef struct customer Item;

class Stack
{
private:
    enum
    {
        MAX = 10
    };
    Item items[MAX];
    int top;

public:
    Stack()
    {
        top = 0;
    }

    bool isempty()
    {
        return top == 0;
    }

    bool isfull()
    {
        return top == MAX;
    }

    bool push(const Item &item)
    {
        if (top < MAX)
        {
            items[top++] = item;
            return true;
        }

        return false;
    }

    bool pop(Item &item)
    {
        if (top > 0)
        {
            item = items[--top];
            return true;
        }

        return false;
    }
};

int main(int argc, char const *argv[])
{

    Item item, item1, item2;

    Stack s;

    strcpy(item1.fullname, "wang");
    strcpy(item2.fullname, "shudong");
    item2.payment = 100;

    s.push(item1);
    s.push(item2);

    s.pop(item);

    cout << item.payment;
    return 0;
}
