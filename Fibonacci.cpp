#include<bits/stdc++.h>
using namespace std;
int fib(int a);
int main(){
    int a,s;
    cin >> a;
    s = fib(a);
    cout << s;
    return 0;
}
int fib(int a){
    if(a == 0)return 0;
    if(a == 1)return 1;
    return fib(a-1)+fib(a-2);
}
