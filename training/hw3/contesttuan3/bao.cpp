#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d",&n);
	int check=0;
	for(int i=0;i<n/2;i++){
		if(nt(i) && nt(n-i)){
			printf("%d %d\n",i,n-i);
			check=1;
		}
	}
	if(check==0) printf("%d",n);
}