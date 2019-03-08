#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>

using namespace std ;

void leaderboard()
{
    ifstream fin("leaderboard.txt") ;

    string name ;
    float val;
    priority_queue<pair<float,string> > pq;
    while (getline(fin,name))
    {
        stringstream sin(name);
        sin>>name;
        sin>>val;
        pq.push(make_pair(val,name));
    }
    int cnt=0;
    cout<<"\n\n\n\t\t\t_____________________________________\n" ;
    cout<<"\t\t\t|\t***LEADERBOARD***           |\n" ;
    cout<<"\t\t\t=====================================\n" ;
    cout<<"\t\t\tRank\tName\t\tScore\n" ;
    while(!pq.empty())
    {
        cout<<"\t\t\t_____________________________________\n" ;
        cout<<"\t\t\t"<<++cnt<<"\t"<<pq.top().second<<"\t\t"<<pq.top().first<<endl;
        cout<<"\t\t\t_____________________________________\n" ;
        pq.pop();
    }
    system("pause") ;
}
