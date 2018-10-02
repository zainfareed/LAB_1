#include<iostream>
#include"useful_array.h"


using namespace std;


main()
{
       int size,entry;
     cout<<"Enter the array size : ";
     cin>>size;
     int arr[size];
     
     cout<<endl<<"Enter the elements of array"<<endl;     
      for(int i=0;i<size;i++)
        {
         cout<<"Enter the element at index "<<i<<" : ";
         cin>>arr[i];
         cout<<endl;
        }
    

      cout<<"                  What you want to do "<<endl<<endl;
      cout<<"For Reversing Array Enter 1"<<endl;
      cout<<"For Rotating Array Enter 2"<<endl;
      cout<<"For Sorting Array Enter 3"<<endl;
      cout<<"For Searching in unsorted Array Enter 4"<<endl;
      cout<<"For Searching in sorted Array Enter 5"<<endl;
      cout<<"Your Entry : ";
      cin>>entry;
      cout<<endl;


      if(entry==1)
        {
          Reversing_array(arr,size);
        }
      else if(entry==2)
        {
          Rotating_array(arr,size);
        }
      else if(entry==3)
        {
          Sorting_array(arr,size);
        }
      else if(entry==4)
        {
          Searching_in_unsorted_array(arr,size);
        }
      else if(entry==5)
        {
           Searching_in_sorted_array(arr,size);
        }
      else
           cout<<"Invalid Entry"<<endl;






     
return 0;
}
