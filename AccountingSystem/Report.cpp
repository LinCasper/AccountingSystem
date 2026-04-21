#include <iostream>
#include "Report.h"
using namespace std;

void Report::showSummary(Account& acc)
{
    double income = 0;
    double expense = 0;

    for (int i = 0;i < acc.getCount();i++)
    {
        if (acc.getType(i) == "收入")
            income += acc.getAmount(i);
        else
            expense += acc.getAmount(i);
    }

    cout << "總收入: " << income << endl;
    cout << "總支出: " << expense << endl;
    cout << "結餘: " << income - expense << endl;
}