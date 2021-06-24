#ifndef KAREN_H
#define KAREN_H

#include <iostream>

class karen
{
private:
    void info( void );
    void warning( void );
    void error( void );
    void debug( void );
public:
    karen(/* args */);
    ~karen();
    void complain(std::string);
};

typedef void (karen::*ptr) ();
#endif