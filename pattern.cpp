#include<iostream>
using namespace std;

int main()
{
  
   
        for(int i=1;i<=5;i++)
       {

         for(int j=1;j<=9;j++)
        {
          if(j==6-i||j==4+i)
           cout<<"*";
           else
            cout<<" ";
        }
        cout<<endl;
       
       
       
    }

      for(int i=1;i<=4;i++)
       {

         for(int j=1;j<=9;j++)
        {
          if(j==i+1||j==9-i)
           cout<<"*";
           else
            cout<<" ";
        }
        cout<<endl;
       }
return 0;

}