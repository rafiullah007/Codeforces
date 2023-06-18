#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int t2;
    std::cin >> t2;
    while(t2>0){
        int n;
        cin>>n;
        int ones=0;
        int minones=0;
        for(int i3=0;i3<n;i3++){
            int val;
            cin>>val;
            if(val==1){
                ones++;
            }
            else{
                minones++;
            }
        }
        if(ones==n){
            cout<<"0"<<endl;
        }
        else if(minones<ones){

              if(minones%2==0){
                cout<<"0"<<endl;
              }else{
                cout<<"1"<<endl;
              }
            }else if(minones==ones){
                if(minones%2==0){
                   cout<<"0"<<endl;
                  }else{
                    cout<<"1"<<endl;
                  }
            }else{


                int half=n/2;
                int df=(minones-half);
                if(half%2!=0)
                df++;

                cout<<df<<endl;
            }
            t2--;
    }
}



