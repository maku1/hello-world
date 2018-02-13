/**
 *Contest Scoreboard
 *UVA: 10258
 *
 *@Author:ying.fan
 *
 *@Date: 1/29/2018
 *
 */


#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <cstring>
#include <limits>
    using std::cout;
    using std::cin;
    using std::string;
    using std::istringstream;
struct  team
{
    bool submit; 
    int index;
    int nquestion[10];
    int time[100];
    int penatly;
    int tproblem;
};


void inital(team t[] )
{
  for(int i = 0; i < 100; i++)
  {
    t[i].submit = 0;
    t[i].index = -1;
    t[i].tproblem = 0; 
    for(int j = 0; j < 10; j++)
    {
      t[i].nquestion[j] = 0;
      t[i].time[j] = 0;
    }
    t[i].penatly = 0;
    
  }
}
void add(team t[])
{
  for(int i = 0; i < 100; i++)
  {
    if(t[i].submit)
    {
      for(int j = 0; j < 10; j++)
      {
        t[i].penatly += t[i].time[j];
     //   cout << "\n t[i].penatly:" << t[i].penatly << "\n";
      }
    }
  }
}
int main()
{
  int test_case = 0;
  cin >> test_case;
   team t1[100];
    string line;
  getline(cin , line);
   getline(cin , line);
   char l;
  while(test_case--)
  {
    cout << "testcase: " << test_case << "\n";
    inital(t1);
    int a,b, c;
     
     
    while((getline(cin , line)))
    {
      if(line == "")
      {
        cout << "(line != "")\n";
      }
      istringstream iss(line);
      iss >> a >> b >> c >> l;
      cout << a << b << c << l << "\n";
      t1[a-1].submit = true;
      t1[a-1].index  = a;
     switch(l)
     {
      case 'C':
       if(!t1[a-1].nquestion[b-1])
       {
         t1[a-1].nquestion[b-1] = 1;
         t1[a-1].time[b-1] += c;
         t1[a-1].tproblem++;
       }
       break;
      case 'I':
         if(!t1[a-1].nquestion[b-1])
         {
           t1[a-1].time[b-1] += 20;
         }
        default:
           break;
      }
    }
    add(t1);
    for(int i = 0; i < 100; i++)
    {
      for(int j = 0; j < 100; j++)
      {
          if(t1[i].tproblem > t1[j].tproblem)
          {
            team temp;
            temp = t1[i];
            t1[i] = t1[j];
            t1[j] = temp;
          }
      }
    }
    for(int i = 0; i < 100 ; i++)
     {
      if(t1[i].submit)
      {
        cout << t1[i].index << " " << t1[i].tproblem << " "
             << t1[i].penatly << "\n";
      }
     }
    
  }
  return 0;    
}
    
