#include<iostream>
using namespace std;

main()
{
   int number,divider,counter=0;
    cout<<"Enter the number : ";
    cin>>number;
     for(divider=1;divider<=number;divider++)
         {
             if(number%divider==0)
                {counter++;}
                
         }
      if(counter>2)
       {
         cout<<number<<" is not prime "<<endl;
       }
       else
         {
         cout<<number<<" is prime"<<endl;
          }
   return 0;
}
