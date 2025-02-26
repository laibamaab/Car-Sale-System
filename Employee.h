#pragma once
#include "sale.h"
class Employee:public sale 
{
    string password;
    string Address;
    string hire_date;
    float salary;
    long contact;
public:
    Employee():sale()
    {
        password = "";
        contact = 0;
        Address = "";
        hire_date = "";
        salary=0.0;
    }
    Employee(string n,int i, string pass, string addr, string hire,float s,long con):sale(n,i)
    {
        password = pass;
        contact = con;
        Address = addr;
        hire_date = hire;
        salary=s;
    }
    string telladdress()
    {
        return password;
    }
    long tellcontact()
    {
        return contact;
    }
    string tellcnic()
    {
        return Address;
    }
    string telldate()
    {
        return hire_date;
    }
    float tellamount()
    {
        return salary;
    }
    void updatedate(string d)
    {
        hire_date=d;
    }
    void updateamount(float amnt)
    {
        salary=amnt;   
    }
    void get()
    {
    sale::get();
    cout << "Password: " << endl;
    cin >> password;
    cout << "Address: " << endl;
    cin.ignore();
    getline(cin, Address);
    cout << "Contact no: " << endl;
    cin >> contact;
    }

    void display()
    {
        sale::display();
        cout<<"Password: "<<password<<endl;
        cout<<"Contact no: "<<contact<<endl;
        cout<<"Address: "<<Address<<endl;
        cout<<"Hire Date: "<<hire_date<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};