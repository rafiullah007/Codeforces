#include<iostream>
#include<algorithm>
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
    int temp;
    int least;;
    int students; //n
    int puzz;//m
    cin>>students>>puzz;
    int a[puzz];
    for(int i = 0; i<puzz; i++)
    {
        cin>>a[i];
    }


    /*

     We can sort an array  by using the formula shown down below :
                        sort(a,a+students);

     For better understanding let's use the bubble sort technique
     for sorting our array.

    */
    for (int i = 0 ; i < puzz - 1; i++)
  {
    for (int j = 0 ; j < puzz - i - 1; j++)
    {
      if (a[j] > a[j+1])
      {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }

  least = a[students-1] -  a[0];
   for (int i = 1; i <= puzz - students; i++)
    {
        if(a[i+students-1]-a[i] < least)
        {
            least = a[i+students-1]-a[i] ;
        }

    }
    cout<<least<<endl;
}
