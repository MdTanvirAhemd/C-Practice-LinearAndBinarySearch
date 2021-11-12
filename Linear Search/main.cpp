#include <iostream>

using namespace std;

int main()
{

    int A[10] = {2,4,6,8,12,-3,5,7,9,11};
    int key;
    cout<<"Enter a key to search ";
    cin>>key;
    for (int i=0;i<10;i++)
    {
   //     cout<<A[i]<<endl;
        if(key==A[i])
        {
        cout<<"Key Element found at "<<i<<endl;
        exit(0);
        }

    }

    cout<<"Key Element not found"<<endl;

    return 0;
}
