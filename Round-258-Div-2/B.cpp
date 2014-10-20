/*
ID: ashish1610
PROG: B 
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
long long arr[100002],two[100002];

int main() 
{
    int n,i,start=-1,end=-1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        two[i]=arr[i];
    sort(two,two+n);
    for(i=0;i<n-1 && end==-1;i++)
    {
        if(start==-1)
        {
            if(arr[i]>arr[i+1])
            start=i;
        }
        else if(end==-1 && start!=-1)
        {
            if(arr[i]<arr[i+1])
            end=i;
        }
    }
    if(start!=-1 && end==-1)
    end=n-1;
    int start1=start,end1=end;
    if(start!=-1 && end!=-1)
    while(start<=end && end>=0 && start>=0)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    int flag=1;
    for(i=0;i<n;i++)
    if(arr[i]!=two[i])
    {
        flag=0;
        break;
    }
    if(flag==1 && start1==-1 && end1==-1)
    {
        start1=0;
        end1=0;
    }
    if(flag==0)
    cout<<"no";
    else
    {
        cout<<"yes"<<endl;
        cout<<start1+1<<" "<<end1+1;    
    }
    return 0;
}
