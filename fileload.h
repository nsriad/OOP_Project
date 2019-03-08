#ifndef FILELOAD_H_INCLUDED
#define FILELOAD_H_INCLUDED
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std ;
void fileload()
{
    ofstream fout("leaderboard.txt",ofstream::out | ofstream::app) ;
    fout<<"Name\t\t"<<"Score\n" ;
    fout<<"--------------------------------\n" ;
    fout.close() ;
}

#endif // FILELOAD_H_INCLUDED
