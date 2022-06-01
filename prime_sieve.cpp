#include <bits/stdc++.h>
using namespace std;
long long arr[1000000]={0};
void prime_sieve(long long lim){

    long long n=sizeof(arr)/sizeof(arr[0]);    //to calculate number of elements in the array
    /*
    first mark every odd num as prime as no even number can be prime.
    so start from 3 and go till size of the array.
    skipping all even nums 
    this will run n/2 times 
    */
    for(long long i=3;i<n;i+=2){
        arr[i]=1;
    }
    for(long long i=3;i<n;i+=2){
        if(arr[i]){
            /*
            for every value of i start checking from i^2 as we know it would always have its lower corresponding value for  < i^2
            i^2+i , i^2+2i , i^2+3i , ....... are its factors so mark them as not primes.
            --> at last we are left with values of 0,1,2 which can be hard coded
            */
            for(long long j=i*i  ;    j<n  ;  j+=i){
                arr[j]=0;
            }
        }
    }
    arr[0]=arr[1]=0;
    arr[2]=1;
    //printing the output as sequence of primes b/w 0 <= x <= n 
    for(long long  i=0;i<=lim;i++){
        if(arr[i]){
            cout<<i<<" ";
        }
    }
    //to check weather the given num is prime or not 
    /*
    if(arr[lim])
            cout<<"YES";
        else
        cout<<"NO";
    */
}
int main() {
    long long  n;
    cin>>n;
    prime_sieve(n);
return 0;
}