#include<bits/stdc++.h>

using namespace std;
void B(int x);
void A(int n)
{
    if(n > 0)
    {
        cout << n << endl;
        B(n-1);
    }
}
void B(int n)
{
    if(n > 0)
    {
        cout << n << endl;
        A(n/2);
    }
}

int main() {
    int x = 20;
    A(x);
}