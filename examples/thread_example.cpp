#include <iostream>
#include <thread>

//Brief introduction to threads using this tutorial: https://www.geeksforgeeks.org/multithreading-in-cpp/

using namespace std;


// A dummy function
void foo(int Z)
{
    for (int i = 0; i < Z; i++) {
        cout << "Thread using function"
               " pointer as callable\n";
    }
}
  
// A callable object
class thread_obj {
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
            cout << "Thread using function"
                  " object as  callable\n";
    }
};


int main(){

    cout << "Hello Thread Example " << endl;
    
    thread functionThread(foo, 3);

    thread callableObjectThread(callable_obj(), 3);


    return 0;

}