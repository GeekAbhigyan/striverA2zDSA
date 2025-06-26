#include<bits/stdc++.h>
using namespace std;

int convert2decimal(string str){
    int ans = 0 ;
    int n = str.length();
    for ( int i= 0 ; i<n ;i++){
        ans = ans *2 + (str[i]-'0');
    }
    return ans ;
}

int main(){

	string str;
	cin >> str;

    int ans = convert2decimal(str);

    cout<<ans<<endl;

    return 0;
}