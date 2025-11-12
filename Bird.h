#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 
class Bird:public Animal{
    private:
    double wingSpan;
    
    
    public:
    Bird();
    Bird(string n, int a, bool h, double w);
    double getWingSpan();
    void setWingSpan(double w);
    void display();
    ~Bird();
};






#endif
