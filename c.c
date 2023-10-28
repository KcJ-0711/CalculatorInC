//C program to perform some basic functions  //Documentation section
#include<stdio.h>//Link section
int i,j,k;
int add(int x,int y);//Global Declaration
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int mod(int x,int y);
int sumindiv(int x);
int factorial(int x);
int multable(int x);
int reverse(int x);
int matadd(int A[3][3],int B[3][3]);
int matsub(int A[3][3],int B[3][3]);
int matmul(int A[3][3],int B[3][3]);
int transpose(int A[3][3]);
int lands(int A[5]);
int main()//main() 
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,choice,A[3][3],B[3][3],F[5],again;//Declaration part
	tryagain://Executable part
	printf("Enter your choice from the menu\n\t ***MENU***\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Remainder\n");
	printf(" 6.Sum of individual digits of a number\n 7.Factorial\n 8.Multiplication table\n");
	printf(" 9.Reverse of a number\n 10.Addition of 3x3 matrix\n 11.Subtraction of 3x3 matrix\n 12.Transpose of 3x3 matrix\n 13.Multiplication of 3x3 matrix\n 14.Largest and smallest of 5 numbers\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:c=add(a,b);
		printf("The sum of the numbers is %d\n",c);
		break;
		case 2:d=sub(a,b);
		printf("The difference of the numbers is %d\n",d);
		break;
		case 3:e=mul(a,b);
		printf("The product of the numbers is %d\n",e);
		break;
		case 4:f=div(a,b);
		printf("The quotient of the numbers is %d\n",f);
		break;
		case 5:g=mod(a,b);
		printf("The remainder of the numbers is %d\n",g);
		case 6:h=sumindiv(a);
		printf("The sum of the individual digits of the given number is %d\n",h);
		break;
		case 7:l=factorial(a);
		printf("The factorial of the given number is %d\n",l);
		break;
		case 8:m=multable(a);
		break;
		case 9:n=reverse(a);
        printf("The reverse of the given number is %d",n);
        break;
        case 10:matadd(A,B);
        break;
        case 11:matsub(A,B);
        break;
        case 13:matmul(A,B);
        break;
        case 12:transpose(A);
        break;
        case 14:lands(F);
        break;
	}
		printf("try again?\n press 1 for yes and 2 for no\n");
	scanf("%d",&again);
	if(again==1)
	{
		goto tryagain;
	}
	else
	{
		printf("Thank you");
	}
}
//User defined functions or sub program section
int add(int x,int y)
{
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	return(x+y);
}
int sub(int x,int y)
{
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	return(x-y);
}
int mul(int x,int y)
{
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	return(x*y);	
}
int div(int x,int y)
{
printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	return(x/y);	
}
int mod(int x,int y)
{
printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	return(x%y);	
}
int sumindiv(int x)
{
	printf("Enter the number\n");
	scanf("%d",&x);
	int digit,sum=0;
	while(x!=0)
	{
		digit=x%10;
		sum=sum+digit;
		x=x/10;
	}
	return(sum);
}
int factorial(int x)
{
	printf("Enter the number\n");
	scanf("%d",&x);
	int i,fact=1;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return(fact);
}
int multable(int x)
{
	printf("Enter the number\n");
	scanf("%d",&x);
	int i;
	for(i=1;i<=20;i++)
	{
		printf("%d*%d=%d\n",x,i,x*i);
	}
}
int reverse(int x)
{
	printf("Enter the number\n");
	scanf("%d",&x);
	int rev=0,digit;
	{
		while(x!=0)
		{
			digit=x%10;
			rev=rev*10+digit;
			x=x/10;
		}
	return(rev);
	}
}
int matadd(int A[3][3],int B[3][3])
{
	int C[3][3],i,j;
	printf("Enter the elements of first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the elements of second matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("The sum of matrices is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
int matsub(int A[3][3],int B[3][3])
{
	int C[3][3];
	printf("Enter the elements of first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the elements of second matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=A[i][j]-B[i][j];
		}
	}
	printf("The difference of matrices is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
int matmul(int A[3][3],int B[3][3])
{
	int C[3][3];
	printf("Enter the elements of first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter the elements of second matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=0;
			for(k=0;k<3;k++)
			{
				C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
			}
		}
	}
	printf("The product of matrices is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
int transpose(int A[3][3])
{
	int C[3][3];
	printf("Enter the elements of the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				C[i][j]=A[j][i];
		}
	}
	printf("The transpose of matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
int lands(int F[5])
{
	int large,small;
	printf("Enter any 5 different numbers\n");
	for(i=0;i<5;i++)
	{
	scanf("%d",&F[i]);
	}
	large=F[0];
	small=F[0];
	for(i=0;i<5;i++)
	{
		if(F[i]>large)
		large=F[i];
		if(F[i]<small)
		small=F[i];
	}
	printf("The largest number is %d\n",large);
	printf("The smallest number is %d\n",small);
}