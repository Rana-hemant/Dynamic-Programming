#include<iostream>
#include<vector>
using namespace std;

int Nth_fibonacci_no(int n,vector<int> &dp)
{
    if(n == 1 || n == 0)
    {
        return n;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = Nth_fibonacci_no(n-1,dp) + Nth_fibonacci_no(n-2,dp);
}

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<endl;

    vector<int> dp(n+1,-1);
    cout<<"The Nth fibonacci number is :"<<Nth_fibonacci_no(n-1,dp);

    cout<<endl;
    for(int i=0;i<n+1;i++)
    {
        cout<<dp[i]<<" , ";
    }
    return 0;
}