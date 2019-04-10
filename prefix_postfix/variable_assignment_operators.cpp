///Goal: understand variable assignment operators
#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    cout<<"Variable\t\tOperator\t\tResult\n";
    cout<<"a = "<<a;
    a+=1;
    cout<<"\t\t\ta += 1 \t\t\t a = "<<a<<"\n";

    cout<<"a = "<<a;
    a -= 2;
    cout<<"\t\t\ta -= 2 \t\t\t a = "<<a<<"\n";

    cout<<"a = "<<a;
    a *= 3;
    cout<<"\t\t\ta *= 3 \t\t\t a = "<<a<<"\n";

    cout<<"a = "<<a;
    a /= 3;
    cout<<"\t\t\ta /= 3\t\t\t a = "<<a<<"\n";

    /// after using two integer

    int b = 1;
    cout<<"a = "<<a<<", b = "<<b<<"";
    a /= b;
    cout<<"\t\ta /= b  \t\t a = "<<a<<"\n";








    return 0;

}
