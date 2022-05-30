#include <iostream>
#include <thread>
#include "headers/functionRunner.h"


atomic<double> currentFrequency;


int main(){
    std::wcout << "Hello World" << std::endl;

    functionRunner<short> fnRun(2);

}