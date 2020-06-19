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
		int height[5] = {0};
		int index = 2;
		
		cin >> horizon;
		count = 0;
		
		for(int i = 0; i < 5; i++)
		{
			cin >> height[i];
		}

		for(int i = 2; i < horizon-2; i++)
		{
			int max = 0;
			bool ismax = false;

			max = 0;
			for(int j = 0; j < 5; j++)
			{
				if(j != index)
				{
					if(max < height[j])
					{
						max = height[j];
					}
					
					if(height[index] <= height[j])
					{
						ismax = false;
						break;
					}
				}
				ismax = true;
			}
			
			if(ismax == true)
			{
				count += height[index]-max;
			}
			else
			{
			}
			
			if(index < 2)
			{
				if(i != horizon-3) cin >> height[index+3];
			}
			else{
				if(i != horizon-3) cin >> height[index-2];
			}

			index++;
			if(index > 4) index = 0;
		}
	
		cout << "#" << test_case << " " << count << "\n";
	}
	return 0;
}