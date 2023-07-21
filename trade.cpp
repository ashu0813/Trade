#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    
    float p,s;
    cout<<"To calculate no of trades required to get to net amount INR ";cin>>p;cout<<"Starting with INR ";cin>>s;
    float profit1;
    cout<<"At the profit % = ";cin>>profit1;
    float v = p/s;
    float r = log (v);
    float y = log ((100 + profit1)/100);
    int z = r/y;
    cout<<endl<<"Number of trades required = "<<++z;


    cout<<endl<<endl;

    int n;
    float x;
    cout<<"To calculate profit at nth trade and net amount after 'n' trades starting with INR ";cin>>x;

    float profit;
    cout<<"At the profit % = ";cin>>profit;
    cout<<"Number of trades, n = ";cin>>n;
    cout<<endl;
    
    int a;
    int i = 1;
    if (i = 1 && i <= n)
    {
        cout<<"Profit after 1st trade is INR "<<x*(pow( (100 + profit)/100, i) - pow( (100 + profit)/100, (i-1)))<<endl;
        i++;
    }
    
    if (i = 2 && i <= n)
    {
        cout<<"Profit after 2nd trade is INR "<<x*(pow( (100 + profit)/100, 2) - pow( (100 + profit)/100, 1))<<endl;
        i++;
    }

    for ( i = 3; i <= n; i++)
    {
        cout<<"Profit after "<<i<<"th trade is INR "<<x*(pow( (100 + profit)/100, i) - pow( (100 + profit)/100, (i-1)))<<endl;
    }
    cout<<endl;
    for ( a = 1; a <= n; a++)
    {
        float b = pow( (100 + profit)/100, a);
        cout<<"Net amount after trade "<<a<<" is INR "<<x*b<<endl;
        
    }
    
    cout<<endl<<endl;
    
    return 0;

}

