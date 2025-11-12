#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class Animal{
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
    Animal();
    Animal(string n, int a, bool h);
    void display();
    void feed();
    void setName(string n);
    void setAge(int a);
    string getName();
    int getAge();
    ~Animal();
    
    
    
    
    
};


#endif
