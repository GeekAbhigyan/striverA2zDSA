#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	//for getting input from the input.txt
	freopen("input.txt","r",stdin);

	//for writing output to output.txt
	freopen("output.txt","w",stdout);
#endif

	
// Bit ++ 

int x = 0 ;

int t;
cin>>t;

while(t--){
    string s;
    cin>>s;
    if (s == "++X" || s == "X++"){
        x++;
        }
    else if (s == "--X" || s == "X--"){
        x--;
        }

}

cout<<x<<endl;






}