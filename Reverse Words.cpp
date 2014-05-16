#include <iostream>
#include <string>
using namespace std;
string words;
int main() {
	freopen("B-large-practice.in", "r", stdin);
	freopen("out.txt", "w", stdout);
	int t, case_ctr;
	char c;
	
	cin >> t;
	case_ctr=0;
	cin.get();
	while (t--) {
		getline(cin, words);
		int i = 0, l = words.length()-1;
		while (i<l) {
			c=words[i];
			words[i]=words[l];
			words[l]=c;
			i++;
			l--;
		}
		int j = 0;
		l = words.length();
		for (i=0;i<l;i++) {
			if (words[i]==' ') {
				int k = i-1;
				while (j<k) {
					c=words[j];
					words[j]=words[k];
					words[k]=c;
					j++;
					k--;
				}
				j=i+1;
			}
		}
		l=words.length()-1;
		while (j<l) {
			c=words[j];
			words[j]=words[l];
			words[l]=c;
			j++;
			l--;
		}
		cout << "Case #" << ++case_ctr << ": " << words << endl;
	}
	return 0;
}
