#include <iostream>
//#include <math.h>
//#include <algorithm>

using namespace std;
char nxn[300][300];
int nxn_boom[300][300];
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

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
		//cout << N << "!!!";
		//test_case 값을 먼저 받음.
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				nxn[i][j] = '\0';
				while(nxn[i][j] != '*' && nxn[i][j] != '.')
				{
					scanf("%c", &nxn[i][j]);
				}
			}
		}
		int boom_cnt = 0;
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				if(nxn[i][j] == '*')
				{
					boom_cnt = 9;
				}
				else
				{
					for(int xx = 0; xx < 8; xx++)
					{
						int nx = i + dx[xx];
						int ny = j + dy[xx];
						
						
						//cout << i << "," << j << ":" << nx << "," << ny << "\n";
						if( (nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) )
						{
							//cout << "!";
							if(nxn[nx][ny] == '*')
							{
								cout << i << "." << j << ":" << nx << "." << ny << "\n";
								boom_cnt++;
							}
						}
					}
				}
				
				nxn_boom[i][j] = boom_cnt;
				boom_cnt = 0;
			}
		}
		
		#if 1
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				cout << nxn_boom[i][j] << " ";
			}
			cout << "\n";
		}
		#endif
		
		
		//cout << "#" << test_case << " " << round(sum) << "\n";
	}
	return 0;
}