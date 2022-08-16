#include <iostream>

using namespace std;

int main()
{
    int arr[10]={10,21,63,74,59,67,97,33,449,110};
    int n,i;
    int found=0;
    cout<<"Enter the number you want to serach : ";
    cin>>n;
    for(i=0;i<10;i++){
        if(n==arr[i]){
            found=1;
            break;
        }
    }
    if(found==1){
        cout<<"Yes , number is present in array "<<endl;

    }else{
        cout<<"No , number is not present in array "<<endl;
    }

    return 0;
}
