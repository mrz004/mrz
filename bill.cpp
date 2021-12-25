// #include <iostream.h>
#include <iostream>
using namespace std;
#include <stdlib.h>

class person
{
public:
    float id, acc, units;
    string name, address;
    void get()
    {
        cout << "Enter the name of customer : ";
        cin >> name;
        cout << "Enter the address of customer : ";
        cin >> address;
        cout << "Enter the customer id : ";
        cin >> id;
        cout << "Enter the customer account number : ";
        cin >> acc;
        cout << "Enter the number of units consumed by customer : ";
        cin >> units;
    }
};
class domistic : public person
{
public:
    void display()
    {
        cout << "\n\n";
        cout << "\nName : " << name;
        cout << "\nAdderes : " << address;
        cout << "\nID : " << id;
        cout << "\nAccount No. : " << acc;
        cout << "\nUnits used : " << units;
        cout << "\nTotal bill : " << (units * 6);
        cout << "\n\n";
    }
};
class commercial : public person
{
public:
    void display()
    {
        cout << "\n\n";
        cout << "\nName : " << name;
        cout << "\nAdderes : " << address;
        cout << "\nID : " << id;
        cout << "\nAccount No. : " << acc;
        cout << "\nUnits used : " << units;
        cout << "\nTotal bill : " << (units * 9);
        cout << "\n\n";
    }
};

void show(domistic d[], commercial c[], int di, int ci)
{
    cout << "\nDomistic custmers :\n";
    if (di == 0)
    {
        cout << "\nNo result found!\n";
    }
    else
    {
        for (int i = 0; i < di; i++)
        {
            d[i].display();
        }
    }
    cout << "\nCommercial custmers :\n";
    if (ci == 0)
    {
        cout << "\nNo result found!\n";
    }
    else
    {
        for (int i = 0; i < ci; i++)
        {
            c[i].display();
        }
    }
}

void search(domistic d[], commercial c[], int di, int ci){
    string s;
    cout<<"\nEnter the name of customer : ";
    cin>>s;
    for (int i = 0; i < di; i++)
    {
        if (d[i].name==s)
        {
            d[i].display();
        }
    }
    for (int i = 0; i < ci; i++)
    {
        if (c[i].name==s)
        {
            c[i].display();
        }
    }
    
}

int main()
{
    int ch, di = 0, ci = 0;
    char cust;
    domistic d[10];
    commercial c[10];
    cout << "\nTejas Electricity Pvt. Ltd.\n\n";
    while (1)
    {
        cout << "\nSelect";
        cout << "\n1)Input\n2)Display\n3)Search\n0)Exit\n:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter c for commercial & d for domestic user : ";
            cin >> cust;
            if (cust == 'd')
            {
                if (di == 9)
                {
                    cout << "\nMax size reached for domestic customers!\n";
                }
                else
                {
                    d[di].get();
                    di++;
                }
            }
            else if (cust == 'c')
            {
                if (ci == 9)
                {
                    cout << "\nMax size reached for commercial customers!\n";
                }
                else
                {
                    c[ci].get();
                    ci++;
                }
            }

            break;

        case 2:
            show(d, c, di, ci);
            break;

        case 3:
            search(d, c, di, ci);
            break;

        case 0:
            exit(0);
            break;

        default:
            break;
        }
    }

    return 0;
}
