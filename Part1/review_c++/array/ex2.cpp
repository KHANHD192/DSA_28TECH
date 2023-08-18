// mảng đánh dấu 2 
// cho mảng số nguyên A[], hãy liệt kê các các giá trị xuất hiện từ nhỏ đến lớn theo tần suất của nó ,
#include<bits/stdc++.h>
using namespace std;
int cnt[1000001]; // 0 
int main (){
    int n ;
    cin >> n;
    int a[n];
    for( int &x : a){
        cin  >> x ;
    }
   for(int i = 0 ; i < n ; i++){
          if(cnt[a[i]]!= 0){
                cnt[a[i]]++;
          }else {
             cnt[a[i]] = 1;
          }
   }
    for(int i = 0 ; i < 1000000 ; i++){
           if(cnt[i] != 0){
            cout << cnt[i] << " ";
           }
    }

 
    return 0;
}