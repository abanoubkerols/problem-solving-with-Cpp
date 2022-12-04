#include <iostream>

using namespace std;
void printLine();
int main()
{
    printLine();
    cout<<"\t\t\t\t\t\tHey ! this is function demo";
    printLine();
    return 0;
}
void printLine(){
    cout<<endl;
    for(int i=0;i<35;i++){
        cout<<" ";
    }
    for(int i=0;i<50;i++){
        cout<<"*";
    }

        cout<<endl;
}
