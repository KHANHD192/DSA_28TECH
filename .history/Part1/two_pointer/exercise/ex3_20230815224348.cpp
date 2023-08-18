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
    int i= 0,j = 0;
    int sum = 0;
    while(i < n && j < m){
        int countI = 1,countJ = 1;
       if(a[i] == b[j]){
           while(a[i] == b[j]){
            countI++;
            i++;
           }
           while(b[j] == a[i - 1]){
            countJ++;
            j++;
           }
sum += countI * countJ * 1ll;
       }
       if(a[i] > b[j]){
         j++;
       }else {
         i++;
       }
}
       cout <<sum ;
    return 0;
}