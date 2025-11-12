#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor{
    private:
    string visitorName;
    int ticketsBought;
    
    public:
    Visitor();
    Visitor(string n, int t);
    ~Visitor();
    void setVisitorName(string n);
    void setTicketsBought(int t);
    string getVisitorName();
    int getTicketsBought();
    void displayInfo();
};






#endif
