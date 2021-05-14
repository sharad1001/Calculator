#include<stdio.h>
int a,b;
int main()
{
	int c=0;char response,y;	
	int sum();//function declaration
	int sub();//function declaration
	int multi();//function declaration
	float div();//function declaration
	void odd();//function declaration
	int squ();//function declaration
	int cube();//function declaration
	void arm();//function declaration
	do
	{
	printf("Enter 1 for sum,subtraction,multipication,divide\nEnter 2 for Armstrong,odd,square of number,cube of number = ");
	scanf("%d",&c);	
	if(c==1)
	{
		printf("Enter a number = ");
    	scanf("%d",&a);
	    printf("Enter a second number = ");
    	scanf("%d",&b);
		printf("Enter 1 for sum\n      2 for subtraction\n      3 for multipication\n      4 for divide = ");
		scanf("%d",&c);
		switch(c)
   	  {
		case 1:{
		          printf("Sum is = %d\n",sum());
				  break;
				}//sum function calling
	    case 2:{
		        printf("Subtract is = %d\n",sub());
				break;
			   }//subtract function calling
	    case 3:{
		        printf("Multiply is = %d\n",multi());
				break;
			   }//multiply function calling	
		case 4:{
		        printf("divison is = %f/n",div());
				break;
		       }	//divison function calling
	    delault:{
		         printf("you entered a wrong number");
				}
	  }
	
    }
	else if(c==2)
	{
		printf("Enter a number = ");
    	scanf("%d",&a);
    	printf("Enter 1 for Armstrong\n      2 for odd number\n      3 for square of number\n      4 for cube of number = ");
		scanf("%d",&c);
		switch(c)
	  {
		case 1:{
		        arm();
				break;
			   }//factorial function calling
	    case 2:{
				odd();
		        break;
	           }//odd function calling
	    case 3:{
		        printf("Square is = %d\n",squ());
				break;
			   }//square function calling	
		case 4:{
		        printf("Cube is = %d/n",cube());
	        	break;
		       }	//cube function calling

	  }
	}
	printf("Do you want to re-calculate,If yes enter'y',enter 'N' for no");
	scanf(" %c",&response);
    } while (response=='y');

	
 return 0;
}


int sum()
{
	int sum=0;
	sum=a+b;
	return sum;
}

int sub()
{
	int sub=0;
	sub=a-b;
	return sub;
}


int multi()
{
	int multi=0;
	multi=a*b;
	return multi;
}

float div()
{
	float div=0;
	div=a/b;
	return div;
}
int squ()
{
	int squ=0;
	squ=a*a;
	return squ;
}

int cube()
{
	int cube=0;
	cube=a*a*a;
	return cube;
}
void odd()
{
	if(a%2==0){printf("Entered number is Even Number");
	}
	else(a%2!=0);{printf("Entered number is odd number");
	}
}
void arm()
{
	int b,d;
	int c=0;
	d=a;
	while(d>0)
	{
		b=d%10;
		c=c+b*b*b;
		d=d/10;	
	}
	if(a==c)
	{
		printf("\nEntered number is an Armstrong Number\n");
	}
	else
	{
		printf("\nEntered number is not an Armstrong Number\n");
	}
}
