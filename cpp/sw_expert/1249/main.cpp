#include <iostream>
#include <queue>
//#include <math.h>
//#include <algorithm>

using namespace std;

int N = 0;
int arr[100][100] = {0};
int dist[100][100] = {0};


//위, 아래, 좌, 우
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void Min_dist()
{	
	queue<pair<int, int>> my_queue;
	my_queue.push(make_pair(0, 0));
	
	while(!my_queue.empty())
	{
		int x = my_queue.front().first;
		int y = my_queue.front().second;
		my_queue.pop();
		
		for(int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if( (nx < N) && (ny < N) && (nx >= 0) && (ny >= 0) )
			{
				int crt_dist = dist[x][y] + arr[nx][ny];
				//cout << i << "(" << nx << "," << ny << ")" << arr[nx][ny] << " " << dist[x][y] << " " << crt_dist << "\n";
				if(crt_dist < dist[nx][ny])
				{
					//cout << "!" << "\n";
					dist[nx][ny] = crt_dist;
					my_queue.push(make_pair(nx, ny));
				}
			}
		}
		//cout << "\n";
	}
	return;
}

int main(int argc, char** argv)
{
	int test_case;
	int T=0;

	cin >> T;

	//T = 1;
	for(test_case=1; test_case<=T; ++test_case)
	{
		// N : NxN 배열 
		cin >> N;
		
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				scanf("%1d", &arr[i][j]);
				dist[i][j] = 999999;
			}
		}

		//cout << "\n";
		/*
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				//cout << arr[i][j] << " ";
			}
			//cout << "\n";
		}*/
		//cout << "\n";

		dist[0][0] = 0;
		Min_dist();
		
		cout << "#" << test_case << " " << dist[N-1][N-1] << "\n";
		/*
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				cout << dist[i][j] << " ";
			}
			cout << "\n";
		}*/
		
		//cout << "#" << test_case << " " << round(sum) << "\n";
	}
	
	
	return 0;
}