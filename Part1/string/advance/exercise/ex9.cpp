/*
[Xâu ký tự]. Bài 9. Đếm số lượng từ trong xâu
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm số lượng từ xuất hiện trong xâu S.
*/

#include<bits/stdc++.h>
using namespace std ;

int main (){
    string s1,word;
    getline(cin,s1);
    stringstream ss(s1);
    int count = 0 ;
    while(ss >> word){
        cout << word << endl; 
         count ++;
    }
    cout << count;
    
}