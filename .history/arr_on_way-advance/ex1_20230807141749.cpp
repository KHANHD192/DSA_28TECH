// kiểm tra mảng tăng đần 
/*
kiểm tra xem mảng đã tăng chặt hay chưa , tức là phần tử đứng sau luôn lớn hơn phần tử đứng trước nó .
*/
#include<bits/stdc++.h>
using namespace std ;

int check_increaArr(int a[],int n){
      for(int i = 0 ; i < n ; i++){
        if(a[i] > a[i + 1]){
            return false;
        }
        return true;
      }
}