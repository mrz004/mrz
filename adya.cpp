#include<iostream>
using namespace std;

class length
{
private:
    float dis;
public:
void lencon();
}l;

class weight
{
private:
    float w;
public:
void weightcon();
}k;

class temperature
{
private:
    float t;
public:
void tempcon();
}tem;

int c;

void length::lencon(){
    cout<<"\nEnter 1 for km to mile & 2 for mile to km : ";
    cin>>c;
    if (c==1)
    {
        cout<<"\nEnter the distance in km : ";
        cin>>l.dis;
        l.dis=l.dis*0.62137;
        cout<<"\nDistance in mile : "<< l.dis;
    }
    else if (c==2)
    {
        cout<<"\nEnter the distance in mile : ";
        cin>>l.dis;
        l.dis=l.dis/0.62137;
        cout<<"\nDistance in km : "<< l.dis;
    }
    cout<<"\n\n";    
}

void weight::weightcon(){
    cout<<"\nEnter 1 for kg to pound & 2 for pound to kg : ";
    cin>>c;
    if (c==1)
    {
        cout<<"\nEnter the weight in kg : ";
        cin>>k.w;
        k.w=k.w*2.20462262185;
        cout<<"\nWeight in pound : "<< k.w;
    }
    else if (c==2)
    {
        cout<<"\nEnter the weight in pound : ";
        cin>>k.w;
        k.w=k.w/2.20462262185;
        cout<<"\nWeight in kg : "<<k.w;
    }
    cout<<"\n\n";    
}

void temperature::tempcon(){
    cout<<"\nEnter 1 for celsius to fahrenheit & 2 for fahrenheit to celsius : ";
    cin>>c;
    if (c==1)
    {
        cout<<"\nEnter the temperature in c : ";
        cin>>tem.t;
        tem.t=(tem.t*9/5)+32;
        cout<<"\nTemperature in f : "<< tem.t;
    }
    else if (c==2)
    {
        cout<<"\nEnter the temperature in f : ";
        cin>>tem.t;
        tem.t=(tem.t-32)*5/9;
        cout<<"\nTemperature in c : "<<tem.t;
    }
    cout<<"\n\n";    
}

int main()
{
    int ch;
    while(1){
        cout<<"select choice";
        cout<<"\n\t1)Length convertion";
        cout<<"\n\t2)Weight convertion";
        cout<<"\n\t3)Temperature convertion";
        cout<<"\n\t0)Exit";
        cin>>ch;

        switch (ch)
        {
        case 1:
            l.lencon();
            break;
        
        case 2:
            k.weightcon();
            break;
        
        case 3:
            tem.tempcon();
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