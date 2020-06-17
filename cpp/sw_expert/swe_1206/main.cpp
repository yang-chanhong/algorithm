#include <iostream>
//#include <math.h>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T=0;

	T = 10;
	for(test_case=1; test_case<=T; ++test_case)
	{
		int count, horizon = 0;
		int height[1000] = {0};
		
		cin >> horizon;
		count = 0;
		//cout << "horizon:" << horizon << " ";
		for(int i = 0; i < horizon; i++)
		{
			cin >> height[i];
		}
		
		for(int i = 2; i < horizon - 2; i++)
		{
			int a = 0;
			a = max(height[i-2], height[i-1]);
			a = max(a, height[i+1]);
			a = max(a, height[i+2]);
			
			if(height[i] > a)
			{
				count += height[i]-a;
				//cout << i << "count:" <<count << " ";
			}
		}
	
		cout << "#" << test_case << " " << count << "\n";
	}
	return 0;
}