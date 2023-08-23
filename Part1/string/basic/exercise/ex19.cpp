/*
[Xâu kí tự cơ bản]. Bài 19. Đếm số lượng từ khác nhau trong xâu
Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. 
Thực hiện đếm số lượng các từ khác nhau trong xâu mà không phân biệt hoa thường, ví dụ "28TecH" được coi là giống với từ "28teCH".
(Bài này các bạn có thể thử code 2 vòng for lồng nhau hoặc sử dụng sort)
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
    set<string > myset ;
    getline(cin ,s);
    tolower(s);
    stringstream ss(s);
    string word ;
    while(ss >> word){
          myset.insert(word);
    }
    for(string x : myset){
        cout << x << " ";
    }
    cout << myset.size();
}