#include <iostream>
// #include <thread>

using namespace std;

void dummy_function(int Z){
    for (int i ; i < Z; i++){
        cout << "Dummy function thread executing" << endl;

    }
}

class callable_obj{
    public: 
        void operator() (int X){
            for (int i; i < X; i++){
                cout << "Callable object thread executing" << endl;
            }
        }
};



int main(){
    cout << "Hello Thread Example " << endl;
    return 0;

}