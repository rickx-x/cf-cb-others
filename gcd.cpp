#include <iostream>
using namespace std;
#define ll long long 

int gcd(ll a,ll b){
    if(b==0){

        return a;
    
    }

    return gcd(b,a%b);

}
int main() {

    ll a,b;
    cin>>a>>b;


    cout<<gcd(a,b);

    
    //we know gcd(a,b)*lcm(a,b) = a*b
    //so lcm(a,b) = (a*b)/gcd(a,b)
}
