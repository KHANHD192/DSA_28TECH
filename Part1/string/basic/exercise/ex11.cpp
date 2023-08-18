/*

[Xâu kí tự cơ bản]. Bài 11. Ngày sinh
ho ngày sinh của một người theo dạng ngày/tháng/năm. Bạn hãy chuẩn hóa ngày sinh này về dạng dd/mm/yyyy. 
Ví dụ nếu ngày sinh là 1/10/2002 thì được chuẩn hóa thành 01/10/2002,
 hoặc 5/2/2002 thì được chuẩn hóa thành 05/02/2002.
*/
// ý tưởng là bắt từng đoạn qua delim của getline : cấu trúc geline(cin, var, delim); và sử dụng tách từ
#include<bits/stdc++.h>
using namespace std ;

int main (){
    string s;
    getline(cin,s);
  stringstream ss(s);
  string word;
  while(getline(ss,word,'/')){ // ở đây nghĩa là nó đọc từng đoạn cho dến khi nó gặp được delim 
    int number = stoi(word);
    if(number > 0 && number < 10){
         int pos = s.find(word);
         if(pos != string::npos ){
          s.replace(pos,word.size(),"0" + word);
         }
    }
 
  }
  cout << s ;

}