/*
Bài 4. Phát quà Noel
hân dịp lễ Giáng Sinh 2022, 28Tech tổ chức phát quà cho các bạn nhỏ. Có N món quà được xếp thành hàng ngang, mỗi món quà đều có khối lượng cho trước. Tèo là một đứa trẻ cũng như nhiều đứa trẻ khác chỉ muốn có càng nhiều phần quà càng tốt, không cần biết tới khối lượng của từng mốn quà nặng nhẹ ra sao.
Tuy nhiên chiếc túi của Tèo chỉ mảng được trọng lượng tối đa là S. Bạn hãy xác định xem số lượng phần quà mà Tèo có thể lựa chọn tối đa là bao nhiêu để có thể không vượt quá trọng lượng tối đa mà cái túi có thể chịu được. Ngoài ra trong lúc chọn quà Tèo chỉ có thể chọn các phần quà xếp cạnh nhau mà thôi.
tìm dãy con liên tiếp mà có tổng không vượt quá S 

*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ;
    cin >> n ; 
    int a[n];
    for(auto &x : a){
     cin >> x;
    } 
     int left = 0 ;
     int right = 0;
     int res = 0 ;
     int sum = 0;
     int S;
     cin >> S;
     while(left < n ){
         sum +=a[right];
       if(sum <=S){
         right++;
       }else {
          res = max(res,right - left) ;
          sum -= a[left];
          left++;
       }


     }
     cout << res;
}