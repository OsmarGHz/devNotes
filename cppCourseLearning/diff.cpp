#include <iostream>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    int a[n];
    for (int x = 0; x < n; x++){
        cin >> a[x];
    }
    int diff[n+1]{0};

    while (q--)
    {
        int l,r,u;
        cin >> l >> r >> u;
        diff[l]+=u;
        diff[r+1]=u;
    }
    int acu[n];
    acu[0]=diff[0];
    a[0]+=diff[0];

    for (int x = 0; x < n; x++)
    {
        /* code */
    }
    
    
}