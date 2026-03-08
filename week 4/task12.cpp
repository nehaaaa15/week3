#include<iostream>
using namespace std;
main(){
    int no1 , no2;
    cout<<"enter the 1st number";
    cin>>no1;
    cout<<"enter the 2nd number";
    cin>>no2;
    if(no1<no2){
        cout<<"number"<<no2<<"is greater then"<<no1;
    }
    else{
        cout<<"number"<< no1<<"is greater than"<<no2;
    }
}