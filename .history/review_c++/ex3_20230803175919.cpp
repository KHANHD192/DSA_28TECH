// mảng cộng dồn 2 chiều 
#include<bits/stdc++.h>
using namespace std ;
long long prefix[1005][1005];
int main (){
    int n,m;
    cin  >> n >> m;
   int a[n][m];
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= m ; j++){
            cin >> a[i][j];
        }
    }
    return 0;
}