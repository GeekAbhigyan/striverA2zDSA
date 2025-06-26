#include<bits/stdc++.h>
using namespace std;
// swap without the third variable 

int main(){
    int a =5 ;
    int b= 10 ;

    cout <<"orignal "<<endl;
    cout<<a<<b<<endl;

    a = a ^ b ;
    b = a^ b ;
    a = a^ b ;

    cout << "reversed "<<endl;
    cout<<a<<b<<endl;
    return 0;

}