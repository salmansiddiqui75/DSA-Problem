#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
void matchPair(char nuts[],char bolts[],int n)
{

}
};
int main()
{
    int n;
    cout<<"Enter no Bolts & Nuts";
    cin>>n;
    char nuts[n],bolts[n];
    for(int i=0;i<n;i++)
    {
        cin>>nuts[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>bolts[i];
    }
    Solution ob;
    ob.matchPair(nuts,bolts,n)
    for(int i=0;i<n;i++)
    {
        cout<<nuts[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<bolts[i]<<" ";
    }
    cout<<endl;
}