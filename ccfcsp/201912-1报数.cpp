#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 0;
	int a[4]={0};
	while(n--){
		i++;
		//7的倍数、个位数带7、十位数带7、百位数带7 
		if((i%7)==0 || (i%10)==7 || (i%100/10)==7 || (i/100)==7 ){
			if(i%4!=0){
				a[i%4-1]++;
			}else{
				a[3]++;
			}
			n++;
		}
	}
	for(int i = 0; i < 4; i++){
		
		cout << a[i] << endl;
	}
}
