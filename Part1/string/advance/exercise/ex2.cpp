/*
[Xâu ký tự]. Bài 2. In hoa, in thường.
Cho một xâu kí tự, hãy viết hoa và viết thường các kí tự là chữ cái trong xâu, các kí tự không phải là chữ cái thì không thay đổi.

*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    string s ; 
    getline(cin,s);
    for(auto &i : s){
        if(i >= 97 && i<= 122){
          i = toupper(i);   
        } 
    }
    cout << s;
}