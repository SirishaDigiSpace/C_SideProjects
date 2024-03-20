#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

//Function declarations

int add();
int sub();
int mul();
int divide();
int sq();
int sqrt1();
void exit();


int main(){
	int op;
	do
	{

	printf("\t\t\t\t\t Select the operation to be performed by the calculator : ");
    printf("\n 1. Addition \n \n 2. Subtraction \n \n 3. Multiplication \n \n 4. Division \n \n 5. Square \n \n 6. Square root \n  \n 7. Exit \n  \n\t\t Please make a choice : ");
    scanf("%d", &op);

    switch (op){
    	case 1:
    	    add();
    	    break;

    	case 2:
    	    sub();
    	    break;

    	case 3:
    	    mul();
    	    break;

    	case 4:
    		divide();
    		break;

    	case 5:
    	    sq();
    	    break;

    	case 6:
    	    sqrt1();
    	    break;

    	case 7:
    	    exit(0);
    	    break;

    	default:
          	printf(" \n\t\t\t Something is wrong!  ");
          	break;

	}
	printf("\n\n\t ********************************************************************************************************************************* \n ");
   }while(op!=7);
   return 0;
}
    int add()
    {
    	int i, sum=0, num, f_num;
    	printf("\n \t\t\t How many numbers you want to add : ");
    	scanf("%d", &num);

    	for(i=1; i<=num; i++ ){
    		scanf("%d", &f_num);
    		sum=sum+f_num;
		}
		printf("\t\t\t Total sum of the numbers = %d ", sum);
		return 0;
	}

	int sub()
	{
		int n1, n2, res;
	    printf("\t\t\t The First number is : ");
	    scanf("%d", &n1);
	    printf("\t\t\t The Second number is : ");
	    scanf("%d", &n2);
	    res=n1-n2;
	    printf("\t\t\t The Subtraction of %d-%d is : %d ", n1, n2, res);

	}

	int mul(){
		int n1, n2, res;
		printf("\t\t\t The First number is : ");
	    scanf("%d", &n1);
	    printf("\t\t\t The Second number is : ");
	    scanf("%d", &n2);
	    res=n1*n2;
	    printf("\t\t\t The Multiplication of %d*%d is : %d ", n1, n2, res);


	}

	int divide(){
		int n1, n2, res;
		printf("\t\t\t The First number is : ");
		scanf(" %d", &n1);
		printf("\t\t\t The Second number is : ");
		scanf(" %d", &n2);
		if(n2 != 0)
                 printf("Result: %.2f", (float)n1 / n2);

              else
                 printf("Error! Division by zero not possible.");
        res=(float)n1 / n2;

	}

	int sq(){
		int n1, res;
		printf("\t\t\t Enter the number to get square : ");
		scanf("%d", &n1);
		res=n1*n1;
		printf("\n\t\t\t The square of %d is: %d", n1, res);

	}

	int sqrt1(){
		int n1;
		float res;
		printf("Enter a number to get the square root: ");
		scanf("%d", &n1);
		res=sqrt(n1);
		printf("\n The Square Root of %d is : %f",n1, res);

	}



