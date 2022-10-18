#include<stdio.h>
#include<string.h>

int f(char *a,int start,int end){
	int i,k,is;
	is=0;
	for(i=start+1;i<=end;i++){
		for(k=i-1;k>=start;k--){
			if(a[k]==a[i]){
				is=1;
				break;
			}
			
		}
	}
	return is;
}

int main(void)
{
	char a[100];
	scanf("%s",a);
	int n=strlen(a);
	int i,k,m[100];
    //初始化
	for(i=0;i<100;i++){
		m[i]=0;
	}
	int j=1;
	int cnt=0;
	for(i=0;i<n;i++){
		for(k=1;i+k<n;k++){
			if(f(a,i,i+k)){
				m[i]=k;
				cnt++;
				j=0;
				break;
			}
		}
		if(j){
			m[i]=n-i;
			cnt++;
			break;
		}
	}
	int max=m[0];
	for(i=0;i<cnt;i++){
		if(max<m[i]){
			max=m[i];
		}
	}
	printf("%d",max);
}