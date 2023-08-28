/*
[Xâu ký tự]. Bài 8. Xâu pangram 1
Xâu pangram là xâu có chứa đầy đủ các kí tự từ A tới Z không phân biệt chữ hoa hay thường. Nhập vào xâu S và kiểm tra xem xâu S có phải là xâu pangram hay không?
*/
#include<bits/stdc++.h>
using namespace std ;
 void tolower (string &s){
    for(auto &x : s){
        x = tolower(x);
    }
 } 

int main (){
 string s1  ;
 getline(cin ,s1);
 tolower(s1);
 int cnt[256] = {0};
 for(auto x : s1){
    cnt[x] = 1; 
 }
 for(int i = 97 ; i <= 122 ; i++){
     if(cnt[i]!= 1){
        cout << "NO";
        return 0;
     }
 }
 cout << "YES";
 return 0;
}