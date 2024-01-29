#include <iostream>

#define MAX_N 1000

using namespace std;

int main() {
	int n;
	int a[MAX_N];
	
	cin >> n;	
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int prev_max_idx = n;
    
    // 첫 번째 원소가 최대가 되기 전까지 계속 반복합니다.
	while(true) {
        // 최대값 후보의 시작은 항상 첫 번째 원소입니다.
		int max_idx = 0;
        
        // 두 번째 원소부터 바로 직전 최대로 뽑힌
        // 원소 전까지 보면서 그 중 최대 index를 갱신합니다.
        // index를 오름차순으로 보기 때문에
        // 최댓값이 여러개인 경우 가장 왼쪽에 있는
        // 원소가 뽑히게 됩니다.
		for(int i = 1; i < prev_max_idx; i++)
			if(a[i] > a[max_idx])
				max_idx = i;
		
		cout << max_idx + 1 << " ";
		
        // 최대인 원소가 첫 번째 원소라면 종료합니다.
		if(max_idx == 0)
			break;
		
        // 바로 직전 최대 index를 갱신해줍니다.
		prev_max_idx = max_idx;
	}
	
	return 0;
}