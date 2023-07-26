//1. List functions in C++ STL (Standard Template Library)
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int> l1;
    for(int i=1;i<=5;i++)
    l1.push_back(i*10);

    l1.push_front(50);

    list <int>:: iterator x;

    for(x=l1.begin();x!=l1.end();x++)
    cout<<*x<<" ";

    l1.sort();
    cout<<endl;

    for(x=l1.begin();x!=l1.end();x++)
    cout<<*x<<" ";

     cout<<endl;
     l1.reverse();

     for(x=l1.begin();x!=l1.end();x++)
    cout<<*x<<" ";

   cout<<endl;

    cout<<"size of list is "<<l1.size()<<endl;

    cout<<"front element is"<<l1.front()<<endl;

    cout<<"max size of list"<<l1.max_size()<<endl;

    cout<<"back element"<<l1.back()<<endl;

    l1.pop_front();
    l1.pop_back();
    for(x=l1.begin();x!=l1.end();x++)
    cout<<*x<<" ";
    return 0;
}*/

//2. Assign the elements to the list (different methods) - Example of list::assign() | C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int> l1;
    for(int i=1;i<=5;i++)
    l1.push_back(i*10);
    
    l1.push_front(50);

     list <int>:: iterator x2;
      for(x2=l1.begin();x2!=l1.end();x2++)
       cout<<*x2<<" ";

    l1.assign(5,100);


    list <int>:: iterator x;
     x=l1.begin();
    l1.insert(x,50);

     list <int>:: iterator x1;
      for(x1=l1.begin();x1!=l1.end();x1++)
       cout<<*x1<<" ";

list <int> l2;
   for(int i=1;i<5;i++)
   {
    int x;
    cout<<"enter element";
    cin>>x;
    l2.push_back(x);
   }

   list<int>::iterator y;
 for(y=l1.begin();y!=l1.end();y++)
    cout<<*y<<" ";
   

}*/

//3. Iterate a list C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int> l1;
    for(int i=1;i<=5;i++)
    l1.push_back(i*10);
    
    l1.push_front(50);

     list <int>:: iterator x2;
      for(x2=l1.begin();x2!=l1.end();x2++)
       cout<<*x2<<" ";
       return 0;
}*/
//4. Iterate a list in reverse order C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int> l1;
    for(int i=1;i<=5;i++)
    l1.push_back(i*10);
    
    l1.push_front(50);

     list <int>:: reverse_iterator x2;
      for(x2=l1.rbegin();x2!=l1.rend();x2++)
       cout<<*x2<<" ";
       return 0;
}*/
//5. Input and add elements to a list C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> li;
     int x;
     while(true)
     {
        
        cout<<"enter a number(or 0 for stop)";
        cin>>x;
        if(x==0)
        break;
        else
        li.push_back(x);
     }
     list<int>:: iterator it;
     for(it=li.begin();it!=li.end();it++)
     {
        cout<<*it<<"  ";
     }
    return 0;
}*/

//6. Get the first and last element of the list C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> li={12,23,45,65,67};
     cout<<"first element of list is :"<<li.front()<<endl;
     cout<<"last element of list  is :"<<li.back();
     return 0;
}*/

//7. Insert the element at beginning and end of the list | C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> li={12,23,45,65,67};
     li.push_front(100);
     li.push_back(500);
     cout<<"first element of list is :"<<li.front()<<endl;
     cout<<"last element of list  is :"<<li.back();
     return 0;
}*/
//8. Remove all occurrences of an element and remove set of some specific from the list C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> li={12,23,45,65,67,12,34,12,56,78,90};
     li.remove(12);
     list<int>::iterator it;

    
     for(it=li.begin();it!=li.end();it++)
     {
        cout<<*it<<"  ";
     }
     return 0;
}*/

//9. Remove all consecutive duplicate elements from the list | C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> li={12,12,23,23,45,45,65,65};
     li.unique();
     list<int>::iterator it;

    
     for(it=li.begin();it!=li.end();it++)
     {
        cout<<*it<<"  ";
     }
     return 0;
}*/

//10. Merge two lists C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> l1={12,13,14,15,16};
     list<int> l2={17,18,19,20};
     l1.merge(l2);
     list<int>::iterator it;

    
     for(it=l1.begin();it!=l1.end();it++)
     {
        cout<<*it<<"  ";
     }
     return 0;
}*/

//11. Creating a list by assigning the all elements of another list C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> l1={12,13,14,15,16};
     list<int> l2={17,18,19,20};
     l1.assign(l2.begin(),l2.end());
    
     list<int>::iterator it;

    cout<<"after assigned l2 to l1"<<endl;
     for(it=l1.begin();it!=l1.end();it++)
     {
        cout<<*it<<"  ";
     }
     return 0;
}*/
//12. Assign a list with array elements C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
     list<int> l1;
    int arr[]={17,18,19,20};
     l1.assign(arr,arr+4);
     list<int>::iterator it;
    cout<<"after assigned array to l1"<<endl;
     for(it=l1.begin();it!=l1.end();it++)
     {
        cout<<*it<<"  ";
     }
     return 0;
}*/
//13. Push characters in a list and print them separated by space in C++ STL
/*#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<char> l3;
    for(char i='a';i<'z';i++)
    l3.push_back(i);

    for(char x: l3)
    cout<<x<<' ';

    return 0;
}*/
//14. Access elements of a characters list using const_iterator in C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<char> l3;
    for(char i='a';i<'z';i++)
    l3.push_back(i);

    list<char>::const_iterator it;
    for(it=l3.begin();it!=l3.end();it++)
     {
        cout<<*it<<"  ";
     }
     return 0;
}