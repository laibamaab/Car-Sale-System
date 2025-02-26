#pragma once
#include "sale.h"
class Customer: public sale
{
    string address;
    string cnic;
    string date_of_purchase;
    float totalprice;
    long contact_no;
public:
    Customer():sale()
    {
        address = "";
        contact_no = 0;
        cnic = "";
        date_of_purchase = "0.0";
        totalprice=0.0;
    }
    Customer(string n,int i,string add,string cn,string purchase,float p,long cont):sale(n,i) 
    {
        address = add;
        contact_no = cont;
        cnic = cn;
        date_of_purchase = purchase;
        totalprice=p;
    }
    string telladdress()
    {
        return address;
    }
    long tellcontact()
    {
        return contact_no;
    }
    string tellcnic()
    {
        return cnic;
    }
    string telldate()
    {
        return date_of_purchase;
    }
    float tellamount()
    {
        return totalprice;
    }
    void updateamount(float amnt)
    {
        totalprice=amnt;
    }
    void updatedate(string d)
    {
        date_of_purchase=d;
    }
    void get()
    {
    sale::get();
    cout << "Address: " << endl;
    cin.ignore(); 
    getline(cin, address);
    cout << "Contact no: " << endl;
    cin >> contact_no;
    cout << "CNIC: " << endl;
    cin >> cnic;
}

    void display()
    {
        sale::display();
        cout<<"Address: "<<address<<endl;
        cout<<"Contact no: "<<contact_no<<endl;
        cout<<"CNIC: "<<cnic<<endl;
        cout<<"Date of purchase: "<<date_of_purchase<<endl;
        cout<<"Total Price: "<<totalprice<<endl;
    }
};