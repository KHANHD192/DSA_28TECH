/*
Bài 6 : tech_segCount1
Cho mảng A[] gồm N số nguyên và số nguyên S,
 nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng không vượt quá S.

*/
#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ,s ; 
    cin >> n >> s;
    int a[n];
    for(auto &x : a){
        cin >> x; 
    }
    int left= 0 ,right = 0 ,res = 0 , sum = 0 ;
    while (right < n){
        sum+=a[right];
        if(sum < s){
            right++;
        }else {
            res = max(res,right - left);
            left++;
            sum-=a[left]; 
        }
    }
    {
        /* code */
    }
    
}