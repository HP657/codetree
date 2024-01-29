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
	
	while(true)
    {
		int max_idx = 0;
        
		for(int i = 1; i < n; i++)
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
		
		n = max_idx;
	}
	
	return 0;
}