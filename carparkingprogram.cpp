#include<iostream>
using namespace std;
int main()
{
    int t = 0;
    int b = 0;
    int c = 0;
    int amount = 0;
    int total = 0;
    int op;

    while(true)
    {

    cout<<"press 1 for taxi parking"<<endl;
    cout<<"press 2 for bus parking"<<endl;
    cout<<"press 3 for car parking"<<endl;
    cout<<"press 4 to check the records"<<endl;
    cout<<"press 5 to delete the records"<<endl;

    cin>>op;

    switch(op){
case 1:
    if(total <= 50)
    {
        amount = amount + 200;
        total = total + 1;
        t = t + 1;
    }
    else
    {
        cout<<"parking is full, no more vehicles"<<endl;
    }
     break;
    case 2:
        if(total <= 50)
        {
            amount = amount + 300;
            total = total + 1;
            b = b + 1;
        }
        else
        {
            cout<<"parking is full, no more vehicles"<<endl;
        }
    case 3:
        if(total <= 50)
        {
            amount = amount + 300;
            total = total + 1;
            c = c + 1;
        }
        else
        {
            cout<<"parking is full, no more vehicles"<<endl;
        }
        break;
    case 4:
        cout<<"************************";
        cout<<"number of taxis parked"<<t<<endl;
        cout<<"number of buses parked"<<b<<endl;
        cout<<"number of car parked"<<c<<endl;
        cout<<"total amount is:"<<amount<<endl;
        cout<<"total no of vehicles:"<<total<<endl;
        cout<<"************************";
        break;
    case 5:
    amount = 0;
    total = 0;
    b = 0;
    c = 0;
    t = 0;
    cout<<"************************";
    cout<<"Record Deleted"<<endl;
    cout<<"************************";
    break;
    default:
        cout<<"Invalid Number"<<endl;
    }
  }

}
