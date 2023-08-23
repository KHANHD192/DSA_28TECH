/*
[Xâu ký tự]. Bài 3. Tần suất xuất hiện của ký tự
Cho một xâu kí tự, hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.
*/
#include<bits/stdc++.h>
using namespace std ;

int main (){
    map<char,int> myMap;
    string s ;
    getline(cin,s);
    for(auto i : s){
        myMap[i] ++;
    }
   for(auto x : myMap){
    cout << x.first << " " << x.second << endl;
   }
   cout << endl;
   for(auto x : s){
     if(myMap[x]!= 0){
        cout << x <<" "<< myMap[x]<< endl;
        myMap[x] = 0;
     }
   }
}