#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
 
#define MAXN 1000001
 
using namespace std;
 
 
int main()
{
    int a;
    cin >> a;
     
    for(int i=1; i<=a; i++)
    {
        int cnt = 0;
        int b=i;
        while(1)
        {
            int c = b%10;
            if(c==3 || c==6 || c==9) cnt++;
             
            b = b/10;
            if(b==0) break;
        }
         
        if(cnt == 0) cout << i << " ";
        else
        {
            for(int j=0; j<cnt; j++) cout << "-";
            cout << " ";
        }
    }
 
    return 0;
}