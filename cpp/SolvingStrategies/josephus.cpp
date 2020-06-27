/*
 *18.5 조세푸스 
 */

#include <iostream>
#include <list>
//#include <math.h>

using namespace std; 

void josephus(int n, int k);

int main(int argc, char** argv)
{
	josephus(6, 3);
	return 0;
}

void josephus(int n, int k)
{
    list<int> suvivors;
    
    for(int i = 1; i <= n; i++) suvivors.push_back(i);
    
    list<int>::iterator kill = suvivors.begin();
    
    while(n >2)
    {
        kill = suvivors.erase(kill);
        if(kill == suvivors.end()) kill = suvivors.begin();
        --n;
        
        for(int i = 0; i <k-1; i++)
        {
            kill++;
            if(kill == suvivors.end()) kill =suvivors.begin();
        }
    }
    cout << suvivors.front() << " " << suvivors.back() << endl;
}