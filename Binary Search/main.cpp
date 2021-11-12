#include <iostream>

using namespace std;

int main()
{
      int A[10] = {2,4,6,8,12,30,51,72,93,101};
    int l=0,h=9,key,mid;
    cout<<"Enter a key to search ";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at Index: "<<mid;
            return  0;
        }
        else if (key<A[mid])
        {
             h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"Not Found";
    return 0;
}
