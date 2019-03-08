#include <bits/stdc++.h>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <limits>
#include "mainheader.h"
using namespace std;

int level;
int home()
{
    int i;
    system("COLOR 2F");
    cout<<"\n\n\n\n\t\t\t\t  \b>>THE QUIZ GAME APPLICATION<<\n";
    cout<<"\n\t\t\t\t  \b=============================\n\n" ;
    cout<<"\t\t\t\t       ***Main Menu***\n";
    cout<<"\t\t\t\t ____________________________\n" ;
    cout<<"\t\t\t\t|        1.Play Game         |\n" ;
    cout<<"\t\t\t\t|____________________________|\n" ;
    cout<<"\t\t\t\t|        2.Learn/Practice    |\n" ;
    cout<<"\t\t\t\t|____________________________|\n" ;
    cout<<"\t\t\t\t|        3.Leaderboard       |\n" ;
    cout<<"\t\t\t\t|____________________________|\n" ;
    cout<<"\t\t\t\t|        4.About             |\n" ;
    cout<<"\t\t\t\t|____________________________|\n" ;
    cout<<"\t\t\t\t|        5.Quit              |\n" ;
    cout<<"\t\t\t\t|____________________________|\n" ;
    cout<<"\n\t\t\t\tSelect an option: " ;
    cin>>i ;

    switch (i)
    {
    case 1:
        system("cls");
        system("COLOR 30");
        cout<<"\n\n\n\n\t\t\t\t     *** Select Topic ***\n";
        cout<<"\t\t\t\t _______________________________\n" ;
        cout<<"\t\t\t\t|          1. English           |\n" ;
        cout<<"\t\t\t\t|_______________________________|\n" ;
        cout<<"\t\t\t\t|          2. Mathematics       |\n" ;
        cout<<"\t\t\t\t|_______________________________|\n" ;

        int topic;
        cout<<"\n\t\tSelect any Topic : " ;
        cin>>topic ;
        switch (topic)
        {
        case 1:       ///for english...
            system("cls");
            //--------------------------------------
            system("COLOR D1");
            cout<<"\n\n\n\n\t\t\t\t     *** Select Level ***\n";
            cout<<"\t\t\t\t _______________________________\n" ;
            cout<<"\t\t\t\t|           1. Easy             |\n" ;
            cout<<"\t\t\t\t|_______________________________|\n" ;
            cout<<"\t\t\t\t|           2. Medium           |\n" ;
            cout<<"\t\t\t\t|_______________________________|\n" ;
            cout<<"\t\t\t\t|           3. Hard             |\n" ;
            cout<<"\t\t\t\t|_______________________________|\n" ;

            cout<<"\t\tSelect any level : " ;
            cin>>level ;
            cout<<"\n\t\tSelected successfully...\n" ;
            system("pause") ;
            system("cls") ;
            cout<<"\n\n\n\n\n\t\t\t***Start of the quiz***" ;
            switch (level)
            {
            case 1:
                system("COLOR 2F");
                easyeng() ;
                break ;
            case 2:
                system("COLOR F0");
                medeng();
                break ;
            case 3:
                system("COLOR 1A");
                hardeng() ;
                break ;
            default :
                break ;
            }
            system("cls") ;
            //-------------------------------------------------
            break ;
        case 2:        ///for math...
            system("cls");
            //--------------------------------------
            system("COLOR D1");
            cout<<"\n\n\n\n\t\t\t\t     *** Select Level ***\n";
            cout<<"\t\t\t\t _______________________________\n" ;
            cout<<"\t\t\t\t|            1. Easy            |\n" ;
            cout<<"\t\t\t\t|_______________________________|\n" ;
            cout<<"\t\t\t\t|            2. Medium          |\n" ;
            cout<<"\t\t\t\t|_______________________________|\n" ;
            cout<<"\t\t\t\t|            3. Hard            |\n" ;
            cout<<"\t\t\t\t|_______________________________|\n" ;

            cout<<"\t\tSelect any level : " ;
            cin>>level ;
            cout<<"\n\t\tSelected successfully...\n" ;
            system("pause") ;
            system("cls") ;
            cout<<"\n\n\n\n\n\t\t\t***Start of the quiz***" ;
            switch (level)
            {
            case 1:
                system("COLOR 2F");
                easymath() ;
                break ;
            case 2:
                system("COLOR F0");
                medmath();
                break ;
            case 3:
                system("COLOR 1A");
                hardmath() ;
                break ;
            default :
                break ;
            }
            system("cls") ;
            //-------------------------------------------------
            break ;

        default :
            break ;
        }
        break;
        system("cls") ;
    case 2:
        system("cls");
        system("COLOR 80");
        learn() ;
        break;
    case 3:
        system("cls");
        system("COLOR 80");
        leaderboard() ;
        break;
    case 4:
        system("cls") ;
        about() ;
        break;
    case 5:
        return 0;
        break ;
    default:
        return 0;
        break ;
    }
    system("cls") ;
    home() ;

    return 0 ;
}
void about()
{
    cout<<"\n\n\n\n\n\t\t\t\t****About****\n" ;
    cout<<"\t\t\t\t __________________________\n" ;
    cout<<"\t\t\t\t|                          |\n" ;
    cout<<"\t\t\t\t|     The Quizzy (Beta)    |\n" ;
    cout<<"\t\t\t\t|      Version 1.0.0       |\n" ;
    cout<<"\t\t\t\t|                          |\n" ;
    cout<<"\t\t\t\t|     Developped By-       |\n" ;
    cout<<"\t\t\t\t|                          |\n" ;
    cout<<"\t\t\t\t|    Nazmus Shakib Riad    |\n" ;
    cout<<"\t\t\t\t|       CSE'16,KUET        |\n" ;
    cout<<"\t\t\t\t|                          |\n" ;
    cout<<"\t\t\t\t|__________________________|\n" ;

    ofstream fout("ratings.txt",ofstream::app) ;

    cout<<"\n\n\t\t\t\tIf you like this,give rating and comment below:\n" ;
    cout<<"\t\t\t\tEnter your name:\n";
    string name,comment ;
    //getline(cin,name) ;
    cin>>name ;
    //cout<<endl<<endl<<name<<endl<<endl ;
    fout<<name ;
    cin.ignore(256,'\n') ;
    cout<<"\t\t\t\tRatings (Out of 10): " ;
    float rate;
    cin>>rate ;
    cin.ignore(1) ;
    cout<<"\t\t\t\tComment about this app :\n" ;
    getline(cin,comment) ;

    cout<<"\t\t\t\t******Thank You******\n\n" ;
    fout<<"\t\t"<<rate<<"\t\t"<<comment<<endl ;
    system("pause") ;
}
