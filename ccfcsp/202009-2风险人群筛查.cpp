#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct node{
	int x;
	int y;
	int flag;
}s[1005];

int main(){
	int n,k,t,xl,yd,xr,yu;
	cin >> n >> k >> t >> xl >> yd >> xr >> yu;
	int pass = 0, stay = 0, passflag = 0, stayflag = 0,finalflag;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < t; j++){
			cin >> s[j].x >> s[j].y;
			if(s[j].x >= xl && s[j].x <= xr && s[j].y >= yd && s[j].y <= yu){
				s[j].flag = 1;
				passflag = 1;
				if(s[j].flag == 1){
					stayflag++;
					if(stayflag == k){
						finalflag = 1;
					}
				}
			}else{
				s[j].flag = 0;
				stayflag = 0;
			}	
		}
		if(passflag == 1){
			pass++;
			passflag = 0;
		}
		if(finalflag == 1){
			stay++;
			finalflag = 0;
		}
		stayflag = 0;
	}
	cout << pass << endl;
	cout << stay << endl;
}
