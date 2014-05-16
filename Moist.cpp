#include <iostream>
#include <string>
using namespace std;
int main() {
	freopen("C-small-practice-2.in", "r", stdin);
	freopen("C-output.txt", "w", stdout);
	string last, current;
	int case_ctr,i,t,n,result;
	
	cin >> t;
	case_ctr=0;
	while (t--) {
		cin >> n;
		cin.get();
		result=0;
		getline(cin, last);
		for (i=1;i<n;i++) {
			getline(cin, current);
			if (current < last)
				result++;
			else 
				last = current;
		}
		cout << "Case #" << ++case_ctr << ": " << result <<endl;
	}
	return 0;
} 
