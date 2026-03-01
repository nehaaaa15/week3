#include<iostream>
using namespace std;
main(){
string name;
int matric;
int inter;
int ecat;
float agg;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter matriculation marks(out of 1100):";
cin>>matric;
cout<<"Enter intermediate marks(out of 550):";
cin>>inter;
cout<<"Enter ecat marks(out of 400):";
cin>>ecat;
agg=(matricmarks*0.1)/1100+(intermarks*0.4)/550+(ecatmarks*0.5)/400;
cout<<"Aggregate is"<<agg;


}