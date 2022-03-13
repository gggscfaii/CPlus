
#include "BankAccount.hpp"

namespace ba
{

    ba::BankAccount::BankAccount(string name, string account, long cash)
    {
        this->name = name;
        this->account=account;
        this->cash=cash;
    }

    void ba::BankAccount::showAccount()
    {
        std::cout<<this->name<<endl;
        std::cout<<this->account<<endl;
        std::cout<<this->cash<<endl;
    }

    long ba::BankAccount::deposite(long cash)
    {
        this->cash+=cash;
        return this->cash;
    }

    long ba::BankAccount::withdrawal(long cash)
    {
        this->cash-=cash;
        return this->cash;
    }

}
