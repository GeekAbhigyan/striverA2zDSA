#include<bits/stdc++.h>
using namespace std;

void swap(char &a , char &b) {
    char t ;
    t = a ;
    a = b ;
    b = t ;
}

string reverse (string str){
    int n = str.length();

    for ( int i =0 ; i<n/2 ; i++){
        swap(str[i], str[n-i-1]);
    }
    return str;
}

string convert2Binary (int n){
    string ans = "";
    while (n > 0){
        if (n%2 == 0){ ans += "0"; }
        else {ans += "1" ;}
        n = n/2;
    }
    reverse(ans);

    return ans ;
}

int main(){
#ifndef ONLINE_JUDGE
	//for getting input from the input.txt
	freopen("input.txt","r",stdin);

	//for writing output to output.txt
	freopen("output.txt","w",stdout);
#endif

	int n;
	cin>>n;

    string ans = convert2Binary(n);
    
    cout<<ans<<endl;


}