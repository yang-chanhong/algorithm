#include <iostream>
//#include <math.h>
//#include <algorithm>

using namespace std;
char nxn[300][300];

int main(int argc, char** argv)
{
	int test_case;
	int T=0;

	cin >> T;

	T = 1;
	for(test_case=1; test_case<=T; ++test_case)
	{
		int N = 0;
		cin >> N;
		
		//test_case 값을 먼저 받음.
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				cin >> &nxn[i][j];
			}
		}
		
		//cout << "#" << test_case << " " << round(sum) << "\n";
	}
	return 0;
}