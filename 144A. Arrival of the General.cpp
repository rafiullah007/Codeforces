#include<iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

 int main()
 {
     int  n ;
     cin>>n;
     int a[n];
     int max =0,min = 101;
     int maxi,mini;

     for(int i =0;i<n;i++)
     {
         cin>>a[i];
         if(max<a[i])
         {
             max = a[i];
             maxi = i;
         }
         if(min>=a[i])
         {
             min = a[i];
             mini = i;
         }
     }
     if(maxi>mini)
     {
         mini++;
     }
     int sum = maxi+(n-1)-mini;
     cout<<sum<<endl;
 }

