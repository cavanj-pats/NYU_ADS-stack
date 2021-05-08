//stacktester.cpp

#include <iostream>

#include "stack.h"

using namespace std;

int main(){
    int i=1;
    Stack mystack;
    //cout << mystack.top << endl;
    mystack.push(10);
    //cout<<mystack.peek() << endl;
    //cout << mystack.top << endl;

    mystack.push(150);
    mystack.push(200);
    mystack.push(502);
    mystack.push(998);
    //this is from destop//

    cout<<mystack.peek() << endl;
    
    
    /*
    while (i<=1001){
        if (!mystack.push(i)){
            cout << "Push is False at i: "<<i<< endl ;
        }
        i++;
    }
    */
     //cout << mystack.pop()<< endl;
    
 

    
    return 0;

}