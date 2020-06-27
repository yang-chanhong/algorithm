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
        int move_count = 0;
        int horizontal[100] = {0};
        cin >> move_count;
        
        for(int i = 0; i < 100; i++) 
        {
            cin >> horizontal[i];
        }
        
        for(int i = 0; i < move_count; i++)
        {
            sort(horizontal, horizontal+100);
            if( (horizontal[99] - horizontal[0]) > 1)
            {
                horizontal[99]--;
                horizontal[0]++;
            }
            else
            {
                break;
            }
        }
        sort(horizontal, horizontal+100);        
		cout << "#" << test_case << " " << (horizontal[99] - horizontal[0]) << "\n";
	}
	return 0;
}