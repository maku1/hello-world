/**
 *The trip problem
 *UVA:10137
 *Author: ying.fan
 *Date: 1/22/2018
 *
 */

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

    using std::cout;
    using std::cin;
    using std::vector;
int main()
{
   vector<double> q;
   int nStudent = 0;
  
   while( (cin >> nStudent) && nStudent)
   {
    vector<double> v;
    double input = 0.0;
     double sum = 0.0;
 
    for(int i = 0; i < nStudent; i++)
    {
        cin >> input;
        sum += input;
        v.push_back(input);
    }
   
    
 //  cout << "The sum is : " << sum  << "\n";
    double avg = sum / nStudent ;
 //   cout << "avg: "  << avg << "\n";
    
  
   double result = 0.0;  // for less than the avg
   double result2 = 0.0;   //for large than the avg
    for(int i = 0; i < nStudent; i++)
    {
        if(v[i] < avg)  //when currentStudentPayment < average
        {
          result+= ((int)((avg - v[i])*100)/100.00);
      
        }
        else //when currentStudentPayment > average
        {
          result2 +=((int)((v[i]-avg)*100)/100.00);
        }
        
    }
    
    if(result > result2)
    {
      // cout << "$"<< std::fixed << std::setprecision(2) << result<< "\n";
        q.push_back(result);
    }
    else
    {
   //   cout << "$"<< std::fixed << std::setprecision(2) << result2<< "\n";
        q.push_back(result2);
    }
    
   }
   for(int i = 0;i< q.size(); i++)
   {
       cout << "$"<< std::fixed << std::setprecision(2) << q[i]<< "\n";
   }
   
   
    return 0;
}