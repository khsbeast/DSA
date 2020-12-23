#include<bits/stdc++.h>

using namespace std;

int com(int n,int r)
{
    if(n==r || r == 0)
    {
        return 1;
    }
    else
    {
        return com(n-1,r-1) + com(n-1,r);
    }
    
}

int main(){
     
}