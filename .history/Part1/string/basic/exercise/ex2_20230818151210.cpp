/*
[Xâu kí tự cơ bản]. Bài 2. In lật ngược, in hoa, in thường
Cho xâu kí tự S có không quá 10000 kí tự, S bao gồm kí tự in hoa, in thường,
 chữ số và kí tự đặc biệt. Hãy tự viết 3 hàm lật ngược xâu, viết hoa và viết thường xâu kí tự
*/
#include<bits/stdc++.h>
using namespace std ;
void tolower_String(string &s){
     for( auto &x : s){
        x= tolower(x);
     }
}
void toupper_String(string &s){
     for( auto &x : s){
        x= toupper(x);
     }
}
void revers_string(string &input){
      int length = input.length();
    for (int i = 0; i < length / 2; i++) {
        std::swap(input[i], input[length - i - 1]);
    }
}

int main (){
    string s ; 
    getline(cin,s);
    tolower_String(s);
    cout << s;
    return 0;
}