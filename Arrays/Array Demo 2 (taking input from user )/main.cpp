#include <iostream>

using namespace std;

int main()
{   int arr[5],i;
    cout<<"Enter element of the array -"<<endl;
    for(i=0;i<5;i++){
        cout<<"Enter value for arr"<<endl;
        cin>>arr[i];
    }
    cout <<"Content of the array "<<endl;
    for(i=0;i<5;i++){
        cout<<"values of array["<<i<<"] is "<<arr[i]<<endl;
    }
    return 0;
}
