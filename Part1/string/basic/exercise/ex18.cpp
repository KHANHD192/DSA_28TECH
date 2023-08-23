/*
[Xâu kí tự cơ bản]. Bài 18. Sắp xếp theo chiều dài
Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, 
nếu 2 từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ được xếp trước.

*/
#include<bits/stdc++.h>
using namespace std ;
// bool cmp(string a , string b ){
//     if( a.size()  <  b.size()){
//         return true ;
//     }
// }
bool cmp1(string a,  string b ){
    if( a.size() < b.size()) {
        return true ;
    }else if (a.size() == b.size()) {
                    if(a < b){
                        return true;
                    }else {
                        return false;
                    }     
    }
    return false ;
  
}

int main (){
   string s ;
   vector<string> v ;
   getline(cin,s);
    stringstream ss(s);
    string word ;
    while(ss >> word ){
      v.push_back(word);
    } 
    sort(v.begin(),v.end(),cmp1);
    for(auto x : v) {
        cout << x << " ";
     
    }
}