#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	//for getting input from the input.txt
	freopen("input.txt","r",stdin);

	//for writing output to output.txt
	freopen("output.txt","w",stdout);
#endif

//Chewbaсca and Number

	int x;
	cin>>x;
    int ans=0;
    int pow =0;
    while(x>0){
        int digit = x%10;
        digit = min(digit,9-digit);
        x = x/10;
        ans = ans + digit*(10^pow);
        pow++;
    }
    cout<<ans;







}