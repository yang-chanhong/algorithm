#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T=0;
	int temp=0;

	cin >> T;

	for(test_case=1; test_case<=T; ++test_case)
	{
        int min = 10000;
        int max = 0;
        int sum = 0;
        int avg[10] = {0};
        
        for(int i = 0; i < 10; i++)
        {
            cin >> avg[i];
            
            if(avg[i] < min)
            {
                min = avg[i];
            }
            
            if(avg[i] > max)
            {
                max = avg[i];
            }
            
            sum += avg[i];
        }
        
        sum = sum - min - max;
        
        
        cout << min << " " << max << " " << sum << "\n";        
	}
	return 0;
}

