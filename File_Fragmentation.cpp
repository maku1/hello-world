/**
 *File Fragmentation
 *UVA:  10132
 *
 *@Author: ying.fan
 *
 *@Date: 2/6/2018
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
    using std::vector;
    using std::string;
    using std::cout;
    using std::cin;
int compare(string a, string b)
{
    return a.length() < b.length();
}
int main()
{
    char ch[1000];
    int test_case = 0;
    cin >> test_case;
  //  cout << "test_case: " << test_case << "\n"; 
    string str[1000];
    getchar();
    getchar();
    while(test_case--)
    {
       int n = 0;  //size
      
        while(gets(ch))
        {
            
           if(ch[0]!= '\0')
           {
            str[n] = ch;
            n++;
           }
           else
           {
              break;
           }
        }
    //   cout << "n: " << n << "\n";
        for(int i = 0; i < n; i++)
        {
         //   cout << str[i] << "\n";
        }
        sort(str, str+ n,compare);
        for(int i = 0; i < n; i++)
        {
           // cout << str[i] << "\n";
        }
        int total_len = str[0].length() + str[n-1].length();
   //     cout << total_len << "\n";
        int c = -1;
        for(int i = 0; i < n-1; i++)
        {
            if(str[i].length() == str[i+1].length())
            {
                c = i;
                break;
            }
        }
        if(c != -1)
        {
            if(str[c] + str[n-1-c] == str[c + 1]+ str[n-2-c])
            {
                cout << str[c] + str[n-1-c]  << "\n";
            }
            else if(str[c] + str[n-1-c] == str[n-2-c] + str[c+1] )
            {
                cout << str[c] + str[n-1-c] << "\n";
            }
            else if( str[n-1-c] + str[c] == str[c + 1]+ str[n-2-c]) 
            {
                cout <<  str[n-1-c] + str[c] << "\n";
            }
            else if(str[n-1-c] + str[c] ==  str[n-2-c] + str[c+1])
            {
                cout << str[n-1-c] + str[c] << "\n";
            }
        }
        else
        {
            if(str[0] + str[n-1] == str[1] + str[n-2] )
            {
                cout << str[0] + str[n-1] << "\n";
            }
            else if(str[0] + str[n-1] == str[n-2]  + str[1] )
            {
                cout << str[0] + str[n-1] << "\n";
            }
            else if(str[n-1] + str[0] == str[1] + str[n-2]  )
            {
                cout << str[n-1] + str[0] << "\n"; 
            }
            else if(str[n-1] + str[0] == str[n-2] + str[1] )
            {
                cout << str[n-1] + str[0] << "\n"; 
            }
        }
        cout << "\n";
      
    }
    
    return 0;
}