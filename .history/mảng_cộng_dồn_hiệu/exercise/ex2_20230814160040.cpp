/*
Bài 2. Truy vấn tổng tĩnh
Cho mảng số nguyên A[] gồm N phần tử , có Q truy vấn , mỗi truy vấn là 2 số L,R hãy tính tổng các số từ chỉ số L và R 
áp dụng mảng cộng dồn 
*/
#include<bits/stdc++.h>
using namespace std ;

void Incremental(int a[],int n){
    for(int i = 0 ; i < n ;i++){
        if( i == 0){
            a[i] = a[0];
        }else {
            a[i] += a[i-1];;
        }
    }
}
int main (){
    int n,q ;
    cin >> n  >> q;
    int a[n];
     for(auto &x : a){
        cin >> x; 
     }
    while(q--){
        // cout << "Haha"<< endl;
     int left,right ;
      cin >> left >> right ;
      // sum of[L,R]
    
    }
    return 0;
}