//this is a challenge programe that includes 
//a number is called a spy number, if the sum and product of its digits are equal. for example, 123 is a spy number, as the sum of its digits is 6(1+2+3) which is equal to the product of its digits : 6 (1*2*3)

#include<stdio.h>
void
main ()
{				/*
				   printf("enter a number that includes 3 digits : ");
				   int input1[3];
				   int x,y;
				   for(x=0;x<3;x++)
				   {
				   scanf("%d",&input1[x]);
				   }
				   printf("the number you entered is : ");
				   for(y=0;y<3;y++)
				   {
				   printf("%d",input1[y]);
				   }
				 */
  printf ("enter a three digit number : ");
  int x1, x2, x3, y1, y2, inputY, inputNum;
  scanf ("%d", &inputNum);
  x1 = inputNum % 10;
  inputY = inputNum - x1;
  y1 = inputY / 10;
  x2 = y1 % 10;
  x3 = y1 / 10;

 /* printf ("the number you entered is \n");
  printf ("third num =%d\n", x1);
  printf ("second num =%d\n", x2);
  printf ("first num =%d\n", x3);*/
  printf("the full integer you entered is : %d, %d, %d ",x3,x2,x1);
  //order of numbers is x3,x2,x1
  // now check wether this is a spy number or not. 
  int add= x1+x2+x3;
  int product= x1*x2*x3;
  printf("\n\n");
  if(add==product)
  	printf("This is a spy number!!! \n");
  else
  	printf("This is not a spy number!!!\n");
}