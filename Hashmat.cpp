#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T,number,digit,n,i,t,rem,t_number,j=1;
    cin>>T;
    while(T--){
        t = 1;i=1;rem=0;t_number = 0;
        cin>>number;
        n = number;

        digit = log10(number) + 1;
        //cout<<digit<<endl;
        while(i<digit){
            t *= 10;
            i++;
        }

        //cout<<t<<endl;
        while(number>0 && t>0)
        {

        	rem = n%10;
        	t_number += t*rem;
        	n = n/10;
            t/=10;

        }
        cout<<t_number<<endl;
        if(number==t_number)
            cout<<"Case "<<j<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<j<<": "<<"No"<<endl;
        j++;


    }
}
