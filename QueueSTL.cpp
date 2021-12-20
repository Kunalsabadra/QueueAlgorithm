#include<iostream>
#include<queue>
using namespace std;

int main(){


    queue<string> q;
    q.push("abcd");
    q.push("kun");
    q.push("pal");
    q.push("nal");
    while(!q.empty()){
        cout<<q.front()<< endl;
        q.pop();
        
    }
    
    return 0;
}