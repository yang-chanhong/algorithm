#include <iostream>

using namespace std;

int ClapNum(int num)
{
	int tempnum;
	int cnt = 0;
	while(1)
	{

		tempnum = num/10;
		tempnum = tempnum*10;
		tempnum = num-tempnum;
		
		if( tempnum==3 || tempnum==6 || tempnum==9 )
		{
			cnt++;
		}
		num = num/10;
		if(num <= 0)
		{
			break;
		}
	}
	return cnt;
}

int main(int argc, char** argv)
{
	int test_case;
	int T=0;
	int temp=0;

	cin >> T;

	for(test_case=1; test_case<=T; ++test_case)
	{
		temp = ClapNum(test_case);
		if(temp==0)
		{
			cout << test_case << " ";
		}
		else
		{
			for(int i = 0; i < temp; i++)
			{
				cout << "-";
			}
			cout << " ";
		}
	}
	return 0;
}

