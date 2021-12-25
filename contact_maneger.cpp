#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

class contacts
{
public:
string name, num;
void saveCont();
void searchCont();
void allCont();
void reset();
};

contacts book;

void contacts::saveCont(){
    cout<<"\nEnter the name : ";
    getchar();
    getline(cin, book.name);
    book.num="";
    while(book.num.size()!=10){
            cout<<"Enter the number : ";
            cin>>book.num;
            if(book.num.size()!=10){
                cout<<"\n10 digit are mandatory!\ntry again\n\n";
            }
        }

    ofstream dataApp("data", fstream::app);

    dataApp<<"\n"<<book.name<<" : "<<book.num;

    dataApp.close();
}

void contacts::searchCont(){

    string con, s;

    cout<<"\nEnter string:";
    cin>>s;

    // opened file in in mode
    ifstream data("data");

    // running while loop whith eof() which will return 0 if end of file is not reached
    while (!data.eof())
    {
        // gets next line evry time
        getline(data,con);

        // declaring a bool variable to check matching variables
        bool match;
        for (int i = 0; i < con.size(); i++)
        {
            // resetting value of match to false for every charector
            match = false;

            if(con[i]==s[0]){
                for (int j = 0; j < s.size(); j++)
                {
                    if(con[i+j]==s[j]){
                        match = true;
                    }
                    else
                    {
                        match=false;
                        break;
                    }
                }
            }
            // printing the extracted line if the search string is found
            if(match==true){
                cout<<con<<"\n";
                break;
            }
        }
    }

    data.close();
}

void contacts::allCont(){
    string con;
    int i;

    cout<<"\n";

    ifstream dataIn("data");

    while (!dataIn.eof())
    {
        getline(dataIn,con);

        cout<<con<<"\n\n";
    }

    dataIn.close();
}

void contacts::reset(){
    // open in out mode which will auto matically empty the file
    ofstream dataOut("data");

    dataOut<<"NAME : NUMBER";
    
    dataOut.close();
}

int main(){
    // initial screen clear
    system("CLS");

    char option;

    // creating the file if it is not present
    ifstream data("data");
    if(!data){
        fstream data("data", fstream::app);
        data.close();
        book.reset();
    }
    data.close();

    // starting a infinight while loop
    while (1)
    {
        // accepting users choice to call function
        cout<<"\n PHONEBOOK\n\n\n Select the option : \n\n\t1}Save a new contact.\n\t2}Search for a contact.\n\t3}See all contacts.\n\t4}Reset and delete all contacts.\n\t0}Exit.\n\n";
        cin>>option;
        
        // calling functions according to users choice
        switch (option)
        {
        case '1':
            book.saveCont();
            break;
        
        case '2':
            book.searchCont();
            break;
        
        case '3':
            book.allCont();
            break;
        
        case '4':
            book.reset();
            break;
        
        case '0':
            exit(0);
            break;
        
        default:
            book.allCont();
            break;
        }

        // waiting for user and then clear the screen
        cout<<"\nPress enter to clear.";
        getchar();
        getchar();
        system("CLS");
    }
    
    return 0;
}


// {Author : Zahoorahmed S. Sayyad.}