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
    int a;
    cin>>a;
    int arr[a];
    int count=0;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int max= arr[0];
    int min = arr[0];
    for(int i=0;i<a;i++)
    {
        if(arr[i]>max){
            max=arr[i];
            count++;
        }
        if(arr[i]<min){
            min=arr[i];
            count++;
        }
    }
    cout<<count;
 
}
