#include <iostream>

using namespace std;

int main()
{
   int sub[5],i,total=0;
   float pre ;//percentage
   cout<<"Enter markes for 5 subjects:"<<endl;
   for(i=0;i<5;i++){
    cout<<"Enter marke for subject ["<<i+1<<"]:";
    cin>>sub[i];
   }
   for(i=0;i<5;i++){
    total=total+sub[i];
   }
   pre=(float)total/5;
    cout<<endl<<"percentage:"<<pre;


    return 0;
}
