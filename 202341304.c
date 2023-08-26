#include <stdio.h>
int len = 0;
char str[1050] = {0};
double init() {
	double ans = 0.0;
	int cnt = 0;
	char c = getchar();
	while (1) {
		if (c == 'e' || c == 'E')  break;
		if (c == '.') {
			c = getchar();
			continue;
		}
		str[++len] = c;
		c = getchar();
	}
	return ans; 
}
int read() {
	int res = 0, f = 1;
	char c;
	while (scanf("%c", &c) != EOF) {
		if (c == '\n')  break;
		if (c == '-' || c == '+') {
			if (c == '-')  f = -1;
			continue;
		}
		res = res * 10 + c - '0';
	}
	return res * f;
}
void calc(double n, int m) {
	if (m < 0) {
		m = -m;
		printf("0.");
		int i;
		for (i = 2; i <= m; ++i)  printf("0");	
		for (i = 1; i <= len; ++i)  printf("%c", str[i]);
		printf("\n");
		return ;
	} else {
		int i;
		for (i = 1; i<=m+1;++i) {
			if (str[i]==0)  printf("0");
			else  printf("%c",str[i]);
		}
		if (m+1>=len){
			return ;
		}
		printf(".");
		for (i = m + 2; i <= len; ++i)  printf("%c", str[i]);
		printf("\n");
		return ;
	}
}
int main() {
	double n;
	int m;
	n = init();
	m = read();
	calc(n, m);
	return 0;	
}

