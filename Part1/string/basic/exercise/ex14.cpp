/*
[Xâu kí tự cơ bản]. Bài 14. Tí và 28tech
Mặc dù là 2 người bạn thân nhưng Tí và Tèo lại rất khác nhau khi nói đến 28tech, Tí thì lại là người rất thích 28tech. Vì thế Tí nhờ bạn đếm các từ 28tech xuất hiện trong một xâu S cho trước.
*/
#include<bits/stdc++.h>
using namespace std ;
void tolower_string(string &s){
    for(auto &x : s){
         x = tolower(x);
    }
}
int main (){
    string s ;
    getline(cin,s);
    tolower_string(s);
    stringstream ss(s);
    string word;
    int count = 0;
    while(getline(ss,word,' ')){
        if(word == "28tech"){
            count++;
        }
    }
    cout << count ;
    return 0;
}