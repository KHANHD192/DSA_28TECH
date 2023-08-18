/*
[Xâu kí tự cơ bản]. Bài 8. 28tech và Tèo
Tèo là một người ghét 28tech vì cho rằng 28tech cho quá nhiều bài tập khó làm anh ta phải đau đầu. 
Vì thế anh ta ghét tất cả những chữ cái xuất hiện trong từ "28tech", Tèo muốn nhờ bạn xóa hết những kí tự xuất hiện trong từ "28tech" khỏi xâu kí tự S, 
bạn hãy giúp Tèo nhé. Nếu xâu S sau khi xóa không còn kí tự nào bạn phải in ra EMPTY
*/
#include<bits/stdc++.h>
using namespace std ;
int main(){
 string wordlist ="28tech";
 string s ; 
 getline(cin,s);
 for(int i = 0 ; i < s.size();){
      if(wordlist.find(s[i]) != string::npos ){
              s.replace(i,1,"");
      }else {
        i++;
      }
 }
 if(s.size() == 0){
    cout << "EMPTY";
 }else {
    cout << s;

 }
}