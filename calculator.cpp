#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int k=0,result=0;

int menu()
{
    system("color  A5");
    int ch;
    printf("\n1.Add\t\t2.Sub\t\t3.Mul\t\t4.Div\t\t5.GetRim\t\t6.Clear\t\t7.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    return(ch);
}

void Add()
{
    system("color  A3");

    Beep(500,1000);
    int a,b;
    if(k){
    	  printf("\nEnter a number: ");
   	  scanf("%d",&a);
   	  result+=a;
   	  printf("\nResult=%d",result);
         }
    else{
    	  printf("\nEnter two number: ");
   	  scanf("%d%d",&a,&b);
   	  result=a+b;
   	  printf("\nresult=%d",result);
        }
}

void Sub()
{
     	  system("color  A7");

    	  Beep(600,1000);
  	  int a,b;
  	  if(k){
   	  	printf("\nEnter a number: ");
   		scanf("%d",&a);
   		result-=a;
   		printf("\nResult=%d",result);
             }
          else{
   	       printf("\nEnter two number: ");
   	       scanf("%d%d",&a,&b);
   	       result=a-b;
   	       printf("\nresult=%d",result);
  	       }
}

void Mul()
{
     	  system("color  A9");
    	  Beep(300,1000);
  	  int a,b;
  	  if(k){
  	  	printf("\nEnter a number: ");
   	  	scanf("%d",&a);
   		result*=a;
   		printf("\nResult=%d",result);
               }
         else{
  	        printf("\nEnter two number: ");
   		scanf("%d%d",&a,&b);
   		result=a*b;
   		printf("\nresult=%d",result);
            }
}

void Div(){
        system("color  A2");
        Beep(700,1000);
  	int a,b;
  	if(k){
   	      printf("\nEnter a number: ");
   	      scanf("%d",&a);
   	      result/=a;
   	      printf("\nResult=%d",result);
           }
        else{
   	     printf("\nEnter two number: ");
   	     scanf("%d%d",&a,&b);
   	     result=a/b;
   	     printf("\nresult=%d",result);
           }
}
void Rim(){
     	   system("color  AE");
    	   Beep(400,1000);
  	   int a,b;
  	   if(k){
   	   	 printf("\nEnter a number: ");
   		 scanf("%d",&a);
   		 result%=a;
   		 printf("\nResult=%d",result);
               }
            else{
   	    	 printf("\nEnter two number: ");
   		 scanf("%d%d",&a,&b);
   		 result=a%b;
   		 printf("\nresult=%d",result);
  }
}
void Clear(){
     	     system("color  A3");
    	     Beep(800,1000);
	      printf("\nOld Data Cleared");
 	      result=0;
	       k=0;
	       }

int main(){
 system("color  A4");

 while(1){

  printf("\n\n  Old Result=%d",result);
  switch(menu()){
   case 1:
	Add();
	k=1;
	break;
   case 2:
	Sub();
	k=1;
	break;
   case 3:
	Mul();
	k=1;
	break;
    case 4:
	Div();
	k=1;
	break;
   case 5:
	Rim();
	k=1;
	break;
   case 6:
	 Clear();
	 break;
   case 7:
	 
	 exit(0);
   default:
	 printf("\nInvalid choice");
  }
  
  
 }
 return 0;
}

