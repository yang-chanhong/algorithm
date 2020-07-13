#include <iostream>
#include <queue>
//#include <math.h>
//#include <algorithm>

using namespace std;
int map[16][16] = {0};
int visit[16][16] = {0};

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int search_route()
{
	queue<pair<int, int>> my_queue;
	my_queue.push(make_pair(1, 1));
	visit[1][1] = 1;
	
	while(!my_queue.empty())
	{
		int x = my_queue.front().first;
		int y = my_queue.front().second;
		my_queue.pop();
		
		for(int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if( (nx >= 0) && (nx < 16) && (ny >=0) && (ny < 16))
			{
				if(map[nx][ny] == 3)
				{
					visit[nx][ny] = 3;
					return 1;
				}
				
				if(visit[nx][ny] == 0)
				{
					visit[nx][ny] = 1;
					//cout << nx << " " << ny << ";";
					if(map[nx][ny] == 0)
					{
						visit[nx][ny] = 2;
						//cout << "(" << nx << "," << ny << ")" << " ";
						my_queue.push(make_pair(nx, ny));
					}
				}
			}
		}
	}
	return 0;
}

int main(int argc, char** argv)
{
	int test_case;
	int T=0;
	int index = 0;

	//cin >> T;

	T = 10;
	for(test_case=1; test_case<=T; ++test_case)
	{
		cin >> index;
		if(index == test_case)
		{
			//printf("good\n");
		}
		
		for(int i = 0;  i < 16; i++)
		{
			for(int j = 0; j < 16; j++)
			{
				visit[i][j] = 0;
				scanf("%1d", &map[i][j]);
			}
		}
		int tf = search_route();
		
		cout << "#" << test_case << " " << tf << "\n";
		
		//cout << "#" << test_case << " " << round(sum) << "\n";
	}
	return 0;
}