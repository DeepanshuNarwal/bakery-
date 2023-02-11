#include<iostream>
using namespace std;
int main()
{
    int day = 0;
    cout<<"menu\n";


    switch(day){
        case 0:
        cout<<" chicken burger";
        break;
        
        case 1:
        cout<<"veg burger";
        break;

        case 2:
        cout<<"cock&pepsi";
        break;

        case 3:
        cout<<"pizza";
        break;

        case 4:
        case 5:
        case 6:
        cout<<"italy pizza";
        break;
        default :
        cout<<"wrong input || Please enter the no between 1 to 6";
        break;
        return 0;

    }
}