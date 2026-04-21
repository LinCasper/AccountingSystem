#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account
{
private:
    string type[100];
    string category[100];
    double amount[100];
    int count;

public:
    Account();

    void addRecord();
    void showRecords();
    void deleteRecord();

    int getCount();
    string getType(int i);
    double getAmount(int i);
};

#endif
