#ifndef QUESTIONBANK_H_INCLUDED
#define QUESTIONBANK_H_INCLUDED

#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include "math.h"
#include "english.h"

using namespace std ;

class Ques_Bank
{
private:
    string ques ;
    string opt1,opt2,opt3,opt4 ;
public:
    string result ;
    void setter(string,string,string,string,string,string ) ;
    void getter() ;
};
void Ques_Bank:: setter(string q,string op1,string op2,string op3,string op4,string res)
{
    ques = q ;
    opt1 = op1 ;
    opt2 = op2 ;
    opt3 = op3 ;
    opt4 = op4 ;
    result = res ;
}
void Ques_Bank:: getter()
{
    cout<<"\n\n\n\t\t\t" ;
    cout<<ques<<endl<<endl ;
    cout<<"\t\t\t"<<opt1<<endl<<"\t\t\t"<<opt2<<endl<<"\t\t\t"<<opt3<<endl<<"\t\t\t"<<opt4<<endl ;
}

#endif // QUESTIONBANK_H_INCLUDED
