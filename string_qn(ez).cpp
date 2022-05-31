/*
Problem Statement:
Given a sentence . To increment the count for each character , if that character is coming in a word (from the given sentence) more than once . Eg: Given sentence : mississippi River result : the counter array i=5 p-2 r=2 s=4;


Input Format:
Input contains the string


Output Format:
Print the character with the count if present else print None


Constraints:
1<= string_length <= 1000


Sample Input 1:
mississippi river

Sample Output 1:
i = 5
p = 2
r = 2
s = 4

Sample Input 2:
lead

Sample Output 2:
None
*/
#include<bits/stdc++.h>
using namespace std;
int arr[26]={0};
int main(){
  string str;
  getline(cin,str);
  
  for(int i=0;i<str.size();i++){
    arr[str[i]-'a']++;
    
  }
  int sum=0;
  if(any_of(arr,arr+26,[](int x){return x>1;})){
  for(int i=0;i<26;i++){
    if(arr[i]>1){
      cout<<(char)(i+'a')<<" = "<<arr[i]<<endl;
      
      }
      continue;
  }
  }
  else{
      cout<<"None"<<endl;
  }
  return 0;
}