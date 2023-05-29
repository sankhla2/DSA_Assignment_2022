#include <bits/stdc++.h>

using namespace std;

signed main()
{
    int t;
    cin>>t;
    int arr[1000];
    int top=-1;
    while(t--){
        string s;
        cin>>s;
        if(s=="push"){
            int x;
            cin>>x;
            top++;
            arr[top] = x;

        }
        else if(s=="pop"){
            top--;
            if(top<0){
                cout<<"stack is empty"<<endl;
            }
        }
        else if(s=="peek"){
            if(top>=0){
                cout<<arr[top]<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(s=="size") {
            if(top<0){
                cout<<0<<endl;
            }
            else {
                cout<<top+1<<endl;
            }
            
        }
        else{
            if(top<0){
                cout<<1<<endl;
            }
            else {
                cout<<0<<endl;
            }
        }
    }

    
    return 0;
}