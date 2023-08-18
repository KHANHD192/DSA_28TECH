// mảng hiệu
#include<bits/stdc++.h>
using namespace std ;
int main (){
    // thực hiện q truy vấn tăng k đơn vị trong khoảng left và right của mảng A 
   int n ;
   cin >> n ;
    int q ; cin >> q; 
   int a[n ];
   for(auto  &x : a){
    cin >> x; 
 
   }
   // mảng hiệu
  int D[n+3];
  // D[0] =A[0] , D[i] = A[i] - A[i-1]
 for(int i = 0; i <= n ;i++){
        if(i == 0){
        D[i] = a[i];
        }else {
              D[i] = a[i] -a[i-1];
        }
 }

 while (q--){   
     int left,right,k ; cin >> left >> right >>k;
     D[left] += k;
     D[right + 1] -= k;
 }
 // chuyeen ve mang cong don 
    int pre[n];
for(int i = 0; i < n; i++){
if(i == 0)
pre[i] = D[i];
else
pre[i] = pre[i - 1] + D[i];

}
// xuat mang cong don tho
for(int x :pre ){
    cout << x ;
}
return 0;
}