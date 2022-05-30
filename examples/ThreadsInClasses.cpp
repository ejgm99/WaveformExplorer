#include <thread>
#include <iostream>

class Functor {
  public:
    Functor() = default;
    Functor (const Functor& ) = delete;
    void execute () { 
      std::cerr << "running in thread\n";
    }
};

int main (int argc, char* argv[]) 
{
  Functor functor; //insantiate a functor class
  std::thread thread (&Functor::execute, std::ref(functor)); //start a thread, with a reference 
  thread.join();
}