#include<iostream>
using namespace std;
main(){
int mb;
float bits;
float kb;
float bytes;
cout<<"Enter megabytes:";
cin>>mb;
kb=mb*1024;
bytes=kb*1024;
bits=bytes*8;
cout<<mb<<" Mb is equal to" <<bits<< "bit";
}