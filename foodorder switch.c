#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	//I am giving the order on my likes and dislikes, don't mind
	switch(n)
	{
		case 1:
			printf("Food item:Pasta\n");   //Pasta is my favourite of all these
			printf("Price:Rs 179\n");
			break;
		case 2:
		    printf("Food item:French Fries\n");
			printf("Price:Rs 99\n");
			break;
		case 3:
		    printf("Food item:Sandwich\n");
			printf("Price:Rs 149\n");
			break;
		case 4:
		    printf("Food item:Pizza\n");
			printf("Price:Rs 239\n");
			break;
		case 5:
		    printf("Food item:Burger\n");
			printf("Price:Rs 129\n");
			break;	
		default:
		    printf("Then choose your own food, don't ask me\n");			
	}
	return 0;
}
