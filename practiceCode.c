/*#include<stdio.h>
int main(){
    char a[1],b[2];
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    printf("%d",c);
    return 0;
}*/
/*#include <stdio.h>

int main(void) {
	// your code goes here
	int T,A,B;
	scanf("%d",&T);
	while(T--){
	    scanf("%d%d",&A,&B);
	    int sum=A+B;
	     printf("%d",sum);
	    T=T+1;
       
	}
	
	return 0;
}*/
/*
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d%d",&X,&Y);
	    int sum=X+Y;
	    if(sum >= 6){
	        printf("YES");
	    }
	    else{
	        printf("NO");
	    }
	    
	    
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&X);
	    printf("%d\n",2*X*5);
	}

	return 0;
}*/
/*
#include<stdio.h>
int main(){
	int T,X,Y;
	int temp;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&X,&Y);
		temp=Y-X;
		if(X<Y){
			printf("%d\n",(X+(temp*2)));
		}
		else{
			printf("%d\n",Y);
		}
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int T,A,B,C;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d",&A,&B,&C);
		if((A!=B)&&(B!=C)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}*/
/*#include<stdio.h>
int main(){
	int T,A;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&A);
		if(A%2==0 && A%7==0){
			printf("Alice\n");
		}
		else if(A%2!=0 && A%9==0)
		{
			printf("Bob\n");
		}
		else{
			printf("Charlie\n");
		}
	}
}*/
#include<stdio.h>
int main(){
	int T,N,X;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&N,&X);
		if(N*X >=10000){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}