#pragma once
#include"Customer.h"
#include"Car.h"
#include"Employee.h"
#include"sale.h"
#include<fstream>
class list
{
    int index=10;
    int iscar[10];
    sale *L[10];
    public:
    ~list()
    {
        for(int i=0;i<index;i++)
        {
        if(L[i]!=0)
        delete L[i];
        }
    }
    void buycar()
    {
    int Id;
    string Model;
    cout << "Enter Customer Id: ";
    cin >> Id;
    bool customerFound = false;
    for (int j = 0; j < index && !customerFound; j++) 
    {
        if (L[j]->tellid() == Id) 
        {
                customerFound = true;
                if (iscar[j] ==1) 
                {
                    cin.ignore();
                    cout << "Enter Car Model: ";
                    getline(cin, Model);
                    bool ModelFound = false;
                    for (int i = 0; i < index && !ModelFound; ++i) 
                    {
                        if (iscar[i]==0&& Model == L[i]->tellname()) 
                        {
                            
                                L[i]->display();
                                string date;
                                float amnt;
                                cout<<"Enter date: ";
                                getline(cin,date);
                                L[i]->updatedate(date);
                                L[j]->updatedate(date);
                                cout<<"Enter Amount Paid: ";
                                cin>>amnt;
                                L[i]->updateamount(amnt);
                                L[j]->updateamount(amnt);
                                ModelFound = true;
                                cout << "Car is bought by customer successfully." << endl;
                                updatefile();
                        }
                    }
                    if(!ModelFound)
                    cout<<"No Such car available."<<endl;
                }
        }
    }
    if(!customerFound)
    cout<<"No customer."<<endl;
    }
    void viewcarbymodel()
    {
    bool found = false;
    string n;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, n);
        for (int i = 0; i < index; i++)
        {
                if (n == L[i]->tellname())
                {
                    L[i]->display();
                    found = true;
                }
        }
        if (!found)
        cout << "Please... Enter VALID Name." << endl;
    }
    void searchbyid()
    {
    bool found = false;
    int n;
        cout << "Enter ID: ";
        cin >> n;
        for (int i = 0; i < index &&!found; i++)
        {
            if (n == L[i]->tellid())
            {
                L[i]->display();
                found = true;
            }
        }
        if (!found)
            cout << "Please... Enter VALID ID." << endl;
    }
    void update()
    {
    bool found = false;
    int n;
    cout << "Enter ID: ";
    cin >> n;
      for (int i = 0; i < index &&!found; i++)
      {
        if (n == L[i]->tellid())
        {
            L[i]->display();
            cout << endl;
            L[i]->get();
            found = true;
        }
      }
      if (!found)
        cout << "Please... Enter VALID ID." << endl;
    updatefile();
    }
    void paidamount()
    {
    float sum = 0.0;
     for (int i = 0; i < index ; i++)
     {
        if (iscar[i]==0)
        {
            sum = sum + L[i]->tellamount();
        }
     }
    cout << "\tTotal Paid Amount: " << sum << endl;
    }
    void get()
{
    string s1, s2, s3, s4, s5, s6, s7, s8;
    ifstream file("library.txt");
    index = 0; 

    while (getline(file, s1, ',') && getline(file, s2, ',') &&
           getline(file, s3, ',') && getline(file, s4, ',') &&
           getline(file, s5, ',') && getline(file, s6, ',') &&
           getline(file, s7, ',') && getline(file, s8))
    {
        if (s1 == "C")
        {
            L[index] = new Car(s2, stoi(s3), s4, s5, s6, stof(s7), stol(s8));
            iscar[index] = 0;
        }
        else if (s1 == "P")
        {
            L[index] = new Customer(s2, stoi(s3), s4, s5, s6, stof(s7), stol(s8));
            iscar[index] = 1;
        }
        else if (s1 == "E")
        {
            L[index] = new Employee(s2, stoi(s3), s4, s5, s6, stof(s7), stol(s8));
            iscar[index] = 2;
        }
        else
        {
        }
        index++; 
    }

    file.close();
}
void display(int n)
{
    for (int i = 0; i < index; i++)
    {
        if (n == 1)
        {
            L[i]->display();
        }
        else if (n == 2 && iscar[i] == 0)
        {
            L[i]->display();
        }
        else if (n == 3 && iscar[i] == 1)
        {
            L[i]->display();
        }
        else if (n == 4 && iscar[i] == 2)
        {
            L[i]->display();
        }
        else
        {
        }
    }
}

void totalamount()
{
    float sum = 0.0;
    for (int i = 0; i < index ; i++)
    {
        if (iscar[i]==0)
        {
            sum = sum + L[i]->tellcontact();
        }
    }
    cout << "\tTotal Amount of Cars: " << sum << endl;
}
void updatefile()
{
    ofstream file("library.txt");
    for (int i = 0; i < index; i++)
    {
        if (iscar[i]==0)
        {
            file << "C," << L[i]->tellname() << "," << L[i]->tellid() << ","
                << L[i]->telladdress() << "," << L[i]->tellcnic() << ","
                << L[i]->telldate() << "," << L[i]->tellamount() <<"," << L[i]->tellcontact() << endl;
        }
        if (iscar[i]==1)
        {
            file << "P," << L[i]->tellname() << "," << L[i]->tellid() << ","
                << L[i]->telladdress() << "," << L[i]->tellcnic() << ","
                << L[i]->telldate() << "," << L[i]->tellamount() <<"," << L[i]->tellcontact() << endl;
    
        }
        else if (iscar[i]==2)
        {
            file << "E" << "," << L[i]->tellname() << "," << L[i]->tellid() << ","
                << L[i]->telladdress() << "," << L[i]->tellcontact() << ","
                << L[i]->tellcnic() << "," << L[i]->telldate() <<"," << L[i]->tellamount() << endl;
        }
        else
        {}
    }
    file.close();
}
void storeinfile()
{
    ofstream file("output.txt");
    for (int i = 0; i < index; i++)
    {
        file << "Name: " << L[i]->tellname() << endl;
        file << "ID: " << L[i]->tellid() << endl;
        if (iscar[i]==0)
        {
            file << "Address: " << L[i]->telladdress() << endl;
            file << "Contact no: " << L[i]->tellcontact() << endl;
            file << "CNIC: " << L[i]->tellcnic() << endl;
            file << "Date of purchase: " << L[i]->telldate() << endl;
            file << "Total price: " << L[i]->tellamount() << endl;
            file << endl ;
        }
        else if (iscar[i]==1)
        {
            file << "Fuel type: " << L[i]->telladdress() << endl;
            file << "Price: " << L[i]->tellcontact() << endl;
            file << "Delivery Date: " << L[i]->tellcnic() << endl;
            file << "Year: " << L[i]->telldate() << endl;
            file << "Amount Paid: " << L[i]->tellamount() << endl;
            file << endl ;
        }
        else if (iscar[i]==2)
        {
            file << "Password: " << L[i]->telladdress() << endl;
            file << "Contact No: " << L[i]->tellcontact() << endl;
            file << "Address: " << L[i]->tellcnic() << endl;
            file << "Hire Date: " << L[i]->telldate() << endl;
            file << "Salary: " << L[i]->tellamount() << endl;
            file << endl;
        }
        else
        {}
    }
    file.close();
}
    void deletel(int id) 
{
    int foundIndex = -1; 

    for (int i = 0; i < index && foundIndex == -1; i++) 
    {
        if (L[i] != nullptr && id == L[i]->tellid())
        {
            foundIndex = i;
        }
    }
    if (foundIndex != -1) 
    {
        int iscarValue = iscar[foundIndex]; 
        delete L[foundIndex]; 
        L[foundIndex] = nullptr;
        for (int i = foundIndex; i < index - 1; i++) 
        {
            L[i] = L[i + 1];
            iscar[i] = iscar[i + 1];
        }
        iscar[index - 1] = 0; 
        index--; 
        updatefile();
    }
    else 
    {
        cout << "ID not found." << endl;
    }
}
};