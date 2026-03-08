#include<iostream>
using namespace std;
main(){
    string my_pass, user_pass;
    my_pass="hello";
    cout<<"enter the password";
    cin>>user_pass;
    if (user_pass==my_pass)
{ cout<<"you have cracked the code";
}
else{
    cout<<"try again";
}
}