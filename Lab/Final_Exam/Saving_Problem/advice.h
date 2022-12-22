#ifndef advice_h
#define advice_h

#include"saving.h"
#include<string>
using namespace std;

class Advice :public Saving{
    private:
        string _should;

    public:
        Advice(Bank A){
            _should = "You should deposit to " + A.toString() + " for ";
        }
        void processAdvice(){ // con phan dua ra loi khuyen nua la xong

        }
};

#endif