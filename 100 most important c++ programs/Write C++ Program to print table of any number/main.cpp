#include <iostream>

using namespace std;

int main()
{
    int i , n ;
    cout<<"Enter number for generate table : " ;
    cin >>n;
    cout<<"\n\n";
    for(i = 1 ; i<=10;++i){
        cout<<"\t"<<n << "*" << i << "=" <<n*i<<"\n ";
    }
    return 0;
}
