#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
float devision(float a,float b){
	float dev = a/b;
	return dev;
}
int main(){
	printf("(*) SYSTEM OF USING THIS CALUCULATER\n\n");
	printf("(*) ENTER THE CAfLUCULATION JUST LIKE THAT\n\n");
	printf("(*) 5+5 , 2-4 , 4*8, 2.3/4  \n\n");
	printf("(*) IF YOU WANT EXIT ENTER 'qq'\n\n");
	float x,y,answer_add,answer_subs,ansFinal;
	char E;	
	while(1){
		scanf("%f",&x);
		scanf("%c",&E);
		scanf("%f",&y);
	answer_add=x+y;
	answer_subs=x-y;
	float answer_mul=x*y;
	float answer_dev =devision(x,y);
		switch(E){
			case '+':printf("%f+%f=%f\n",x,y,answer_add);break;
			case '-':printf("%f-%f=%f\n",x,y,answer_subs);break;
			case '*':printf("%f*%f=%f\n",x,y,answer_mul);break;
			case '/':printf("%f/%f=%f\n",x,y,answer_dev);break;
			case 'q': exit(0);break;	
		scanf("%f",&x);
		scanf("%c",&E);
		scanf("%f",&y);
	answer_add=x+y;
	answer_subs=x-y;
	float answer_mul=x*y;			
		}
	}	
}

