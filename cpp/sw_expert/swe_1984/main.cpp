#include <iostream>
#include <math.h>

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
        float sum = 0;
		 int temp = 0;
        
        for(int i = 0; i < 10; i++)
        {
            cin >> temp;
            
            if(temp < min)
            {
                min = temp;
            }
            
            if(temp > max)
            {
                max = temp;
            }
            
            sum += temp;
        }
        
    	sum = ((sum - min - max)/8.0);
        
		cout << "#" << test_case << " " << round(sum) << "\n";
	}
	return 0;
}