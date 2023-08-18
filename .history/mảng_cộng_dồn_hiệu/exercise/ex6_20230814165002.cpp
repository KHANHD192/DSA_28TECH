/*
Bài 6. Tổng lớn nhất
bài này có nghĩa là nó cho mình Q truy vấn 
từ đó làm sao sắp xếp như nào để cho tổng Q truy vấn đó là lớn nhất
ý tưởng làm bìa này :
đếm số lần được truy vấn theo từng đoạn L và Q , xong xem ô nào được truy vấn nhiều nhất thì mình gán số lớn nhất , nhỏ hơn thì gán với số nhỏ hơn , sort cả hai mảng 
có phải là sẽ được tổng lớn nhất không , sử dụng kỹ thuật lùa bò vào chuồng , mà muốn tăng thì phải áp dựng cả mảng hiệu
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
int tick_array[100000] = {0};
int main (){
    int n ,q ;
    cin  >> n >> q;
    int a[n];
    for(auto &x : a){
        cin >> x ;
    }
    while(q--){
        int left,right ;
        cin >> left >> right;
        tick_array[left]+=1;
        tick_array[right + 1] -= 1;
    }
    Incremental(tick_array,n);
     sort(tick_array, tick_array + n, greater<int>());
     sort(a, a + n, greater<int>());
     long long res = 0;
     for(int i = 0; i < n; i++){
          res += 1ll * a[i] * tick_array[i];
     }
     cout << res << endl;


}

