
#include "BankAccount.hpp"
#include "BankAccount.cpp"

int main(int argc, char const *argv[])
{

    using namespace ba;
    BankAccount b("sdwang", "123", 100);

    b.deposite(50);
    b.withdrawal(100);
    b.showAccount();
    return 0;
}
