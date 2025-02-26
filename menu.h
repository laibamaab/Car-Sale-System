#include"list.h"
class menu 
{
    list a;
public:
    void heading()
    {
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        cout << "\n\n\t\t\t\t\t\t\t\t\t\tCAR SALE SYSTEM" << endl << endl << endl;
        for (int i = 0; i < 168; i++)
        {
            cout << "*";
        }
        a.get();
    }
    void sellmenu()
    {
        int c;
        do
        {
            cout << "\n\t\t\t 1: Display all information." << endl;
            cout << "\t\t\t 2: Buy Car." << endl;
            cout << "\t\t\t 3: Total amount of all Cars." << endl;
            cout << "\t\t\t 4: Store information in file." << endl;
            cout << "\t\t\t 5: Main Menu." << endl;
            cout << "Please.. select your option: ";
            cin >> c;
            if (c == 1)
            {
                cout << endl << endl << endl;
                cout << "\nDisplay information of all system." << endl;
                a.display(1);
            }
            else if (c == 2)
            {
                cout << endl << endl << endl;
                cout << "Buy Car." << endl;
                a.buycar();
            }
            else if (c == 3)
            {
                cout << endl << endl << endl;
                cout << "Total Price of all Cars." << endl;
                a.totalamount();
            }
            else if (c == 4)
            {
                cout << endl << endl << endl;
                cout << "File created successful." << endl;
                a.storeinfile();
            }
            else
            {
            }
        } while (c != 5);
    }
    void carmenu()
    {
        int c;
        do
        {
            cout << "\n\t\t\t 1: Display all information." << endl;
            cout << "\t\t\t 2: Search by ID." << endl;
            cout << "\t\t\t 3: Search by Model." << endl;
            cout << "\t\t\t 4: Update information." << endl;
            cout << "\t\t\t 5: Delete information." << endl;
            cout << "\t\t\t 6: Main Menu." << endl;
            cout << "Please.. select your option: ";
            cin >> c;
            if (c == 1)
            {
                cout << endl << endl << endl;
                cout << "Information of all Cars." << endl;
                a.display(2);
            }
            else if (c == 2)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.searchbyid();
            }
            else if (c == 3)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.viewcarbymodel();

            }
            else if (c == 4)
            {
                cout << endl << endl << endl;
                cout << "Update information." << endl;
                a.update();
            }
            else if (c == 5)
            {
                int n;
                cout << endl << endl << endl;
                cout << "Delete information." << endl;
                cout << "Enter Car Id: ";
                cin >> n;
                a.deletel(n);
            }
            else
            {}
        } while (c != 6);
    }
    void customermenu()
    {
        int c;
        do
        {
            cout << "\n\t\t\t 1: Display all information." << endl;
            cout << "\t\t\t 2: Search by ID." << endl;
            cout << "\t\t\t 3: Search by name." << endl;
            cout << "\t\t\t 4: Update information." << endl;
            cout << "\t\t\t 5: Delete information." << endl;
            cout << "\t\t\t 6: Main Menu." << endl;
            cout << "Enter choice: ";
            cin >> c;
            if (c == 1)
            {
                cout << endl << endl << endl;
                cout << "Information of all Customers." << endl;
                a.display(3);
            }
            else if (c == 2)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.searchbyid();
            }
            else if (c == 3)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.viewcarbymodel();
            }
            else if (c == 4)
            {
                cout << endl << endl << endl;
                cout << "Update information." << endl;
                a.update();
            }
            else if (c == 5)
            {
                int n;
                cout << endl << endl << endl;
                cout << "Delete information." << endl;
                cout << "Enter Customer Id: ";
                cin >> n;
                a.deletel(n);
            }
            else
            {}
        } while (c != 6);
    }
void employeemenu()
    {
        int c;
        do
        {
            cout << "\n\t\t\t 1: Display all information." << endl;
            cout << "\t\t\t 2: Search by ID." << endl;
            cout << "\t\t\t 3: Search by name." << endl;
            cout << "\t\t\t 4: Update information." << endl;
            cout << "\t\t\t 5: Delete information." << endl;
            cout << "\t\t\t 6: Main Menu." << endl;
            cout << "Enter choice: ";
            cin >> c;
            if (c == 1)
            {
                cout << endl << endl << endl;
                cout << "Information of all Employees." << endl;
                a.display(4);
            }
            else if (c == 2)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.searchbyid();
            }
            else if (c == 3)
            {
                cout << endl << endl << endl;
                cout << "Search information." << endl;
                a.viewcarbymodel();
            }
            else if (c == 4)
            {
                cout << endl << endl << endl;
                cout << "Update information." << endl;
                a.update();
            }
            else if (c == 5)
            {
                int n;
                cout << endl << endl << endl;
                cout << "Delete information." << endl;
                cout << "Enter Employee Id: ";
                cin >> n;
                a.deletel(n);
            }
            else
            {}
        } while (c!=6);
    }
};
