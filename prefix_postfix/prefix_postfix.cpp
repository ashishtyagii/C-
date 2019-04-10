#include<iostream>

using namespace std;

int main()
{
    int a, b = 0;
    int post, pre = 0;
    cout<<"Inital values: \t\t\tpost = "<<post<<" pre= "<<pre<<"\n\n";
    post = a++;  //post = 0
    pre = ++b; // pre = 1
    cout<<"After one postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n\n";
    post = a++; // 1
    pre = ++b; // 2
    cout<<"After two postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n\n";  
    return 0;
}
