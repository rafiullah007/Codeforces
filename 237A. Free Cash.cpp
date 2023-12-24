#include<bits/stdc++.h>
using namespace std;
int arr[24][60];
int main()
{
    int n,a,b;
    cin>>n;
    int count =0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        arr[a][b] ++;
        if (arr[a][b]>count)
        {
            count = arr[a][b];
        }
    }
    cout<<count<<endl;
}
