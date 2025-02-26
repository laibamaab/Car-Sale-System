#pragma once
#include<iostream>
using namespace std;
#include<string>
class sale
{
  string name;
  int id;
  public:
  sale(string n,int i)
  {
      name=n;
      id=i;
  }
  sale()
  {
    name="";
    id=0;
  }
  string tellname()
  {
      return name;
  }
  int tellid()
  {
      return id;
  }
  virtual void updatedate(string d)=0;
  virtual void updateamount(float amnt)=0;
  virtual string telladdress()=0;
  virtual long tellcontact()=0;
  virtual string tellcnic()=0;
  virtual string telldate()=0;
  virtual float tellamount()=0;
  virtual void get()
  {
    cout<<"Name: "<<endl;
    cin>>name;
    cout<<"Id: "<<endl;
    cin>>id;
  }
  virtual void display()
  {
      cout<<"Name: "<<name<<endl;
      cout<<"Id: "<<id<<endl;
  }
};