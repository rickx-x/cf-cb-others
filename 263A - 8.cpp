//codeforces 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
     
    int x = -1;

    int y = -1;
    int n=5;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
   //     cout<<x<<" "<<y<<endl;
       int count1=0 ;
       count1 +=(2-x);
        if(count1<0){
            count1*=-1;
        }
       int count2=0 ;
       count2 +=(2-y);
        if(count2<0){
            count2*=-1;
        }
    cout<<count1+count2<<endl;
}
