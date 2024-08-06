#include<bits/stdc++.h>
using namespace std;

int main(){

    vector< int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(1);

    int n = nums.size();

    int sum = 0;

    for ( int i=1 ;i<n ;i++){

        nums[i] = nums[i] ^ nums[i-1];

        cout<<nums[i]<<endl;
      


    }

    // cout<<sum<<endl;





    return 0;
}