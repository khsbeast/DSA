#include<bits/stdc++.h>

using namespace std;
int Taylor(int x,int n)
{
    static double p,f;
    int r;
    if(n == 0)
    return 1;
    else{
        r = Taylor(x,n-1);
        p*=x;
        f*=n;
        return r+(p/f);
    }
    
}

int main() {
    int x = 4;
    Taylor(x,3);
}