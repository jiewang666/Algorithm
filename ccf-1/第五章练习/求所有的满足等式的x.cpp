#include <bits/stdc++.h>
using namespace std;

bool isOK(int a)
{
	int b[10] = {0};
	while(a){
		int c = a%10;
		a = a/10;
		b[c] = 1;
	}
	for(int i = 1; i <= 9; i++){
		if(b[i] == 0){
			return false;
		}
	}
	return true;
}

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(int i = sqrt(99999999); i <= sqrt(999999999); i++){
		if(i*i>=123456789&&i*i<=987654321){
			int t = i*i;
			if(isOK(t)){
				cout << i << " ";
			}
		}
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
	for(int i = sqrt(123456789); i <= sqrt(987654321); i++){
		int t = i*i;
		
		int b[10] = {0};
		bool flag = true;
		while(t){
			int c = t%10;
			t = t/10;
			b[c] = 1;
		}
		for(int j = 1; j <= 9; j++){
			if(b[j] == 0){
				flag = false;
			}
		}
		if(flag){
			cout << i << " ";
		}
	}
	return 0;
}




