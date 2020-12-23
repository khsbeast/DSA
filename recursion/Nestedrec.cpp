#include<bits/stdc++.h>

using namespace std;
int A(int n)
{
    cout << n << endl;
    if(n > 100)
    {
     return n-10;   
    }
    else
    {
        return A(A(n+11));
    }
    
}

int main() {
    int x = 95;
    A(x);
}