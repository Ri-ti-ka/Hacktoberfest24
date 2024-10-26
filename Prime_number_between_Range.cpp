#include<bits/stdc++.h>
 using namespace std;
 bool prime(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }        
    }  if(count==2){
        return true;
    }else{
        return false;
    }
 }
 int main(){
    int a=2;
    int b=25;
    int count=0;
    while(a<=b){
        if(prime(a)){
            cout<<a<<" ";
           
        } a++;
    }
    return 0; 
 }
