#include<iostream>
#include<string>
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
   string s;
   cin>>s;
   int count =0 ;
   for(int i=0;i<s.size();i++)
   {

       if(s[i]=='4'||s[i]=='7'){
           count++;
       }

   }
   if(count==7||count==4){
            cout<<"YES"<<endl;
   }
   else{
        cout<<"NO"<<endl;
   }

}

