/*
.Bài 3. Số lớn hơn các số đứng trước
Cho một dãy số nguyên dương có n phần tử. Hãy liệt kê số các phần tử trong dãy
lớn hơn tất cả các số đứng trước nó (Phần tử đầu tiên được coi là một phần tử
thỏa mãn).
*/
// 0(n2) :  duyệt hai vòng for lồng 

#include<bits/stdc++.h>
#include<algorithm>
using namespace std ;
int main (){
    int n;
    cin >> n; 
    int a[n];
    for(auto &x : a){
        cin >> x ;
    }
    cout << a[0] << " ";
    for(int i  =0; i < n ;i++){
           
             sort(a,a+i-1);
             if(a[i] > a[i-1]){
                cout << a[i] << " ";
             }
            
              }
        
    }

}