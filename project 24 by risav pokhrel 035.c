#include<stdio.h>//for standard input and output
#include<math.h>//for mathematical operation
#include<stdlib.h>//for displaying the IP configuration
#include<windows.h>//for setting color
#include<conio.h>//for output and input
/*........................................*/
void SetColor(ForgC)//function for setting colour according to the integer value passed by main function
 {
 WORD wColor;//from windows.h function 

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
      //source:- google.com
 }
}
/*........................................*/
void add(num)//decelaration and working operation of the function
{
	int sum = 0;
    printf("press 0 to end addition/subtraction\n");
    printf("Use [-]{negative sign(minus)} for subtraction\n");
      printf("Enter a number: ");
    do
    {
        scanf("%d", &num);
        sum += num;
 
    }
	while(num != 0);
    printf("your answer is= %d\n\n",sum);
}
/*........................................*/
void multiply(num)//decelaration and working operation of the function	
{
    long multiply=1;
    printf("\t\t\t\tpress 1 to end MULTIPLICATION\n");
      printf("Enter the numbers: ");
    do
    {
        scanf("%ld", &num);
        multiply*= num;
    }
	while(num!= 1);
    printf("Your ANSWER is = %ld\n\n",multiply);
}
/*........................................*/
void bin(num)//decelaration and working operation of the function
{
    int dec = 0, i = 0,n,rem;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    n=num;
    while (n!= 0) //defining the mathematical formula using while loop
	{
        rem = n% 10;
        n= n/10;
        dec=dec+rem * pow(2, i);
        i++;}
    printf("\n%d in binary = %d in decimal\n\n", num, dec);
}
/*........................................*/
void deci(num)//decelaration and working operation of the function
 {
    int n,bin=0,rem,i=1;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    n=num;
    while (n != 0)//defining the mathematical formula using while loop
	 {
        rem = n% 2;
        n = n/2;
        bin = bin+rem*i;
        i =i*10;
    }
    printf("%d in decimal = %d in binary\n\n", num,bin);
}
/*........................................*/
unsigned long long int fact(num)//decelaration and working operation of the function
{
 unsigned long long int f=1;
int i;
for(i=1;i<=num;i++)//defining the mathematical formula using for loop
{
f=f*i; 
}
return f;
}
/*........................................*/
void facto(num)//decelaration and working operation of the function
{
	rere:
	printf("Enter The Number:\n");
	scanf("%d",&num);
	if(num<0){
	printf("WRONG INPUT?? enter the correct input\n\n");
    printf("Press enter for entering correct number\n\n");
    getch();
	system("cls");
	goto rere;//for re entering the value if the entered value is wrong
}
	else if(num==0)
	printf("The factorial of %d is= 1\n",num);//as factorial of 0 is 1..
	else
	printf("The factorial of %d is= %lld\n\n",num,fact(num));//calling the function for required operation
}
/*........................................*/
void percomb(num)//decelaration and working operation of the function
{
    int r,ncr;
	long long npr;
	start1:
	printf(" Enter value of n & r \n");
	scanf("%d %d",&num,&r);
	if(num<0||r<0){
     printf("WRONG INPUT?? enter the correct input\n\n");
    printf("Press enter for entering correct number\n\n");
    getch();
    system("cls");
	goto start1;//for re entering the value if the entered value is wrong
}
	if( num>= r) {
		//defining the mathematical formula  
		ncr= fact(num)/(fact(r)*fact(num-r));//calling the function for required operation
		//defining the mathematical formula  
		npr=fact(num)/fact(num-r);//calling the function for required operation
		printf( "Combination of [%dC%d] is %d\n", num,r,ncr);
		printf("Permutation of [%dP%d]  is %lld", num,r,npr);
	} else
	 {
		printf("WRONG INPUT?? enter the correct input\n");
		system("pause");
		system("cls");
		goto start1;//for re entering the value if the entered value is wrong
	}
}
/*........................................*/
void table(num)//decelaration and working operation of the function
{
	int i;
  printf("Enter an integer: ");
  scanf("%d", &num);
  for (i = 1; i <= 10; ++i) //defining the mathematical formula using for loop
  {
    printf("%d * %d = %d \n", num, i, num * i);
  }
}
/*.........................................*/
void matrix(num)//decelaration and working operation of the function
{
int m,p,q,i,j,k,sum = 0,a;
  int first[10][10],second[10][10], multiply[10][10];
   re:
   	system("cls");
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d",&m,&num);//entering the rows and column
   printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d",&p,&q);//entering the rows and column
   if ( num != p )// checking column to the row of 1st and 2nd matrix respectively
   {
    printf("Matrices with entered orders can't be multiplied with each other.\n\n\a");
    printf("\n choose enter to continue");
    getch();
    goto re;//for re entering the value of rows and coloumn if they didn't match according to theory
    }
    else
  {
  	system("cls");
  	 printf("\tEnter the elements of first matrix\n");
  for (i=0;i<m;i++ )//for storing the value of 1st matrix using for loop
  {
    for ( j = 0 ; j< num ; j++ )
    {
    	printf("Enter the element of %d x %d\n",i+1,j+1);
      scanf("%d", &first[i][j]);
    }
}
    printf("\n\tEnter the elements of second matrix\n\a");
    for ( i= 0 ; i < p ; i++ )//for storing the value of 1st matrix using for loop
    {
      for ( j =0;j<q;j++ )
      {
      	printf("Enter the element of %d x %d\n",i+1,j+1);
        scanf("%d", &second[i][j]);
    }
    }
    for (i=0;i<m;i++)//using for loop to multiply the matrix
    {
      for (j=0;j<q;j++)
      {
        for (k=0;k<p;k++ )
        {
          sum = sum + first[i][k]*second[k][j];//defining the mathematical formula..
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
    printf("\a\ncheck the matrix input\nif you want to change the input press[1]\nelse press[2] to continue");
    scanf("%d",&a);
    if(a==1)
      goto re;//for re entering the value if the entered value is wrong
      else
      {
     system("cls");
    printf("Product of entered matrices:-\n");
 
    for ( i = 0 ; i < m ; i++ )//using For loop for displaying the product of matrix
    {
      for ( j= 0 ; j< q ; j++ )
        printf("%d\t", multiply[i][j]);
 
      printf("\n");
    }
  }
}
}
/*.........................................*/
void trignometry()//decelaration and working operation of the function
{
int sign=1,x,i;
double sum=0,r;
printf("Enter the angle[theta(0)]:");
scanf("%d",&x);
r=(x*3.14f)/180; /* Converting to radian value */
for(i=1;i<=10;i+=2)
{
sum=sum+((pow(r,i)/fact(i))*sign);//from taylor series//defining the mathematical formula //calling the function  
sign= -sign;//by the formula of taylor series of infinite form
}
printf("sin(%d) = %lf\n",x,sum);
printf("cos(%d) = %lf\n",x,sqrt(1-pow(sum,2)));//defining the mathematical formula         //pythagoras law
printf("tan(%d) = %lf\n",x,sum/(sqrt(1-pow(sum,2))));//defining the mathematical formula  //pythagoras law
}
/*.........................................*/
void quadratic()//decelaration and working operation of the function
{
    int a,b,c;
    float Dis,A,B;
    printf("Enter three coefficient:\n");
    scanf("%d%d%d",&a,&b,&c);
    A=-b/(2*a);//defining the mathematical formula to calculate the sum of given number. 
    Dis=(pow(b,2))-4*a*c;//defining the mathematical formula to calculate the sum of given number. 

    if(Dis>=0)
    {
        B=sqrt(Dis)/(2*a);//defining the mathematical formula to calculate the sum of given number. 
        printf("the real roots are:%.2f\t%.2f\n\n",(A+B),(A-B));
    }
    else
    {
        B=sqrt(-Dis)/(2*a);//defining the mathematical formula to calculate the sum of given number. 
        printf("the imaginary roots are=%.2f+%.2fi\t%.2f-%.2fi\n\n",A,B,A,B);
    }
}
/*.........................................*/
void sum_up_to_n(num)//decelaration and working operation  of the function
{
    float sum;
    printf("Enter the value of N\n");
    scanf("%d",&num);
	sum = (num*(num+1))/2; //defining the mathematical formula to calculate the sum of given number. 
    printf("Sum of all %d natural number is = %.2f", num, sum);  
} 
/*.........................................*/
void even_odd(num)//decelaration and working operation of the function
{
 int i,odd_sum=0,even_sum=0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)//operating loop for required operation
    {
        if (i % 2 == 0)//checking the number whether the number is odd\even
            even_sum = even_sum + i;//adding the even number
        else
            odd_sum = odd_sum + i;//adding odd number
    }
    printf("Sum of all odd numbers from 1 to %d = %d\n",num,odd_sum);
    printf("Sum of all even numbers from 1 to %d = %d\n",num,even_sum);
}
/*.........................................*/
void value()
{
	printf("gravitational constant(G)=6.67408 x 10-11 m3 kg-1 s-2\n\n  Cosmological constant=2.036 x 10-35 s-2.\n\n ");
	printf("Planck's constant =6.62607004 x 10-34 m2 kg / s\n\nPlanck length (L)=1.616255 x 10-35m\n\n");
    printf("Planck mass=(M)=2.176434 x 10-8 kg\n\nPlanck time(T)=5.391247 x 10-44 s\n\nPlanck temperature(T)=1.416784 x 1032K");
    printf("the speed of light(c)=299 792 458 m/s\n\nElectric constant(epsilon)=8.85418782 x 10-12 m-3 kg-1 s4 A2\n\n");
    printf("the magnetic constant(muinot)=1.25663706 x 10-6 m kg s-2 A-2\n\npi=3.14159265359\n\nBoltzmann constant(k)=1.38064852 x 10-23 joule per kelvin");
    printf("\n\nelectron rest mass(me)=9.10938356 x 10-31 kilogram\n\nStefan-Boltzmann constants(sigma)=5.670367 x 10-8 watt per square metre per kelvin\n\n");
    printf("proton rest mass(mp)=1.672621898 x 10-27 kilogram\n\nneutron rest mass(mn)=1.674927471 x 10-27 kilogram\n\n");
    printf("Rydberg constant(R)=1.0973731568508 x 107 per metre\n\n");
    printf("\t\tSOURCE {https://www.britannica.com/science/physical-constant}");
}
int main()
{
	int num,a,b,i=1;//allocating the memory space 
	 SetColor(1); //calling function to set colour
 printf("\n\n\n\t\t~~~~~~~~~[WELCOME TO THE PROJECT-24]~~~~~~~~~\n\a");//welcome of thr program
 printf("\n\n\t\t\t~~~SCIENTIFIC CALCULATOR~~~\n\n\t");//name of the project
 system("pause");
 start://starting of the program
 system("cls");//to clear the screen
 	SetColor(6);//to change the color
 	//for displaying operation that can be done in the project
 printf("press[1]\nFor Addition/subtraction\n\npress[2]\nFor Multiplication\n\npress[3]\nFor Number conversion\n\n");
 printf("press[4]\nFor Factorial\n\npress[5]\nFor Permutation/Combination\n\npress[6]\nFor Multiplication Table\n\n");
 printf("press[7]\nFor Matrix Multiplication\n\npress[8]\nFor Trignometric Value\n\npress[9]\nFor Quadratic Equation\n\n");
 printf("press[10]\nFor displaying IP address/connection status\n\npress[11]\nFor Sum of series\n\npress[12]\nFor constant values\n\n");
 printf("press[0]\nTo end application\n");
 scanf("%d",&a);
 system("cls");//clearing the display screen 
 /*............*/ //using if else ladder to choose desire operation
 if (a==1)
    add(num);//calling function
/*............*/
else if(a==2)
    multiply(num);//calling function for required operation
/*............*/
else if(a==3)
    {
	printf("press[1]\nFor Binary to Decimal \n\npress[2]\nFor Decimal to Binary\n");
	scanf("%d",&b);//using if else ladder to choose desire operation
	system("cls");//clearing the display screen using command
/*............*/
	if(b==1)
	bin(num);//calling function for required operation
/*............*/
	if(b==2)
    deci(num);//calling function for required operation
    }
/*............*/
    else if(a==4)
    facto(num);//calling function for required operation
/*............*/
    else if(a==5)
    percomb(num);//calling function for required operation
/*............*/
    else if(a==6)
    table(num);//calling function for required operation
/*............*/
    else if(a==7)
    matrix(num);//calling function for required operation
/*............*/
    else if(a==8)
    trignometry(num);//calling function for required operation
/*............*/
    else if(a==9)
    quadratic(num);//calling function for required operation
/*............*/
    else if(a==10)
    system("C:\\Windows\\System32\\ipconfig");//using system command for displaying the ip configuration
    //source google
/*............*/
    else if(a==11)
    {
    	printf("press[1]\nFor Sum of Nth natural number\n\npress[2]\nFor Sum of Nth natural EVEN/ODD number\n\n");
    	printf("press[3]\nFor Sum of infinite natural number\n");
    	scanf("%d",&b);//using if else ladder to choose desire operation
        system("cls");//clearing the display screen 
    	if(b==1)
    	sum_up_to_n(num);//calling function for required operation
    /*............*/
    	if(b==2)
    	even_odd(num);//calling function for required operation
    /*............*/
    	if(b==3)
		{
    		SetColor(123);//calling function for required operation
    	printf("\n\tSum of infinite natural number is [-1/12]\n\t{~~By MATHEMATICIAN [RAMANAUJAN]~~}");
        }
	}
	/*............*/
	else if(a==12)
	 value(num);//calling function for required operation
	/*............*/
    else if(a==0)
    goto end;//to end the programm
    /*............*/
    printf("\n\n\t\t");//to change the line
     system("pause");
    /*............*/
   goto start;// to continue the programm 
   	/*............*/
   	end:
   SetColor(1);//setting colour by calling function
   printf("\n\n\t\t~~~~~~~~~Thanking Everyone~~~~~~~~~~~");
   printf("\n\n\t~~~~~Project By RISAV POKHREL[ROLL:077BEI035]~~~~~~~~~\n\n\t\t");//thanking the user
   system("pause");//to pause the program and waiting the user to continue the program
   return 0;//returning the integer value to the main function
}

























