#include<iostream>
#include<string>
#include<queue>
#include<time.h>
using namespace std;
class Ticket
{
  public:
  string passenger;
  int tname;
};
 Ticket TicketCounter()
 {
   Ticket temp;
  
   cin>>temp.passenger;
   srand(time(NULL));
   temp.tname=rand();
   return temp;

 }
 void printTicket(queue <Ticket> q)
 {
    Ticket temp;
    cout<<"| Passenger name | Ticket Number"<<endl;
    cout<<"------------------"<<endl;
    while(!q.empty())
    {
       temp= q.front();
      cout<<"|"<<temp.passenger<<"|"<<temp.tname<<"|"<<endl;
      q.pop();
    }
    cout<<"------------------"<<endl;
 }
 int main()
 {
    queue <Ticket> q; 
    int n;
    cout<<"howmany passenger here "<<endl;
    cin>>n;
     cout<<"enter passenger name"<<endl;
    for(int i=0;i<n;i++)
    {
   
        q.push(TicketCounter());
        
    }
    printTicket(q);
   

    return 0;
 }