#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std; 

struct node{
	int no;
	int dis;
}s[3];
 
bool cmp(node n1,node n2){
	return n1.dis < n2.dis;
}
 
int main(){
	int n,x,y;
	cin >> n >> x >> y;
	int sx[n],sy[n];
	for(int i = 0; i < 3; i++){
		cin >> sx[i] >> sy[i];
		s[i].no = i+1;
		s[i].dis = (sx[i] - x) * (sx[i] - x) + (sy[i] - y) * (sy[i] - y);
	}
	sort(s,s+3,cmp);
	for(int i = 3; i < n; i++){
		cin >> sx[i] >> sy[i];
		int camp;
		camp = (sx[i] - x) * (sx[i] - x) + (sy[i] - y) * (sy[i] - y);
		if(camp < s[0].dis){
			s[2].no = s[1].no;
			s[2].dis = s[1].dis;
			s[1].dis = s[0].dis;
			s[1].no = s[0].no;
			s[0].no = i+1;
			s[0].dis = camp;
		}else if (camp < s[1].dis){
			s[2].dis = s[1].dis;
			s[2].no = s[1].no;
			s[1].no = i+1;
			s[1].dis = camp;
		}else if(camp < s[2].dis){
			s[2].dis = camp;
			s[2].no = i+1;
		}
	}
	for(int i = 0; i < 3; i++){
	cout << s[i].no << endl;
	}
	return 0;
}	
