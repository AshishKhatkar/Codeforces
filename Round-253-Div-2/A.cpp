/*
ID: ashish1610
PROG:
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    set<char> s;
    for(int i=0;i<str.length();++i)
    {
        if(str[i]=='{' || str[i]=='}' || str[i]==' ' || str[i]==',')
            continue;
        s.insert(str[i]);
    }
    cout<<s.size()<<endl;
    return 0;
}
