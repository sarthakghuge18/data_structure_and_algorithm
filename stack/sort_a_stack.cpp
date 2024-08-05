#include <bits/stdc++.h> 
#include<stack>
using namespace std;


void sorted(stack<int> &stack,int num){

	//base case
	if(stack.empty()  ||  (!stack.empty() && stack.top() < num)){
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	sorted(stack,num);
	stack.push(n);
}


void sortStack(stack<int> &stack)
{
	//base case
	if(stack.empty()){
		return ;
	}

	int num = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack );

	//inert into sorted stack
	sorted(stack,num);
}