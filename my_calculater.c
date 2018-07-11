#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int devision(int a,int b){
	
}
int main(){
	printf("(*) SYSTEM OF USING THIS CALUCULATER\n\n");q
	printf("(*) ENTER THE CALUCULATION JUST LIKE THAT\n\n");
	printf("(*) 5+5 , 2-4 , 4*8\n\n");
	printf("(*) IF YOU WANT EXIT ENTER 'qq'\n\n");
	float x,y,answer_add,answer_subs,ansFinal;
	char E;	
	while(1){
		scanf("%f",&x);
		scanf("%c",&E);
		scanf("%f",&y);
	answer_add=x+y;
	answer_subs=x-y;
	int answer_mul=x*y;
		switch(E){
			case '+':printf("%f+%f=%f\n",x,y,answer_add);break;
			case '-':printf("%f-%f=%d\n",x,y,answer_subs);break;
			case '*':printf("%f*%f=%d\n",x,y,answer_mul);break;
			case 'q': exit(0);break;	
		scanf("%f",&x);
		scanf("%c",&E);
		scanf("%f",&y);
	answer_add=x+y;
	answer_subs=x-y;
	int answer_mul=x*y;			
		}
	}	
}

