#pragma once
#include "sale.h"
class Car: public sale
{
    string fuel_type;
    string year;
    string deliverydate;
    float amountpaid;
    long price;
public:
    Car():sale()
    {
        fuel_type = "";
        year = "";
        deliverydate="0";
        amountpaid=0.0;
        price=0;
    }
    Car(string n,int i,string fuel, string yr,string d, float paid,long p):sale(n,i)
    {
        fuel_type = fuel;
        year = yr;
        deliverydate=d;
        amountpaid=paid;
        price=p;
    }
    void updatedate(string d)
    {
        deliverydate=d;
    }
    string telladdress()
    {
        return fuel_type;
    }
    long tellcontact()
    {
        return price;
    }
    string tellcnic()
    {
        return deliverydate;
    }
    string telldate()
    {
        return year;
    }
    float tellamount()
    {
        return amountpaid;
    }
    void updateamount(float amnt)
    {
        amountpaid=amnt;
    }
    void get()
    {
        sale::get();
        cout<<"Fuel type: "<<endl;
        cin>>fuel_type;
        cout<<"Year: "<<endl;
        cin>>year;
        cout<<"Price: "<<endl;
        cin>>price;
    }
    void display()
    {
        sale::display();
        cout<<"Fuel type: "<<fuel_type<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Delivery date: "<<deliverydate<<endl;
        cout<<"Amount paid: "<<amountpaid<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
