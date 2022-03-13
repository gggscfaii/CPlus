
#include <iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

using namespace std;
namespace ba
{
    class BankAccount
    {

    private:
        string name;
        string account;
        long cash;

    public:
        BankAccount(string name, string account, long cash);
        void showAccount();
        long deposite(long cash);
        long withdrawal(long cash);
    };

}
#endif