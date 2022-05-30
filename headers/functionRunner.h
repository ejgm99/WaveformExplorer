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
            m_userFunction = nullptr;
            ready = true;
            m_thread = thread(&functionRunner::MainThread,this);
            return true;
        }

        void setUserFunction(double(*func)(double)) //This takes our function that generates our waveforms
	    {
		    m_userFunction = func;

	    }

    private :
        double (*m_userFunction) (double);
        atomic<bool> ready;
        thread m_thread;

        void MainThread(){
            while (ready){
                //If everything's ready, we can then start to simulate what it's like to take in sound input
                m_userFunction(d_wave);
            }

        }
    
};
