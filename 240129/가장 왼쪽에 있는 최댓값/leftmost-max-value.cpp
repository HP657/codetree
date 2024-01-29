#include <iostream>
using namespace std;

int main() {
	int n;
	int a[n + 1];
	
	cin >> n;	
	
	for(int i = 0; i < n; i++)
	{
        cin >> a[i];
    }
	
	int prev_max_idx = n;
    
	while(true)
    {
		int max_idx = 0;
        
		for(int i = 1; i < prev_max_idx; i++)
        {
			if(a[i] > a[max_idx])
            {
				max_idx = i;
            }
        }
		
		cout << max_idx + 1 << " ";
		
		if(max_idx == 0)
		{
            break;
        }
		
		prev_max_idx = max_idx;
	}
	
	return 0;
}