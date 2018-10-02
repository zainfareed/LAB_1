#include<iostream>
using namespace std;

main()
{
   int initial_amount, years,interest_rate,additional_deposit,amount,total_amount,saving,total_saving;
    cout<<"Initial Amount : ";
    cin>>initial_amount;
    cout<<endl;
    cout<<"Years : ";
    cin>>years;
    cout<<endl;
    cout<<"Interest Rate(%) : ";
    cin>>interest_rate;
    cout<<endl;
    total_saving=(initial_amount/100)*interest_rate;
    total_amount=initial_amount+total_saving;
    
     for(int i=1;i<=years;i++)
          {

            cout<<"Total Saving : "<<total_saving<<endl;
            cout<<"Total Amount : "<<total_amount<<endl<<endl;

            cout<<"Add Year "<<i<<" Amount : ";
           cin>>additional_deposit;
           cout<<endl;
 
           amount=total_amount+additional_deposit;
           saving=(amount/100)*interest_rate;
           total_saving=total_saving+saving;
           total_amount=amount+saving;
          }
          cout<<"Total Saving : "<<total_saving<<endl;
          cout<<"Total Amount : "<<total_amount<<endl<<endl;

    
return 0;
}
