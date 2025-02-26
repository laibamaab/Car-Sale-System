#include"menu.h"
int main()
{
    menu a;
    a.heading();
    int choice;
    do
    {
        cout << "\t\t\t\t\t\t\t MAIN MENU" << endl;
        cout << "\t\t 1: System information." << endl;
        cout << "\t\t 2: Car information." << endl;
        cout << "\t\t 3: Customer information." << endl;
        cout << "\t\t 4: Employee information." << endl;
        cout << "\t\t 5: Exit." << endl;
        cout << "Please.. select your option: ";
        cin >> choice;
        if (choice == 1)
            a.sellmenu();
        else if (choice == 2)
            a.carmenu();
        else if (choice == 3)
            a.customermenu();
        else if (choice == 4)
            a.employeemenu();
    } 
    while (choice!=5);
}