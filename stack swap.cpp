#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> a,b;
    int l;

    for(int i = 1;i <= 5;i++){
        a.push(i*10);
    }
    for(int i = 1;i <= 5;i++){
        b.push(i);
    }
    a.swap(b);
    cout << "a:" ;
    while(a.size() != 0){
        cout << a.top() << " ";
        a.pop();
    }
    cout << endl;
    cout << "b:";
    while(b.size() != 0){
        cout << b.top() << " ";
        b.pop();
    }
    return 0;
}
