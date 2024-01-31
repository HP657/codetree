#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	string b;
	string str1;
	string str2;
	
	cin >> a >> b;
	
	int len_a = a.length();
	int len_b = b.length();
	
	int idx1 = 0;
	int idx2 = 0;
	
	for(int i = 0; i < len_a; i++)
    {
        if(a[i] <= '9' && a[i] >= '0')
        {
            idx1++;
        }
		else
        {
            break;
        }
    }
		
	
	for(int i = 0; i < len_b; i++)
    {
        if(b[i] <= '9' && b[i] >= '0')
        {
            idx2++;
        }
		else
        {
            break;
        }
    }
		
	
	str1 = a.substr(0, idx1);
	
	str2 = b.substr(0, idx2);
	
	int str1_int = stoi(str1);
	int str2_int = stoi(str2);
	
	cout << str1_int + str2_int;
	
    return 0;
}