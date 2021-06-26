#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <unordered_map>

class karen
{
private:
    void info( void );
    void warning( void );
    void error( void );
    void debug( void );
public:
    void complain(std::string);
};

typedef void (karen::*ptr) ();
#endif