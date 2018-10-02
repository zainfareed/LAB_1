#include<iostream>
#include"useful_array.h"

using namespace std;

int Reversing_array(int arr[], int size)
{
  
        cout<<"Reverse Array :  ";
        for(int i=size-1;i>=0;i--)
           cout<<arr[i]<<"    ";
           cout<<endl;

}


int Rotating_array(int arr[], int size)
{
    int y = arr[0];
   for(int i=0;i<size;i++)
        arr[i] = arr[i+1];
        arr[size-1] = y;

      cout<<"Rotating Array : ";
     for(int i=0;i<size;i++)
          cout<<arr[i]<<"   ";
          cout<<endl;
}
int Sorting_array(int arr[], int size)
{
      int y;
     
        for(int i=0;i<size;i++)
           for(int j=0;j<size-1;j++)
            {
              if(arr[j]>arr[j+1])
                 {y = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = y;}
            }

          cout<<"Sorted Array : ";      
          for(int i=0;i<size;i++)
                {              
                    cout<<arr[i]<<"   "; 
                }
}
int Searching_in_unsorted_array(int arr[], int size)
{
         int integer,indicator=0;

           cout<<"Enter the integer you want to find : ";
           cin>>integer;
           cout<<endl;
            for(int i=0;i<size;i++)
               {
                 if(integer==arr[i])
                     {
                        cout<<integer<<" is found at index "<<i<<endl;
                        indicator++;
                     }
                }
              if(indicator==0)
                    cout<<"integer not found"<<endl;
                       
}
int Searching_in_sorted_array(int arr[], int size)
{

      int y;
     
        for(int i=0;i<size;i++)
           for(int j=0;j<size-1;j++)
            {
              if(arr[j]>arr[j+1])
                 {y = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = y;}
            }
            int integer,indicator=0;

           cout<<"Enter the integer you want to find : ";
           cin>>integer;
           cout<<endl;
           cout<<"Sorted Array : ";      
          for(int i=0;i<size;i++)
                {              
                    cout<<arr[i]<<"   "; 
                }
           cout<<endl;
   
            for(int i=0;i<size;i++)
               {
                 if(integer==arr[i])
                     {
                        cout<<integer<<" is found at index "<<i<<endl;
                        indicator++;
                     }
                }
              if(indicator==0)
                    cout<<"integer not found"<<endl;
}
