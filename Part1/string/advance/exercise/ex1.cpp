/*
[Xâu ký tự]. Bài 1. Đếm số loại ký tự trong xâu.
Cho một xâu kí tự, hay đếm số lượng kí tự là chữ cái,
 chữ số và kí tự đặc biệt(Các kí tự không phải là chữ cái và chữ số).

*/
#include<bits/stdc++.h>
using namespace std ; 
void tolower(string &s){
     for(auto &x : s){
        x = tolower(x);
     }
}
int main (){
    string s ; 
    getline(cin,s);
    tolower(s);
    int countChar = 0 , countNumber = 0 , countOther = 0 ; 
    for(auto i : s){
        if(i >= 48 && i<=57){
            countNumber++;
        } //  number 
        else if(i>= 97 && i <= 122){
            countChar++;
        }else {
            countOther++;
        }
    }
    cout << countChar << " " << countNumber << " "<< countOther;
}