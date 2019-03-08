#include <bits/stdc++.h>
#include <iomanip>
#include "english.h"
#include "questionbank.h"
#include "score.h"

float scor ;

using namespace std ;

class english : public Ques_Bank
{
public:
    void friend easyeng() ;
    void friend medeng() ;
    void friend hardeng() ;
};

void easyeng()
{
    english q1,q2,q3,q4,q5;
    q1.setter("1.What is the antonym of antonym ?","a.Opposite","b.Reverse","c.Synonym","d.None","c") ;
    q1.getter() ;
    cout<<"Enter your answer :\n" ;
    string ans ;
    cin>>ans ;
    if (ans==q1.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : c.Synonym\n" ;
        scor = scor-1.25 ;
    }
    system("pause") ;
    system("cls") ;

    q2.setter("2.He is lazy.He never does ___ work.","a.Some","b.Any","c.No","d.None","b") ;
    q2.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q2.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.Any\n" ;
        scor  = scor-1.25 ;
    }
    system("pause") ;
    system("cls") ;

    q3.setter("3.He is ___ European.","a.An ","b.A","c.The","d.x","b") ;
    q3.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q3.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.A\n" ;
        scor = scor - 1.25 ;
    }
    system("pause") ;
    system("cls") ;

    q4.setter("4.He said that he ___ be unable to come.","a.Will","b.Shall","c.Should","d.Would","d") ;
    q4.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q4.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : d.Would\n" ;
        scor = scor-1.25 ;
    }
    system("pause") ;
    system("cls") ;

    q5.setter("5.Give my ___ to him.","a.warm compliment","b.compliment","c.best compliment","d.None","b") ;
    q5.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q5.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.Compliment\n" ;
        scor  = scor-1.25 ;
    }
    system("pause") ;
    system("cls") ;

    score obj(scor) ;

    cout<<"\n\n\n\n\t\t\tGame Over!\n" ;
    cout<<"\n\t\t\tYour total score is "<<setprecision(4)<<obj.get()<<endl ;
    cout<<"\t\t\tPlease Enter Your Name : " ;
    string name ;
    cin>>name ;
    cout<<"\n\t\t\tCongratulation "<<name<<" !"<<endl ;

    ofstream fout("leaderboard.txt",ofstream::out | ofstream::app) ;
    fout<<name<<"\t\t"<<scor<<endl ;
    fout.close() ;

    system("pause") ;
}
//=======================================================================
void medeng()
{
    scor = 0 ;
    english q1,q2,q3,q4,q5;
    q1.setter("1.Which is collective noun ?","a.Bashar","b.Class","c.Youth","d.Island","b") ;
    q1.getter() ;
    cout<<"Enter your answer :\n" ;
    string ans ;
    cin>>ans ;
    if (ans==q1.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.Class\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    q2.setter("2.It is wise ____ you to study properly.","a.To","b.For","c.Of","d.By","b") ;
    q2.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q2.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.For\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    q3.setter("3.Man Aspires ____ riches.","a.On ","b.In","c.At","d.After","d") ;
    q3.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q3.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : d.After\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    q4.setter("4.Which is the masculine form? ","a.Mare","b.Nymph","c.Stag","d.Heiress","c") ;
    q4.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q4.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : c.Stag\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    q5.setter("5.Antonym of 'FALLACIOUS'- ","a.Safe","b.Energetic","c.Diverted","d.None","d") ;
    q5.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q5.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : d.None\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    cout<<"\n\n\n\n\t\t\tGame Over!\n" ;
    cout<<"\n\t\t\tYour total score is "<<scor<<endl ;
    cout<<"\t\t\tPlease Enter Your Name : " ;
    string name ;
    cin>>name ;
    cout<<"\n\t\t\tCongratulation "<<name<<" !"<<endl ;

    ofstream fout("leaderboard.txt",ofstream::out | ofstream::app) ;
    fout<<name<<"\t\t"<<scor<<endl ;
    fout.close() ;

    system("pause") ;
}
//======================================================================
void hardeng()
{
    scor=0 ;
    english q1,q2,q3,q4,q5;
    q1.setter("1.Only one ____ was discussed.","a.Agendum","b.Agenda","c.Agendaus","d.Agendium","a") ;
    q1.getter() ;
    cout<<"Enter your answer :\n" ;
    string ans ;
    cin>>ans ;
    if (ans==q1.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : a.Agendum\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    q2.setter("2.A comedy does not have- ","a.A happy ending","b.Plot","c.Catharsis","d.Comic element","c") ;
    q2.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q2.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : c.Cathersis\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    q3.setter("3.Truth is-","a.A pronoun ","b.An abstract noun","c.A common noun","d.A collective noun","b") ;
    q3.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q3.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.An abstract noun\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    q4.setter("4.I have a savings accounts ____ Janata Bank","a.in","b.with","c.at","d.into","b") ;
    q4.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q4.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.with\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    q5.setter("5.SLILOQUEY means-","a.To memorise","b.Talking to oneself","c.Action of speech","d.None","b") ;
    q5.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q5.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.Talking to oneself\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    cout<<"\n\n\n\n\t\t\tGame Over!\n" ;
    cout<<"\n\t\t\tYour total score is "<<scor<<endl ;
    cout<<"\t\t\tPlease Enter Your Name : " ;
    string name ;
    cin>>name ;
    cout<<"\n\t\t\tCongratulation "<<name<<" !"<<endl ;

    ofstream fout("leaderboard.txt",ofstream::out | ofstream::app) ;
    fout<<name<<"\t\t"<<scor<<endl ;
    fout.close() ;

    system("pause") ;
}
///==============================================
void easymath()
{
    english q1,q2,q3,q4,q5;
    q1.setter("1.Which is the prime number ?","a.119","b.39","c.47","d.None","c") ;
    q1.getter() ;
    cout<<"Enter your answer :\n" ;
    string ans ;
    cin>>ans ;
    if (ans==q1.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : c.47\n" ;
        scor = scor-1.25 ;
    }
    system("pause") ;
    system("cls") ;

    q2.setter("2.Which is the greatest fraction? ","a.4/7","b.10/14","c.9/21","d.None","b") ;
    q2.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q2.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.10/14\n" ;
        scor  = scor-1.25 ;
    }
    system("pause") ;
    system("cls") ;

    q3.setter("3.GCD of prime numbers____","a.0","b.1","c.Undefined","d.None","b") ;
    q3.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q3.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.1\n" ;
        scor = scor - 1.25 ;
    }
    system("pause") ;
    system("cls") ;

    q4.setter("4.(a+b)=9 & (a-b)=3,then b=?","a.12","b.6","c.9","d.3","d") ;
    q4.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q4.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : d.3\n" ;
        scor = scor-1.25 ;
    }
    system("pause") ;
    system("cls") ;

    q5.setter("5. Find sequence: 2,5,11,20,__ ?","a.28","b.32","c.36","d.None","b") ;
    q5.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q5.result)
    {
        scor = scor+5 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.32\n" ;
        scor  = scor-1.25 ;
    }
    system("pause") ;
    system("cls") ;

    score obj(scor) ;

    cout<<"\n\n\n\n\t\t\tGame Over!\n" ;
    cout<<"\n\t\t\tYour total score is "<<setprecision(4)<<obj.get()<<endl ;
    cout<<"\t\t\tPlease Enter Your Name : " ;
    string name ;
    cin>>name ;
    cout<<"\n\t\t\tCongratulation "<<name<<" !"<<endl ;

    ofstream fout("leaderboard.txt",ofstream::out | ofstream::app) ;
    fout<<name<<"\t\t"<<scor<<endl ;
    fout.close() ;

    system("pause") ;
}
///================================================
void medmath()
{
    scor = 0 ;
    english q1,q2,q3,q4,q5;
    q1.setter("1. Which is pallindromic number ?","a.104","b.0","c.89","d.9192","b") ;
    q1.getter() ;
    cout<<"Enter your answer :\n" ;
    string ans ;
    cin>>ans ;
    if (ans==q1.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.0\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    q2.setter("2.Integration of -sinx.cosx ?.","a.-.5cos2x","b..25cos2x","c.sin2x","d.None","b") ;
    q2.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q2.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b..5cos2x\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    q3.setter("3.Differentiation of e^lnx ?","a. (1/x).e^lnx ","b.e^lnx","c.1/x","d.1","d") ;
    q3.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q3.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : d.1\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    q4.setter("4. Find the next : 1,1,2,3,5,8,__? ","a.17","b.11","c.13","d.None","c") ;
    q4.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q4.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : c.13\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    q5.setter("5. If 5+3=24 and 4+6=35 then 6+9=?","a.15","b.8","c.63","d.None","d") ;
    q5.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q5.result)
    {
        scor = scor+10 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : d.None\n" ;
        scor  = scor-2.25 ;
    }
    system("pause") ;
    system("cls") ;

    cout<<"\n\n\n\n\t\t\tGame Over!\n" ;
    cout<<"\n\t\t\tYour total score is "<<scor<<endl ;
    cout<<"\t\t\tPlease Enter Your Name : " ;
    string name ;
    cin>>name ;
    cout<<"\n\t\t\tCongratulation "<<name<<" !"<<endl ;

    ofstream fout("leaderboard.txt",ofstream::out | ofstream::app) ;
    fout<<name<<"\t\t"<<scor<<endl ;
    fout.close() ;

    system("pause") ;
}
///============================================
void hardmath()
{
    scor=0 ;
    english q1,q2,q3,q4,q5;
    q1.setter("1.If |z1+z2| = |z1|+|z2| , then arg(z1) & arg(z2) =?","a.Pi","b.Pi/2","c.0","d.None","a") ;
    q1.getter() ;
    cout<<"Enter your answer :\n" ;
    string ans ;
    cin>>ans ;
    if (ans==q1.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : a.Pi\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    q2.setter("2.Differentiation of Pi___","a.Pi.x","b.Pi^2","c.0","d.None","c") ;
    q2.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q2.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : c.0\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    q3.setter("3.(c+i)/(c-i)=aib ,then a^2+b^2=? ","a.-1","b.1","c.c^2","d.None","b") ;
    q3.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q3.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : b.1\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    q4.setter("4.The next of sequence : 3,11,15,17,__","a.15","b.16","c.17","d.18","d") ;
    q4.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q4.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : d.18\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    q5.setter("5.For u(n-1) signal,ROC of the Z transform: ","a. Infinity","b.Zero","c.Whole Z plane","d. Whole plane except z=infinity","d") ;
    q5.getter() ;
    cout<<"Enter your answer :\n" ;
    cin>>ans ;
    if (ans==q5.result)
    {
        scor = scor+15 ;
        cout<<"Great ! Correct answer !\n" ;
    }
    else
    {
        cout<<"Sorry ! Wrong answer ! \n" ;
        cout<<"Correct Answer : d.Whole plane except z=infinity\n" ;
        scor  = scor-4.25 ;
    }
    system("pause") ;
    system("cls") ;

    cout<<"\n\n\n\n\t\t\tGame Over!\n" ;
    cout<<"\n\t\t\tYour total score is "<<scor<<endl ;
    cout<<"\t\t\tPlease Enter Your Name : " ;
    string name ;
    cin>>name ;
    cout<<"\n\t\t\tCongratulation "<<name<<" !"<<endl ;

    ofstream fout("leaderboard.txt",ofstream::out | ofstream::app) ;
    fout<<name<<"\t\t"<<scor<<endl ;
    fout.close() ;

    system("pause") ;
}
