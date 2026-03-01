#include<iostream>
using namespace std;
main(){
int size;
int cost;
int area;
int costperpound;
int costpersqft;
cout <<"Enter the size of fertilzer bag in pounds:";
cin>>size;
cout<<"Enter the cost of the bag:";
cin>>cost;
cout<<"Enter area of the bag can cover:";
cin>>area;
costperpound=cost/size;
cout<<"The cost per pound is:" <<costperpound;
costpersqft=cost/area;
cout<<costpersqft;
}