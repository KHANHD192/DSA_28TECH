/**
 * 
 * Bài 3. 28Tech_Numer_Of_Equal
Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần,
 nhiệm vụ của bạn là hãy đếm xem trong 2 mảng tồn tại bao nhiêu cặp i, j sao cho A[i] = B[j]

*/
#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,m;
    cin >>n >> m;
    int a[n],b[m];
   for( auto &x : a){
        cin >> x; 
    }
    for( auto &x : b){
        cin >> x; 
    }
    int j= 0,k = 0;
    int sum = 0;
    while(j < n && k < m){
        int countJ = 1,countK = 1;
        if(a[j] == a[j+1]){
              countJ++;
        }
              j++;
        if(b[k] == b[k+1]){
              countK++;
        }
              k++;
       sum += countJ * countK;
    }
    cout << sum << " ";
    return 0;
}