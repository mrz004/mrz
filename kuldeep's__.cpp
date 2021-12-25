#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class enq
{
public:
    char temp[50];
    void get(string a);
};

void enq::get(string a)
{
    string s = "Class : ", data;
    s.append(a);
    s.append("\t");

    ifstream fee("fee.txt");

    while (!fee.eof())
    {
        getline(fee, data);

        bool match;
        for (int i = 0; i < data.size(); i++)
        {
            match = false;

            if (data[i] == s[0])
            {
                for (int j = 0; j < s.size(); j++)
                {
                    if (data[i + j] == s[j])
                    {
                        match = true;
                    }
                    else
                    {
                        match = false;
                        break;
                    }
                }
            }
            if (match == true)
            {
                cout<< "\n" << data << "\n\n";
                break;
            }
        }
    }

    fee.close();
}

enq obj;

int main()
{
    float f;
    int op;
    string x;
    fstream fee;
    fee.open("fee.txt", ios::in);
    if (!fee)
    {
        fee.open("fee.txt", ios::app);
        for (int i = 1; i < 11; i++)
        {
            cout << "\nEnter the school fee of class " << i;
            cin >> f;
            fee << "Class : " << i << "\tSchool fee : " << f << "\n";
        }
        fee.close();
    }
    else
    {
        fee.close();
    }

    while (1)
    {
        cout << "Enter 1 to search and 0 to exit : ";
        cin >> op;

        if (op == 1)
        {
            cout << "\nEnter the class : ";
            cin >> x;
            obj.get(x);
        }
        else if (op == 0)
        {
            exit(0);
        }
        else
        {
            continue;
        }
    }

    return 0;
}