#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include "learn.h"

using namespace std ;

template<typename T>
class Matrix
{
public:
    T data[2][2];
    friend istream& operator>>(istream& cin, Matrix& m)
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
                cin>>m.data[i][j];
        }
        return cin;
    }
    friend ostream& operator<<(ostream& cout, Matrix& m)
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<m.data[i][j]<<" ";
            }
            cout<<endl<<"\t\t\t\t";
        }

        return cout;
    }

    Matrix operator+(Matrix& m2)
    {
        Matrix temp;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
                temp.data[i][j]= data[i][j] + m2.data[i][j];
        }
        return temp;
    }


};

void learn()
{
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

    switch(topic)
    {
    case 1: ///english
        //system("cls");
        system("COLOR 30");
        cout<<"\n\n\n\n\t\t\t\t     *** Select Topic ***\n";
        cout<<"\t\t\t\t _______________________________\n" ;
        cout<<"\t\t\t\t|          1. Vocabulary        |\n" ;
        cout<<"\t\t\t\t|_______________________________|\n" ;
        cout<<"\t\t\t\t|          2. Antonym           |\n" ;
        cout<<"\t\t\t\t|_______________________________|\n" ;
        cout<<"\t\t\t\t|          3. Synonym           |\n" ;
        cout<<"\t\t\t\t|_______________________________|\n" ;
        system("pause") ;
        break ;
    case 2:   ///math
        system("cls");
        system("COLOR 30");
        cout<<"\n\n\n\n\t\t\t\t     *** Select Topic ***\n";
        cout<<"\t\t\t\t _______________________________\n" ;
        cout<<"\t\t\t\t|         1. Calculator         |\n" ;
        cout<<"\t\t\t\t|_______________________________|\n" ;
        cout<<"\t\t\t\t|         2. Matrix             |\n" ;
        cout<<"\t\t\t\t|_______________________________|\n" ;
        cout<<"\t\t\t\t|         3. Complex Number     |\n" ;
        cout<<"\t\t\t\t|_______________________________|\n" ;

        int top ;
        cout<<"Select any topic: " ;
        cin>>top ;
        switch(top)
        {
        case 1:
            system("cls") ;
            cout<<"\n\n\n\t\t\t\t  ***Calculator***\n\n" ;
            calculator() ;
            break ;
        case 2:
            system("cls") ;
            cout<<"\n\n\n\t\t\t\t  ***Matrix Addition***\n\n" ;
            matrix();
            break ;
        case 3:
            //complex();
            break ;
        default:
            break ;
        }
        system("pause") ;
        break ;
    default:
        break ;
    }
}
///================================================
int matrix()
{
    Matrix<int> m1,m2,m3;
    cout<<"\t\t\t\tEnter the first matrix of 2x2 :\n" ;
    cin>>m1;
    ///cout<<m1;
    cout<<"\t\t\t\tEnter the second matrix of 2x2 :\n" ;
    cin>>m2;
    ///cout<<m2;
    m3 = m1 + m2;
    cout<<"\t\t\t\tThe addition of two matrix is :\n\t\t\t\t" ;
    cout<<m3;

    return 0;
}
///=================================================
int add(int a,int b)
{
    return a+b ;
}
float add(float a,float b)
{
    cout<<"this is float....\n" ;
    return a+b ;
}
float sub(double a,double b)
{
    return a-b ;
}

namespace quizzy
{
template <typename T>
float div(T a,T b)
{
    if (b!=0)
        return a/b ;
    else
    {
        cout<<"\t\t\t\tCan not divide by zero...\n" ;
        exit(1) ;
    }
}
}
double mul(double a,double b)
{
    return a*b ;
}

void calculator()
{
    cout<<"\t\t\t\t _______________________________\n" ;
    cout<<"\t\t\t\t|         1. Addition           |\n" ;
    cout<<"\t\t\t\t|_______________________________|\n" ;
    cout<<"\t\t\t\t|         2. Subtraction        |\n" ;
    cout<<"\t\t\t\t|_______________________________|\n" ;
    cout<<"\t\t\t\t|         3. Multiplication     |\n" ;
    cout<<"\t\t\t\t|_______________________________|\n" ;
    cout<<"\t\t\t\t|         4. Division           |\n" ;
    cout<<"\t\t\t\t|_______________________________|\n" ;

    cout<<"\n\t\t\t\tChoose an option to perform : " ;
    int key ;
    cin>>key ;
    switch(key)
    {
    case 1:
        cout<<"\n\t\t\t\t***Addition***\n\n" ;
        cout<<"\t\t\t\tPress 1 for int type,2 for float type: ";
        int type;
        cin>>type ;
        if (type==1)
        {
            int m,n ;
            cout<<"\t\t\t\tEnter two number:\n";
            cin>>m>>n ;
            cout<<"\n\t\t\t\tResult is : "<<add(m,n)<<endl ;
        }
        if(type==2)
        {
            float m,n ;
            cout<<"\t\t\t\tEnter two number:\n";
            cin>>m>>n ;
            cout<<"\n\t\t\t\tResult is : "<<add(m,n)<<endl ;
        }
        break ;
    case 2:
        cout<<"\n\t\t\t\t***Subtraction***\n\n" ;
        double a,b ;
        cout<<"\t\t\t\tEnter two number:\n";
        cin>>a>>b ;
        cout<<"\n\t\t\t\tResult is : "<<sub(a,b)<<endl ;
        break ;
    case 3:
        cout<<"\n\t\t\t\t***Multiplication***\n\n" ;
        double p,q ;
        cout<<"\t\t\t\tEnter two number:\n";
        cin>>p>>q ;
        cout<<"\n\t\t\t\tResult is : "<<setprecision(10)<<mul(p,q)<<endl ;
        break ;
    case 4:
        cout<<"\n\t\t\t\t***Division***\n\n" ;
        cout<<"\t\t\t\tPress 1 for int type,2 for float type: ";
        int typ;
        cin>>typ ;
        if (typ==1)
        {
            int c,d ;
            cout<<"\t\t\t\tEnter two number:\n";
            cin>>c>>d ;
            cout<<"\n\t\t\t\tResult is : "<<quizzy::div(c,d)<<endl ;
        }
        if(typ==2)
        {
            float e,f ;
            cout<<"\t\t\t\tEnter two number:\n";
            cin>>e>>f ;
            cout<<"\n\t\t\t\tResult is : "<<quizzy::div(e,f)<<endl ;
        }
        break ;
    default:
        break ;
    }
}

