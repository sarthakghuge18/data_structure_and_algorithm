#include <bits/stdc++.h> 
#include<stack>

using namespace std;

void solve(stack<int>& myStack, int x){

    //base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    //store the pop element
    int num = myStack.top();
    myStack.pop();

    //recursive call
    solve(myStack,x);

    //push the all element
    myStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}
