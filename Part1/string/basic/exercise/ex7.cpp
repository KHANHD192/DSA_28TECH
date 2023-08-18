/*
[Xâu kí tự cơ bản]. Bài 7. In ra chữ số
Cho xâu kí tự S bao gồm chữ cái và chữ số, thực hiện tách riêng chữ số và chữ cái của S.
*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    string s ;
    getline(cin ,s);
    string  number,charater ; 
    for(auto i : s){
        if(i >= 48 && i<= 57){
            number.push_back(i);
        }else {
            charater.push_back(i);
        }
    }
    cout << number << endl << charater ;
    return 0;
}