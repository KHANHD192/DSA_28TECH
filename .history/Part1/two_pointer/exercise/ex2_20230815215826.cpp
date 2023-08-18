/*
Bài 2. 28Tech_Smaller

Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là đối với 
mỗi phần tử trong mảng B[] hãy đếm xem trong mảng A[] có bao nhiêu phần tử nhỏ hơn nó.


*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    int j = 0,k = 0;
    int n ,m;
    cin >>n >>m ;
    int a[m],b[n];
     for(auto &x : a){
        cin >> x;
     } 
     for(auto &x : b){
        cin >> x;
     }
     while(j < n && k < m ){
        if(b[j] > a[k]){
            cout << k << " ";
            j++;
        }else {
            k++;
        }
     }
     while(j < n){
        cout << m << " ";
     }
}