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
int tick_array[100000] = {0};
int main (){
    int n ,q ;
    cin  >> n >> q;
    int a[n];
    for(auto &x : a){
        cin >> x ;
    }
    

}

