#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    long long int n, c;
    cin>>n;

    stack<long long int>stk;

    for(int i=0; i<n; i++)
    {
        cin>>c;
        if(stk.size()==0)
        {
            stk.push(c);
        }
        else
        {
            long long int t;

            t=stk.top();

            if(t%2 != c%2)
            {
                stk.push(c);
            }
            else
            {
                stk.pop();
            }
        }
    }
    cout<<stk.size()<<endl;
}
