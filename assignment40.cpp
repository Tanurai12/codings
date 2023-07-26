//1. Inserts an element. And returns an iterator that points to the first of the newly inserted elements
/*#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::iterator it=dq.begin();
    it++;
    dq.insert(it,100);

    for(it=dq.begin();it!=dq.end();it++)
    cout<<*it<<"  ";

    return 0;
}*/


//2. Returns a reverse iterator which points to the last element of the deque (i.e., its reverse beginning).
/*#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::iterator it=dq.begin();
    cout<<"reverse oreder"<<endl;
    for(auto it=dq.rbegin();it!=dq.rend();it++)
    cout<<*it<<"  ";

    return 0;
}*/

//3. Returns a reverse iterator which points to the position before the beginning of the deque (which is considered its reverse end).

/*#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::iterator it=dq.begin();
    it++;
    dq.insert(it,100);

    for(auto it=dq.rbegin();it!=dq.rend();it++)
    cout<<*it<<"  ";

    return 0;
}*/

//4. Returns a constant iterator pointing to the first element of the container, that is, the iterator cannot be used to modify, only traverse the deque.

/*#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::  iterator it=dq.begin();
   
    dq.insert(it,100);

    for(auto it=dq.begin();it!=dq.end();it++)
    cout<<*it<<"  ";

    return 0;
}*/

//5. Returns the maximum number of elements that a deque container can hold
/*#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::  iterator it=dq.begin();

    for(auto it=dq.begin();it!=dq.end();it++)
    cout<<*it<<"  ";

    cout<<endl;
    cout<<"maximum number of element is: "<<dq.max_size();

    return 0;
}*/

//6. Assign values to the same or different deque container
/*#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> dq;
    dq.assign({1,2,3,4,5});
    deque<int> dq2;
    dq2.assign(dq.begin(),dq.end());
    cout<<"element of dq is:"<<endl;
    deque<int>::  iterator it;

    for(auto it=dq.begin();it!=dq.end();it++)
    cout<<*it<<"  ";

    cout<<endl;

    cout<<"element of dq2 is:"<<endl;
     deque<int>::  iterator itt;

    for(auto itt=dq2.begin();itt!=dq2.end();itt++)
    cout<<*itt<<"  ";

    cout<<endl;
   
    return 0;
}*/

//7. Return the first element and last element of the deque container.

/*#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::  iterator it=dq.begin();
    cout<<"element of dq is:"<<endl;
    for(auto it=dq.begin();it!=dq.end();it++)
    cout<<*it<<"  ";

    cout<<endl;
    cout<<" first element is: "<<dq.front()<<endl;
    cout<<" last element is: "<<dq.back()<<endl;
    return 0;
}*/

//8. Remove elements from a container from the specified position or range in deque.
/*#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> dq={1,2,3,4,5};
    deque<int>::  iterator it=dq.begin();
    cout<<"element of dq is:"<<endl;
    for(auto it=dq.begin();it!=dq.end();it++)
    cout<<*it<<"  ";
    cout<<endl;
    it++;
    dq.erase(it);
     for(auto it=dq.begin();it!=dq.end();it++)
    cout<<*it<<"  ";
    cout<<endl;
    return 0;
}*/

//9. Generate a permutation of first N natural numbers having count of unique adjacent differences equal to K | Set 2 using a queue.




