#include<iostream>
using namespace std;
main(){
    int no, even;
    cout<<"please enter the number";
    cin>>no;
    even = no%2;
    if (even==0){
        cout<<"the number is even ";
    }
    else{
        cout<<"the number id odd";
    }
}