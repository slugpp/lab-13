#include<iostream>
using namespace std;

long long int fibonacci(int x);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(int x){
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
           return  fibonacci(x-1) + fibonacci(x-2);
    }
}