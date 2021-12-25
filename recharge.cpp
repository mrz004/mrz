#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

class offer
{
public:
    unsigned long int code, price, validity;
    string opr;
    float data;
    void add()
    {
        fstream f;
        cout << "Enter the unique offer code : ";
        cin >> code;
        cout << "Enter the oprator for offer : ";
        cin >> opr;
        cout << "Enter price of the offer : ";
        cin >> price;
        cout << "Enter the validity of the offer in months : ";
        cin >> validity;
        cout << "Enter per day data limit of the offer : ";
        cin >> data;
        f.open("offer.txt", ios::app);
        f << "\nOffer code : " << code << "|oprator      : " << opr<< "|price      : rs." << price << "|validity   : " << validity << " months|data limit : " << data << "Gb";
        f.close();
    }
} o;

void display()
{
    string str;

    cout << "\n";

    fstream f;
    f.open("offer.txt", ios::in);

    while (!f.eof())
    {
        getline(f, str);

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '|')
            {
                cout << "\n";
            }
            else
            {
                cout << str[i];
            }
        }
        cout << "\n\n";
    }

    f.close();
}

void recharge()
{
    string str, s, no;

    display();

    cout << "\nEnter offer code to recharge :";
    cin >> s;
    do{
    cout << "\nEnter the phone number to recharge :";
    cin >> no;
    }while (no.length()!=10);

    ifstream f("offer.txt");

    while (!f.eof())
    {
        getline(f, str);

        bool match;
        for (int j = 0; j < s.size(); j++)
        {
            match = false;

                    if (str[j+13] == s[j])
                    {
                        match = true;
                    }
                    else
                    {
                        match = false;
                        break;
                    }
            }
            if (match == true)
            {
                cout<<"\n";
                for (int i = 0; i < str.length(); i++)
                {
                    if (str[i] == '|')
                    {
                        cout << "\n";
                    }
                    else
                    {
                        cout << str[i];
                    }
                }
                cout<<"\nPhone number : "<<no;
                cout<<"\n\nEnter 'y' to conferm : ";
                cin>>s;
                if (s[0]=='y')
                {
                    cout<<"\n\nRecharge sucessful.\n";
                }
                else
                {
                    cout<<"\n\nRecharge unsucessful, we are sorry for the inconvinunce!\n";
                }
                
                
                break;
            }
    }

    f.close();
}

int main()
{
    int ch;

    fstream f;
    f.open("offer.txt", ios::app);
    f.close();

    while (1)
    {
        cout << "\nSelect a choice :\n";
        cout << "\n\t1) See offers";
        cout << "\n\t2) Recharge a number";
        cout << "\n\t3) Add a offer";
        cout << "\n\t0) Exit";
        cout << "\n\t:";
        cin >> ch;

        switch (ch)
        {
        case 1:
            display();
            break;

        case 2:
            recharge();
            break;

        case 3:
            o.add();
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