#include <iostream>

using namespace std;

int main()
{
    int arr[5],i;
    cout<<"Enter element of the array :"<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"\nContent of the array "<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"\nContent of the array in reverse order "<<endl;
    for(i=4;i>=0;i--){
        cout<<arr[i]<<endl;

    }
    return 0;
}
