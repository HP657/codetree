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
		int idx = 0;
		for(int i = 1; i < b; i++)
        {
            if(a[i] > a[idx])
            {
                idx = i;
            }
				
        }
			
		
		cout << idx + 1 << " ";
		
		if(idx == 0)
        {
            break;
        }
		
		n = idx;
	}
	
	return 0;
}