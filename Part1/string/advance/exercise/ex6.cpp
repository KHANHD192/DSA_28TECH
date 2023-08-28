/*
[Xâu ký tự]. Bài 6. Ký tự xuất hiện ở 2 xâu 2.
Cho 2 xâu kí tự S1 và S2 chỉ bao gồm chữ cái in hoa và in thường,
 hãy tìm các kí tự xuất hiện trong xâu S1 mà không xuất hiện trong xâu S2, và các kí tự chỉ xuất hiện trong xâu S2 mà không xuất hiện trong xâu S1.
 Các ký tự được in ra theo thứ tự từ điển và chỉ liệt kê mỗi ký tự một lần.
*/
#include<bits/stdc++.h>
using namespace std ;
// sử dụng mảng đánh dấu rồi check thì ép kiểu , ví kí tự nó chỉ nằm trong khoảng 
int cnt1[256] = {0} , cnt2[256] = {0};
int main (){
    string s1,s2 ; 
    getline(cin,s1);
    getline(cin,s2);
    for(auto x : s1){
        cnt1[x] = 1;
    }
    for(auto x : s2){
        cnt2[x] = 1;
    }
   for(int i = 0 ; i < 256 ; i++){
    // chi xuat hien o s2
      if(cnt1[i] == 0  && cnt2[i] == 1){
        cout << (char)i ;
      }
   }
   cout <<endl;
   for(int i = 0 ; i < 256 ; i++){
    // chi xuat hien o s1
      if(cnt2[i] == 0  && cnt1[i] == 1){
        cout << (char)i ;
      }
   }
}
