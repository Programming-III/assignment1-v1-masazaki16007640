#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 

private:
    Animal * m;
    int capacity;
    int currentCount;
    
    public:
    Enclosure();
    Enclosure(&m,int c, int curr);
    void addAnimal(Animal * a);
    void displayAnimals();
    ~Enclosure();
    void setCapacity();
    void setCurrentCount();
    int getCapacity();
    int getCurrentCount();
};






#endif
