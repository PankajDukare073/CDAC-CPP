//19:Create menu driven program for Pizza Shop.And display total amount,
#include<iostream>
using namespace std;
int main()
{
    int choice=0;
    int total=0;
    cout<<"1.Menu driven program:";
    do{
    cout<<"\n\n1.hot&spicy veg - 145RS\n2.Sweet chilli chicken - 160Rs\n3.Italian Meat - 370RS \n4.Chilli fries - 120 \nPlease enter your choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        total+=145;
        cout<<"\n....thaks for buying hot&spicy veg..";
        break;
    case 2:
        total+=160;
        cout<<"\n....thaks for buying Sweet chilli chicken..";
        break;
    case 3:
        total+=370;
        cout<<"\n...thaks for buying Italian Meat..";
        break;
    case 4:
        total+=120;
        cout<<"\n...thaks for buying Chilli fries ..";
        break;
    case 5:
        cout<<"\nYour total bill is:"<<total; 
        break;
    default:
        cout<<"you enter the wrong choice...";
        
    }
    }while(choice!=5);
    return 0;
}