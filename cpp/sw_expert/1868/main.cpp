#include <iostream>
#include <queue>
//#include <math.h>
//#include <algorithm>

using namespace std;
char nxn[300][300];
int nxn_boom[300][300];
int nxn_click[300][300];
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int d4xy[4] = {1, 3, 4, 6};

int main(int argc, char** argv)
{
	int test_case;
	int T=0;
	//FILE *fp = fopen("input.txt", "rt");
	//fscanf(fp, "%d", &T);
	cin >> T;
	//T = 2;
	for(test_case=1; test_case<=T; ++test_case)
	{
		int N = 0;
		
		//fscanf(fp, "%d", &N);
		cin >> N;
		//test_case 값을 먼저 받음.
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				nxn[i][j] = '\0';
				while(nxn[i][j] != '*' && nxn[i][j] != '.')
				{
					//fscanf(fp, "%c", &nxn[i][j]);
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
								boom_cnt++;
							}
						}
					}
				}
				
				nxn_boom[i][j] = boom_cnt;
				boom_cnt = 0;
			}
		}
		
		#if 0
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				cout << nxn_boom[i][j] << " ";
			}
			cout << "\n";
		}
		#endif
		
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				if(nxn_boom[i][j] == 9)
				{
					boom_cnt = 9;
				}
				else //if(nxn_boom[i][j] != 0)
				{
					boom_cnt = 1;
					for(int xx = 0; xx < 8; xx++)
					{
						int nx = i + dx[xx];
						int ny = j + dy[xx];
						
						if( (nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) )
						{
							if(nxn_boom[nx][ny] == 0)
							{
								if(nxn_boom[i][j] == 0)
								{
									boom_cnt = 3;
									break;
								}
								else
								{
									boom_cnt = 0;
								}
							}
						}
					}
				}
				
				nxn_click[i][j] = boom_cnt;
				boom_cnt = 0;
			}
		}
		
		#if 0
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				cout << nxn_click[i][j] << " ";
			}
			cout << "\n";
		}
		#endif
		
		/*
		 * 3(0) 모여 있는 것들 중에서 일단 나는 +1 이고 나와붙어있는 3들은 전부 0으로 바꿔버리자
		*/
		queue<pair<int, int>> my_queue;
		boom_cnt = 0;
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				if(nxn_click[i][j] == 3)
				{
					boom_cnt++;
					my_queue.push(make_pair(i, j));
					nxn_click[i][j] = 1;
					while(!my_queue.empty())
					{
						
						int tmp_x = my_queue.front().first;
						int tmp_y = my_queue.front().second;
						my_queue.pop();
						for(int xx = 0; xx < 8; xx++)
						{
							//int nx = tmp_x + dx[d4xy[xx]];
							//int ny = tmp_y + dy[d4xy[xx]];
							int nx = tmp_x + dx[xx];
							int ny = tmp_y + dy[xx];
							if( (nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) )
							{
								if(nxn_click[nx][ny] == 3)
								{
									my_queue.push(make_pair(nx, ny));
									nxn_click[nx][ny] = 2;
								}
							}
						}
					}
				}
				else if(nxn_click[i][j] == 1)
				{
					boom_cnt++;
				}
			}
		}
		
		#if 0
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				cout << nxn_click[i][j] << " ";
			}
			cout << "\n";
		}
		#endif
		
		cout << "#" << test_case << " " << boom_cnt << "\n";	
		//cout << "#" << test_case << " " << round(sum) << "\n";
	}
	return 0;
}