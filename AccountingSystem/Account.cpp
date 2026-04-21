#include <iostream>
#include "Account.h"
using namespace std;

Account::Account()
{
    count = 0;
}

void Account::addRecord()
{
    int choice;

    cout << "1.收入 2.支出: ";
    cin >> choice;

    if (choice == 1)
        type[count] = "收入";
    else
        type[count] = "支出";

    cout << "種類: ";
    cin >> category[count];

    cout << "金額: ";
    cin >> amount[count];

    count++;

    cout << "新增成功！" << endl;
}

void Account::showRecords()
{
    for (int i = 0;i < count;i++)
    {
        cout << i + 1 << ". "
            << type[i] << " / "
            << category[i] << " / "
            << amount[i] << endl;
    }
}

void Account::deleteRecord()
{
    int num;
    showRecords();

    cout << "刪除編號: ";
    cin >> num;

    for (int i = num - 1;i < count - 1;i++)
    {
        type[i] = type[i + 1];
        category[i] = category[i + 1];
        amount[i] = amount[i + 1];
    }

    count--;
}

int Account::getCount()
{
    return count;
}

string Account::getType(int i)
{
    return type[i];
}

double Account::getAmount(int i)
{
    return amount[i];
}