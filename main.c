#include <stdio.h>
#include <stdlib.h>

int stack[5], top=-1, size=4;

void push(int a) {
	if (top<size) {
		stack[top+1]=a;
		top++;
	}
	else {
		printf("\nError! Stack Overflow! Push not performed!");
	}
}

int pop(){
	int a;
	if (top>=0) {
		a=stack[top];
		stack[top]=0;
		top--;
		return a;
	}
	else {
		printf("\nError! Stack Underflow!");
		return 0;
	}
}

int main() {
	int q;
	for(int i=0;i<6;i++) {
		q=rand();
		printf("\nPushing %d",q);
		push(q);
	}
	for(int i=0;i<6;i++) {
		q=pop();
		printf("\nPopped %d",q);
	}
	return 0;
}
