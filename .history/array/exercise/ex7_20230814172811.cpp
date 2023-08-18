/*
Bài 7. Pha Trà Sữa
Tèo mới lên đại học và kiếm được một công việc tại hàng trà sữa,
 có không quá 200000 cốc trà sữa xếp thành 1 hàng ngang, 
 ban đầu mỗi cốc trà sữa có độ ngọt bằng 0.
Tèo tiến hành liên tiếp N các thao tác,
mỗi thao tác anh ta sẽ thêm 1 gam đường vào các cốc trà sữa từ vị trí L tới vị trí R.
Sau cùng những cốc trà sữa có lượng đường >= K gam được chuyển đi để phục vụ khách hàng.
Có nhiều câu hỏi, mỗi câu hỏi yêu cầu bạn trả lời trong các cốc trà từ thứ L tới thứ R có 
bao nhiêu cốc đạt chuẩn để bán cho khách hàng ?
:: phân tích kỹ thuật mà ta sẽ sử dụng 
+Thên đường vào cốc  0(1) dùng mảng hiệu 
+Đếm trong đó có bao nhiêu cốc đạt chuẩn thì dùng mảng đánh dấu 
+đếm trong left và right có tất cả bao nhiêu cốc đạt chuẩn thì dùng mảng cộng dồn 

*/
#include<bits/stdc++.h>
using namespace std ;
int F[100000] = {0};
int tick[100] = {0};
void Incremental(int a[],int n){
    for(int i = 0 ; i < n ;i++){
        if( i == 0){
            a[i] = a[0];
        }else {
            a[i] += a[i-1];;
        }
    }
}
void tick_Arr(int a[],int n,int k){
     for(int i = 0 ; i < n ; i++){
        if(a[i] >=k){
          tick[i] = 1 ;
        }
     }
}
int main (){
    int n ,q,k ;
    cin >> n >> k >>  q; 

    while(q--){
        int left,right ;
        cin >>left >> right; // thao tac them duong
        F[left] += 1;
        F[right + 1] -=1;
        Incremental(F,n);
        tick_Arr(F,n,k);
        Incremental(F,n);
        // int left1,right1;
        // cin >> left1 >> right1; // truy vấn 
        //  cout << "Tổng  " << 
        for( auto x :tick ){
           if(x != 0){
             cout << x << " " ; 
           }
        }
    }

}
