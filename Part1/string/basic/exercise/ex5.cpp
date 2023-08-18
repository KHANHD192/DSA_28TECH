/*
[Xâu kí tự cơ bản]. Bài 5. Chèn dấu phẩy
Khi viết 1 số nguyên dương quá lớn, người ta thường thêm các dấu phẩy vào giữa các chữ số cho dễ đọc, ví dụ số N = 123456789 được viết thành 123,456,789,
 N = 12345 được viết thành 12,345. 
 Nhiệm vụ của bạn là thêm dấu phẩy vào số N
*/
#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ; 
    cin >> n ; 
    string s =  to_string(n);
    for(int i = 0 ; i < s.size();i++){
        if(i % 3 == 0  && (i!= 0 && i!= s.size() -1)){
            cout << ',';
        }
        cout << s[i];
    }
}