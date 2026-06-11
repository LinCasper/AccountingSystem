#include <iostream>
#include "Account.h"
#include "Report.h"
using namespace std;

int main()
{
    Account acc;
    Report rep;

    int choice;

    do
    {
        cout << endl;
        cout << "1.新增記帳紀錄" << endl;
        cout << "2.顯示紀錄" << endl;
        cout << "3.刪除紀錄" << endl;
        cout << "4.統計報表" << endl;
        cout << "0.離開" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1: acc.addRecord(); break;
        case 2: acc.showRecords(); break;
        case 3: acc.deleteRecord(); break;
        case 4: rep.showSummary(acc); break;
        }

    } while (choice != 0);

    return 0;
}
