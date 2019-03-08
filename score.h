#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

#include <iostream>
#include <limits>
using namespace std ;

class score
{
    float *point ;
public:
    score(float val)
    {
        point = new float(val);
    }
    float get()
    {
        return *point ;
    }
    ~score()
    {
        delete point ;
    }

};


#endif // SCORE_H_INCLUDED
