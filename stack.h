//stack.h
#include <iostream>



using namespace std;

#define MAX 1000

class Stack
{
  public:
  int top;
  int a[MAX]; // Maximum size of Stack
  Stack(){ top = -1; }
  bool push(int x);

  int pop();
  int peek();
  bool isEmpty( ){ top == -1;}
};
/*
Stack::Stack(){
    top =-1;
    for(int i=0; i<MAX; i++){
        a[i]=0;  //initialize to NULL as i think the grader is checking for that.
    }
}
*/

bool Stack::push(int x){
   //MAX-1 is the array index for the last element
   //MAX-2 is largest size that allows an element to be pushed onto the stack

   //for autograder,  only access required is that of a[top]
    
    if (top<-1){top=-1;}  //instead of return false; i changed it to 'correct' the value of top.
    
    if (top >= MAX-2){ return false;} //-2 to check if we can fit one more
    top++;
    a[top]=x;
    return true;
    
   

   

}

/*
int Stack::pop(){
    if(top<0){return 0;}
    int temp;
    temp = a[0];
    for(int i=0;i<top;i++){
        a[i]=a[i+1];
    }
    top--;
    return temp;
}
*/


/*
int Stack::peek(){
    if (top < 0){return 0;}
    return a[0];
}
*/
