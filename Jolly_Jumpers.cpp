/**
 *UVA: 10038
 *Jolly Jumpers
 *Author: ying.fan
 *Date: 01/27/2018
 */

#include <iostream>
#include <cmath>
#include <vector>
    using std::cout;
    using std::cin;
    using std::vector;
int main()
{
   
    
    int size = 0;
    int temp = 0;
    while(cin >> size)
    {
        bool visit[100000]= {false};
        vector<int> v;
        bool  Jolly = true;
        for(int i = 0 ; i < size; i++)
        {
            int a = 0;
            cin >> a;
            v.push_back(a);
        }
        for(int i = 0; i < size-1; i++)
        {
            temp = abs(v[i+1] -v[i]);
            if( temp > (size-1))
            {
              //  cout << "\nThe " << i << "value is: "
             //   << abs(v[i+1] -v[i]) << " " << size-1<< "\n";
                visit[temp] = false;
             //   cout << "Jolly = false\n";
            }
            visit[temp] = true;
        }
        for(int i =1; i < size;i++)
        {
            if(!visit[i])
            {
             //   cout << "The " << i << "is not \n";
                Jolly = false;
            }
        }
        if(Jolly == true)
        {
            cout << "Jolly\n";
        }
        else
        {
            cout << "Not jolly\n";
        }
        
    }
    
    return 0;
}