/*
[Xâu kí tự cơ bản]. Bài 13. Liệt kê từ
Cho một xâu S gồm nhiều từ, các từ được phân cách nhau bởi dấu cách hoặc các dấu '.', ',', '!', '?', hãy liệt kê các từ xuất hiện trong xâu,
 giữa các từ cách nhau một dấu cách, sau từ cuối cùng ko được in thừa dấu cách
*/
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s ;
    getline(cin,s);
    string wordlist = "?!,.";
    for(int i =0 ; i < s.size();i++){
         if(wordlist.find(s[i]) != string::npos){
              s.replace(i,1," ");
         }
    }
    stringstream ss(s);
    string word ;
    while(getline(ss,word, ' ')){
        cout << word<<" ";
    }
}