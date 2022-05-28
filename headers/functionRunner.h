#pragma once

#pragma comment(lib, "winmm.lib")

#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
#include <atomic>
#include <condition_variable>
using namespace std;

template<class T>
class functionRunner{

    public : 
        functionRunner(double input){
            Create(input);
        }
        bool Create(double input){
            m_userFunction = nullptr
            wcout << "Creating function" << endl;
            return true;
        }

        setUserFunction(double(*func)(double))
	    {
		    m_userFunction = func;
	    }
};
