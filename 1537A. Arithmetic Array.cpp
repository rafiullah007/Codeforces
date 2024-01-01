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
	 int t;
	 cin>>t;
	 while(t--){
		 int n;
		 cin>>n;
		 int sum = 0;
		 for (int i = 0;i < n; i++){
			 int a;
			 scanf("%d",&a);
			 sum += a;
		 }
   if(sum < n) cout<<"1"<<endl;
   else cout<<sum-n<<endl;
	 }
 }
