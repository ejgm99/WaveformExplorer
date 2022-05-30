#include <iostream>
#include <thread> 
using namespace std;

int my_int_function(int x){
    for (int i =0; i<x; i++){
        printf( "%d\n",i);
    }
    return x;
}

void runThreads( int (* functionPointer) (int) ){
    thread first(functionPointer, 75);

    thread second(functionPointer, 5);

    first.join();
    second.join();

}

int main(){
    cout << "Using Function Pointers Example" << endl;
    int (*printAnyNumber)(int); //declaration of our function pointer. <type>  (* pointer name) (<type>)

    //instantiating a function pointer
    printAnyNumber = &my_int_function;
    printAnyNumber(2);
    runThreads(printAnyNumber);
    return 0;
}