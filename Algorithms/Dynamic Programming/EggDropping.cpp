#include <iostream>
#include <climits>
using namespace std;
int solve(int e,int f)
{
    if(e==1||f==0||f==1)
        return f;
    int mn=INT_MAX;
    for(int k=1;k<=f;k++)
    {
        int temp=1+max(solve(e-1,k-1),solve(e,f-k));
        mn=min(mn,temp);
    }
    return mn;
}
int main()
{
    cout<<"Enter the number of eggs and floors\n";
    int e,f;
    cin>>e>>f;
    cout<<"The minimum number of attempts= "<<solve(e,f);
}