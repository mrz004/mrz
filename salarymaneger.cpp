#include <iostream>
#include <fstream>
using namespace std;

class emp
{
private:
    string name;
    unsigned short int id;
    unsigned long int salary;

public:
    void save();
    void seeAll();
    void search();
    void deleteAll();
} e;

void emp::save() {
    cout<<"\nEnter the name of employee : ";
    getchar();
    getline(cin, e.name);
    cout<<"\nEnter the employee ID : ";
    cin>>e.id;
    do
    {
    cout<<"\nEnter the salary of employee : ";
    cin>>e.salary;
    } while (e.salary>4294967295);
    

    ofstream info("info.txt", fstream::app);

    info<<"ID : "<<e.id<<" | Name : "<<e.name<<" | Salary : "<<e.salary<<"\n";

    info.close();
}
void emp::seeAll()
{
    string str;
    int i;

    cout<<"\n";

    ifstream info("info.txt");

    while (!info.eof())
    {
        getline(info,str);

        cout<<str<<"\n\n";
    }

    info.close();
}
void emp::search() {

    string str, s;

    cout<<"\nEnter something to search : ";
    cin>>s;

    ifstream info("info.txt");

    while (!info.eof())
    {
        getline(info,str);

        bool match;
        for (int i = 0; i < str.size(); i++)
        {
            match = false;

            if(str[i]==s[0]){
                for (int j = 0; j < s.size(); j++)
                {
                    if(str[i+j]==s[j]){
                        match = true;
                    }
                    else
                    {
                        match=false;
                        break;
                    }
                }
            }
            if(match==true){
                cout<<str<<"\n";
                break;
            }
        }
    }

    info.close();
}

void emp::deleteAll() {
    fstream info;
    info.open("info.txt", ios::out);
    info.close();
}

int main()
{
    fstream info("info.txt", ios::app);
    info.close();

    char choice;
    emp e;

    while (1)
    {
        cout << "\nR&S Pvt. Ltd.\nSelect :\n\t1)Save new record\n\t2)See all records\n\t3)Search\n\t4)Delete all records\n\t0)Exit\n";
        cin >> choice;

        switch (choice)
        {
        case '1':
            e.save();
            break;

        case '2':
            e.seeAll();
            break;

        case '3':
            e.search();
            break;

        case '4':
            e.deleteAll();
            break;

        case '0':
            exit(0);
            break;

        default:
            e.seeAll();
            break;
        }
    }

    return 0;
}
