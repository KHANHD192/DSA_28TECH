/*
Bài 5. Gửi thư
Tất cả các thành phố của Lineland đều nằm trên trục tọa độ Ox. Do đó, mỗi thành
phố được liên kết với vị trí xi - tọa độ trên trục Ox. Không có hai thành phố được
đặt tại một điểm. Cư dân Lineland thích gửi thư cho nhau. Một người chỉ có thể
gửi thư nếu người nhận sống ở một thành phố khác. Chi phí gửi thư chính xác
bằng khoảng cách giữa thành phố của người gửi và thành phố của người nhận.
Đối với mỗi thành phố, hãy tính hai giá trị mini và maxi, trong đó mini là chi phí
tối thiểu để gửi thư từ thành phố thứ i đến một thành phố khác và maxi là chi phí
tối đa để gửi thư từ thành phố thứ i đến một số thành phố khác

*/
#include<bits/stdc++.h>
using namespace std ;
 pair<int,int> getMax_Min(int a[],int n , int index ){
      int max,min;
  if(index == 0){
    max = a[n-1] - a[index];
    min = a[index + 1] - a[index];
  }else if(index == n-1){
    max = a[index] - a[0];
    min = a[index] - a[index-1];
  }else {
     max = abs(a[index] - a[0]) > abs(a[index] - a[n-1]) ? abs(a[index] - a[0]): abs(a[index] - a[n-1]);
     min = abs(a[index] - a[index -1]) < abs(a[index] - a[index + 1]) ? abs(a[index] - a[index - 1]): abs(a[index] - a[index + 1]);
  }
   return make_pair(max, min);
 }

int main (){
  int n ;
   cin >> n ; 
   int a[n];
   for(auto &x : a ){
    cin >> x ;
   }
   for(int i = 0 ; i < n ; i++){
      std::pair<int, int> result = getMax_Min(a,n,i);
      cout << result.first << " " << result.second <<endl;
   }
   return 0;
}