/*
Bài 4. Mảng hiệu
Cho mảng số nguyên A[] gồm N phần tử, 
mảng hiệu của mảng a là mảng D[] với D[0] = A[0] và D[i] = A[i] - A[i - 1] .
 Nhiệm vụ của bạn là xây dựng mảng hiệu của mảng A[]

*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n , q ; 
    cin >> n >> q ;
    int a[n];
    for(auto &x : a){
        cin >> x;
    }
    int D[n+ 5] ;
    for(int i = 0 ; i < n ; i++){
        if(i == 0){
            D[i] = A[i];
        }else {
            D[i] = A[i] - A[i - 1 ];
        }
    }
    while(q--){
        int left,right ;
        cin >> left >> right ;;

    }
}