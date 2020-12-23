#include<bits/stdc++.h>

using namespace std;

void rec(int n)
{
    if(n > 0)
    {
        cout << n << endl;      //head rec
        rec(n-1);
        cout << n << endl;      //tail rec
    }
}

int main() {
    int x = 3;
    rec(x);
}