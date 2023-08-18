/*
Bài 1. Trộn 2 dãy
Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, 
nhiệm vụ của bạn là trộn 2 mảng này thành một mảng và sắp xếp theo thứ tự tăng dần. 
Độ phức tạp mong muốn là tuyến tính.
*/
#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n,m;
    cin >> n >> m;
    int A[n];
    int B[m];
    for(auto &x : A){
        cin >>x ;
    }
    for(auto &x : B){
        cin >> x ;
    }
    int j,k ; // TWO POINTER
    while (j << n && k << m){
        if(A[j] <= B[k]){
            cout << A[j];
            j++;
        }else {
              cout << B[k];
              k++;
        }
    }
    
    return 0;
}