#include <stdio.h>
#define size 5
int top = -1;
int stack[size];
int empty() {
    return (top == -1);
}
int full() {
    return (top == size - 1);
}

void push(int value){
    if(full()){
        printf("Stack Overflow! Cannot push %d\n", value);
    }
    else{
        top++;
        stack[top]=value;
        printf("%d pushed into stack\n", value);
    }
}
void pop(){
    if(empty()){
        printf("Stack Underflow! No elements to pop.\n");
    }
    else{
        printf("%d popped from stack\n", stack[top]);
        top--;
        
    }
}
void display() {
    if (empty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main(){
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    }
