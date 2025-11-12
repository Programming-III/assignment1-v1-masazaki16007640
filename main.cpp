#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
Animal::Animal(){
    name="";
    age=0;
    isHungry=false;
}

Animal::Animal(string n, int a, bool h){
    name=n;
    age=a;
    isHungry=h;
}

void Animal:: display(){
    cout<<name<<"("<<"Age:"<<age<<","<<isHungry<<")"<<endl;
}

void Animal::feed(){
    if(isHungry==true){
        cout<<"Animal is Hungry"<<endl;
    }
    else{
        cout<<"Animal is not Hungry"<<endl;
    }
}

string Animal::getName(){
    return name;
}

int Animal::getAge(){
    return age;
}

void Animal::setName(string n){
    name=n;
}

void Animal::setAge(int a){
    age=a;
}

Animal::~Animal(){
    
}

///////////////MAMMAL
Mammal::Mammal():Animal(){
    furColor="";
}

Mammal::Mammal(string n, int a, bool h, string f):Animal(n,a,h){
    furColor=f;
}

string Mammal:: getFurColor(){
    return furColor;
}

void Mammal:: setFurColor(string f){
    furColor=f;
}

void Mammal:: display(){
    Animal::display();
    cout<<"Fur Color:"<<furColor<<endl;
}

Mammal::~Mammal(){
}

///////////////BIRD
Bird::Bird():Animal(){
    wingSpan=0.0;
}

Bird::Bird(string n, int a, bool h, double w):Animal(n,a,h){
    wingSpan=w;
}

void Bird::setWingSpan(double w){
    wingSpan=w;
}

double Bird::getWingSpan(){
    return wingSpan;
}

void Bird::display(){
    Animal::display();
    cout<<"Wingspan:"<<wingSpan<<endl;
}

Bird::~Bird(){
}

//////////////REPTILE
Reptile::Reptile():Animal(){
    isVenomous=false;
}

Reptile::Reptile(string n, int a, bool h, bool v):Animal(n,a,h){
    isVenomous=v;
}

void Reptile::display(){
   cout<<Animal.getName()<<"("<<"Age"<<Animal.getAge()<<","<<isVenomous<<isHungry<<")"<<endl;
}

////////////ENCLOSURE

Enclosure::Enclosure(){
    m=nullptr;
    capacity=0;
    currentCount=0;
}

Enclosure:: Enclosure(&m,int c, int curr){
    m=nullptr;
    capacity=c;
    currentCount=curr;
}

Enclosure::~Enclosure(){
    delete []m;
}

void Enclosure::addAnimal(Animal*a){
    Animal *c=new Animal[currentCount+1];
    for(int i=0;i<currentCount;i++){
        c[i]=m[i];
    }
    c[currentCount]=a;
    Animal *t=m;
    m=c
    delete [] t;
}

void Enclosure::displayAnimals(){
    for(int i=0;i<currently;i++){
        cout<<c[i]<<endl;
    }
}

//////////Visitor
Visitor::Visitor(){
    visitorName="";
    ticketsBought=0;
}

Visitor::Visitor(string n,int t){
    visitorName=n;
    ticketsBought=t;
}

~Visitor(){
}

void Visitor::displayInfo(){
    cout<<"Visitor Info"<<"/n"<<"Name:"<<name<<"/n"<<"Tickets Bought"<<ticketsBought<<endl;
}

void Visitor::setVisitorName(string n){
    visitorName=n;
}

void Visitor::setTicketsBought(int t){
    tickets=t;
}

string Visitor::getVisitorName(){
    return visitorName;
}

int Visitor::getTicketsBought(){
    return ticketsBought
}


int main(){
    Animal a1("Snake", 20, true);
    a1.display();
    a1.feed();
    Mammal m1("Lion", 20, true, "blue");
    m1.display();
    Bird b1("Parrot", 20, true,20.5);
    b1.display();
     Reptile r1("Snake", 20, true,true);
     r1.display();
     
     Visitor v1("Masa", 2);
     v1.displayInfo();
    return 0;
}
