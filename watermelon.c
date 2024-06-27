#include<stdio.h>
#include<conio.h>
int main(){
	int a=10;
	if(a%2!=0)
	{
		printf("no");
		
	}
	else{
		int b=a/2;
		if(b%2==0)
		{
			printf("%d %d",b,b);
		
		}
		else{
			printf("%d %d",b-1,b+1);
		}
	}
}
