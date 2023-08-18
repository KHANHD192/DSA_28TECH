/*
 Bài 1. Xây dựng mảng cộng dồn

Cho mảng số nguyên A[] gồm N phần tử, mảng cộng dồn của A[] là mảng F[] với tính chất 
F[i] lưu tổng các phần tử từ chỉ số 0 tới chỉ số i của mảng A[]. Bạn hãy xây dựng mảng cộng dồn F[]

*/
#include<bits/stdc++.h>
using namespace std ;
void Incremental(int a[],int n){
    for(int i = 0 ;; i < n ;i++){
        if( i == 0){
            a[i] = a[0];
        }else {
            a[i] += a[i-1];;
        }
    }
}

int main (){
    int n ;
    cin >> n;
    int a[n];
    for(auto &x : a){
        cin >> x;
    }
    Incremental(a,n);

 for(auto x : a){
       cout << x << " "; 
    }
    return 0
}
