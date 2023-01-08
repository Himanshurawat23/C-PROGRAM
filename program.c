[9:45 PM, 1/7/2023] Himanshu: Question 1-to take basic input and print output



#include <stdio.h>

int main()
{
    int i;
    float g;                       
    double c;
    printf("enter a integer\n");
    scanf("%d",&i);
    printf("enter a float value \n");
    scanf("%f",&g);
    printf("enter a double value \n");
    scanf("%lf",&c);
    printf("%d\n",i);
    printf("%f\n",g);
    printf("%lf\n",c);
    
}



Output -:
enter a integer
12
enter a float value 
12.23
enter a double value 
12.12
12
12.230000
12.120000

----------------------------------------------------------------------------------




Question 2-:accept two numbers from user and print the sum of the two numbers

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("entEr first number=%d \n",n1 );
    scanf("%d",&n1);
    printf("enter second number=%d \n",n2);
    scanf("%d",&n2);
    printf("the sum is%d",(n1+n2));
}
Output -:
entEr first number=
12
enter second number=
5
the sum is17


----------------------------------------------------------------------------------------------
Question 3-:to enter two numbers to perform the  function  of  all arithmetic operators

#include<stdio.h>
int main()
{
     int n1,n2;
    printf("enter first number=%d \n",n1 );
    scanf("%d",&n1);
    printf("enter second number=%d \n",n2);
    scanf("%d",&n2);
    printf("sum is=%d\n",(n1+n2));
    printf("substraction=%d\n",(n1-n2));
    printf("division is=%d\n",(n1/n2));
    printf("remainder is=%d\n",(n1%n2));
}

output-:
entEr first number=3575808 
12
enter second number=0 
2
sum is=14
substraction=10
division is=6
remainder is=0

------------------------------------------------------------------------------------------------

question 4-:write a program to convert days into years,weaks,days

#include<stdio.h>
int main()
{
    int n;
    printf("enter no of days=%d\n",n);
    scanf("%d",&n);
    int year=n/365;
    int d=n%365;
    int weaks=d/7;
    int days=d%7;
    
    printf(" no of years=%d\n",year);
    printf("no of  weaks=%d\n",weaks);
    printf("no of remianing days=%d\n",days);

}


output-:
enter no of days
401
 no of years=1
no of  weaks=5
no of remianing days=1
--------------------------------------------------------------------------------

question 5-:enter length and breadth of rrectangle and print is area
#include<stdio.h>
int main()
[9:45 PM, 1/7/2023] Himanshu: {
    int length,breadth;
    printf("enter length of rectangle=\n");
    scanf("%d",&length);
    printf("enter breadth of rectangle=\n");
    scanf("%d",&breadth);
    printf("area of ractangle=%d\n",(length*breadth));
}


output-:
enter length of rectangle=
5
enter breadth of rectangle=
6
area of ractangle=30
------------------------------------------------------------------------------------------
ouestion 6-:write a c program to find the poewer of any number


#include<stdio.h>
#include<math.h>
int main ()
{
    int n1,n2;
    printf("enter first number \n",n1);
    scanf("%d",&n1); 
    printf("enter second number \n",n2);
    scanf("%d",&n2);
    printf("power is=%f\n,pow(n1,n2));
    return 0;
}


output-:
enter first number 
4
enter second number 
2
power is=16.000000
------------------------------------------------------------------------------------------

question 7- to print the length  and breadth of rectangle and print its perimeter


#include<stdio.h>
int main()

{
    int length,breadth;
    printf("enter length of rectangle=\n");
    scanf("%d",&length);
    printf("enter breadth of rectangle=\n");
    scanf("%d",&breadth);
    printf("perimeter of rectangle=%d\n",(2*(length+breadth)));
}

output-:
enter length of rectangle=
5
enter breadth of rectangle=
6
perimeter of rectangle=22 
--------------------------------------------------------------------------

question 8-:to enter radius of circle and print diameter and area

#include <stdio.h>

int main()
{
    int  r;
    printf("enter the radius of the circle\n");
    scanf("%d",&r);
    
    
    printf("diamerter%d\n",(2*r));
    printf("area%f\n",(3.14*r*r));
    
    
}
----------------------------------------------------------------------------
question 9-:to enter distance in cm and convert it into kilometer and meter

#include <stdio.h>

int main()
{
    int len;
    printf("enter the lenght \n");
    scanf("%d",&len);
    int km=len/1000;
    int km1=len%1000;
     int m=len/100;
    int m2=len%100;
    
    
    
    printf("in meter=%d.%d\n",m,m2);
    printf("kilometer=%d.%d\n",km,km1);
    
    
}

output-:
enter the lenght in cm 
1124
in meter=11.24
kilometer=1.124
----------------------------------------------------------------------------------

question 10-:to enter temperature in celcius and convert into fahrenhite

#include <stdio.h>

int main()
{
    int  temp;
    printf("enter temperature in degree celcius \n");
    scanf("%d",&temp);
      double g=(temp*(9/5))+32;
      printf("temperature in degree  fahrenhite %.2f",g);

    
    
}

output-:
enter temperature in degree celcius 
0
temperature in degree  fahrenhite 32.00
------------------------------------------------------------------------------------
question 11-:to enter  temperature in fahrenhite and convert it into temperature



#include <stdio.h>

int main()
{
    int  temp;
    printf("enter temperature in degree fahrenhite \n");
    scanf("%d",&temp);
      double g=((5/9)*(temp-32));
      printf("temperature in degree  fahrenhite %.2f",g);

    
    
}

output-:
enter temperature in degree fahrenhite 
32
temperature in degree  fahrenhite 0.00
---------------------------------------------------------------------------------------
question 12-: to  input number and print its square root

#include <stdio.h>
#include<math.h>

int main()
{
    int  num;
    printf("enter a number \n");
    scanf("%d",&num);
    printf("square root=%f",sqrt(num));
    

    
    
}

output-:
enter a number 
16
square root=4.000000
----------------------------------------------------------------------------------------

question 13-:write a program to enter two angles of triangle and then  find the thor angle

#include <stdio.h>


int main()
{
    int a1,a2;
    printf("enter first angle\n");
    scanf("%d",&a1);
    printf("enter second angle\n");
    scanf("%d",&a2);
    int a3=180-(a1+a2);
    printf("third angle is =%d",a3);
}

output-:
enter first angle
44
enter second angle
67
third angle is =69
----------------------------------------------------------------------------------------------
ouestion 14-:to enter base and height of triangle and peint its area

#include <stdio.h>


int main()
{
    int base,height;
    printf("enter base of triangle\n");
    scanf("%d",&base);
    printf("enter height of triangle\n");
    scanf("%d",&height);
     double area=0.5*base*height;
    printf("third angle is =%f",area);
}

output-:
enter base of triangle
2
enter height of triangle
4
third angle is =4.000000
------------------------------------------------------------------------------------------
ouestion 15-:to calculate area of equilateral triangle

#include <stdio.h>


int main()
{
    int side;
    printf("enter side of triangle\n");
    scanf("%d",&side);
    
     double area=(1.732/4)*side*side;
    printf("third angle is =%f",area);
}

output-:
enter side of triangle
3      
third angle is =3.897000
---------------------------------------------------------------------------------------
question-16:enter marks in 5 subjects and calculte total average and percentage

int main()
{
    int s1,s2,s3,s4,s5;
    printf("marks of 1st subject\n");
    scanf("%d",&s1);
    printf("marks of 2nd subject\n");
    scanf("%d",&s2);
    printf("marks of 3rd subject\n");
    scanf("%d",&s3);
    printf("marks of 4th subject\n");
    scanf("%d",&s4);
    printf("marks of 5th subject\n");
    scanf("%d",&s5);
    int total=s1+s2+s3+s4+s5;
    double average=total/5;
      float per=(total/5);
     printf("total=%d\n",total);
     printf("average=%f\n",average);
     printf("percentage=%f\n",per);
    
}
output-:
marks of 1st subject
90 
marks of 2nd subject
90
marks of 3rd subject
90
marks of 4th subject
90
marks of 5th subject
90
total=450
average=90.000000
percentage=90.000000
-----------------------------------------------------------------------------------
question 17-:calculate simple interest

#include <stdio.h>

int main()
{
   float principal ,rate, timee;
   printf("enter principal value\n");
   scanf("%f",&principal);
   printf("enter rate\n");
   scanf("%f",&rate);
   printf("enter time\n");
   scanf("%f",&timee);
   printf("simple interest is=%f",(principal*rate*timee)/100);
}

output-:
enter principal value
500
enter rate
5
enter time
50  
simple interest is=1250.000000
-------------------------------------------------------------------------------------
question 18-: to find compound interest

#include <stdio.h>
#include<math.h>

int main()
{
   float principal ,rate, timee;
   printf("enter principal value\n");
   scanf("%f",&principal);
   printf("enter rate\n");
   scanf("%f",&rate);
   printf("enter time\n");
   scanf("%f",&timee);
    double ci=principal*(pow((1+(rate/100)),timee));
    printf("compound interest=%f",ci);
}
output-:
enter principal value
500
enter rate
4
enter time
3
compound interest=562.431938
------------------------------------------------------------------------------------------
question 19-:product of two float values

#include <stdio.h>
int main()
{  
    float a,b;
    printf("enter first float value\n");
    scanf("%f",&a);
    printf("enter second float value\n");
    scanf("%f",&b);
    printf("%f",a*b);


    return 0;

}
output-:
enter first float value
34.4
enter second float value
34.4
1183.360105
---------------------------------------------------------------------------------------------
queation 20-to print the ascii value of  alphabets

#include <stdio.h>
int main()
{  
    char e;
    printf("enter a character\n");
    scanf("%c",&e);
    printf("%c=%d",e,e);


}
output-:
enter a character
A
A=65
--------------------------------------------------------------------------
question 21-to print the increment decrement

#include <stdio.h>
int main()
{   int i;

     printf("enter a integer\n");

     scanf("%d",&i);

     int x=i++;
     int y=++i;
     int z=i--;
     int k=--i;
     printf("x=%d\n",x);
     printf("y=%d\n",y);
     printf("z=%d\n",z);
     printf("k=%d",k);

     return 0;

}
output-:
enter a integer
6
x=6
y=8
z=8
k=6
---------------------------------------------------------------------------
-
question 22-  use the size of the function
#include<stdio.h>
int main()
{
    int c;
    printf("enter a number\n");
    scanf("%d",&c);
    printf("%zu",sizeof(c));

}
output-:
4
---------------------------------------------------------------------------
question 23-:escape sequenece

#include<stdio.h>
int main()
{
    printf("\"c programming\"");
}
output-:
"c progrqmming"

---------------------------------------------------------------------------
question 24-:use of sizeof operator

#include<stdio.h>
int main()
{

    printf("%zu",sizeof("anand "));
}
output-:
7
---------------------------------------------------------------------------
question 25-find the maximum of two numbers 

int main()
{
    int n;
    int m;
       printf("enter  first number\n");
       scanf("%d",&n);
       printf("enter second number\n");

       if(n>m)
       printf("manimum = %d",n);
       else
        printf("manimum = %d",m);


}
output-:
enter  first number
5
enter second number
6
maximum =6
----------------------------------------------------------------------------------
qestion no 26 -findd maximum of two numbress using conditional operator
#include<stdio.h>
int main()
{
    int n;
    int m;
       printf("enter  first number\n");
       scanf("%d",&n);
       printf("enter second number\n");
         scanf("%d",&m);


         (n>m)?printf("maximum =%d",n):printf("maximum =%d",m);

}
output-:
enter  first number
5
enter second number
6
6
--------------------------------------------------------------------------------
question 27-find maximum of three numbers using conditional operator
#include<stdio.h>
int main()
{
    int n;
    int m;
    int k;
       printf("enter  first number\n");
       scanf("%d",&n);
       printf("enter second number\n");
       scanf("%d",&m);
       printf("enter third number");
       scanf("%d",&k);

        (n>m&&n>k)?printf("maximum =%d",n):m>k?printf("maximum =%d",m):printf("maximum =%d",k);

}
output-:
enter  first number
5
enter second number
6
enter third number7
maximum =7
---------------------------------------------------------------------------
question 28-to cherk weather the numeber id even or odd using conditional operator

#include<stdio.h>
int main()
{
    int n;
    
       printf("enter  first number\n");
       scanf("%d",&n);
      (n%2==0)?printf("even"):printf("odd");

}
output-:
enter  first number
5
odd
--------------------------------------------------------------
question 29-  chek weather the number is leap year or not using conditional operator
#include<stdio.h>
int main()
{
    int n;
    
       printf("enter  first number\n");
       scanf("%d",&n);
      ((n%4==0&&n%100!=0)||(n%400==0))?printf("leap year"):printf("not leap year");

}
output-:
enter  first number
5
not leap year
---------------------------------------------------------------
question 29- to chek weather the number is a alphabet  or not using conditional operator
#include<stdio.h>
int main()
{
    char  n;
    
       printf("enter  a alphabet\n");
       scanf("%c",&n);
      int c=n;
     ( (n>=65&&n<=90)||(n>=97&&n<=122))?printf("it is an alphabet"):printf("it is not a alphabet");

}
output-:
enter  a alphabet
a
it is an alphabet
-----------
enter  first number
4
it is not a alphabet
----------------------------------------------------------------------------------------------------------
question 30-write a c program to find maximum of two numbers
question 25-find the maximum of two numbers 

int main()
{
    int n;
    int m;
       printf("enter  first number\n");
       scanf("%d",&n);
       printf("enter second number\n");

       if(n>m)
       printf("manimum = %d",n);
       else
        printf("manimum = %d",m);


}
output-:
enter  first number
5
enter second number
6
maximum =6
------------------------------------------------------------------------
question 31- print the maximu of three numbers
#include<stdio.h>
int main()
{
    int n;
    int m;
    int k;
    int c=0;
       printf("enter  first number\n");
       scanf("%d",&n);
       printf("enter second number\n");
       scanf("%d",&m);
       printf("enter third number\n");
       scanf("%d",&k);
       if(n>m)
       c=n;
       if(m>n)
       c=m;
       if(k>c)
       c=k;

       printf("maximum =%d",c);


        

}
output-:
enter  first number
5
enter second number
6
enter third number
7
maximum =7
--------------------------------------------------------------------
question 32 - to print weather the number is positive  or negative or zero 
#include<stdio.h>
int main()
{
    int n;
   
    int c=0;
       printf("enter  a number\n");
       scanf("%d",&n);
      if(n>0)
      printf("positive");

      if(n<0)
      printf("negative ");
      if(n==0)
      printf("zero");


        

}
output-:
enter  a number
5
positive
------------------
enter  a number
-1
negative
----------------------------------------------------------------------------------------------------
question 33- to find weather a number is divisible by 5 and 11 ot not

#include<stdio.h>
int main()
{
    int n;
    
       printf("enter  a number\n");
       scanf("%d",&n);
    if(n%5==0&&n%11==0)
    printf("divisible");
    else
    printf("not divisible");


        

}
output-:
enter  a number
55
divisible
-------------------
enter  a number
5
not divisible
---------------------------------------------------------------------
question 34-to print weather it is even or odd
#include<stdio.h>
int main()
{
    int n;
    
       printf("enter  a number\n");
       scanf("%d",&n);
    if(n%2==0)
    printf("even ");
    else
    printf("odd");


        

}
output-:
enter  a number
5
odd
---------------------------------------------------------------------
ouestion 35-  to find weather it is leap year or not
#include<stdio.h>
int main()
{
    int n;
    
       printf("enter  a number\n");
       scanf("%d",&n);
    if((n%4==0&&n%100!=0)||n%400==0)
    printf("leap year ");
    else
    printf("not leap year");


        

}
output-:
enter  a number
2000
leap year
-----------------
enter  a number
5
not leap year
-----------------------------------------------------
question 36- weather it is a aplabet or not
#include<stdio.h>
int main()
{
    char a;
    
       printf("enter  a alphabet\n");
       scanf("%ca",&a);
       int n=a;
    if((n>=65&&n<=90)||(n>=97&&n<=122))
    printf("alphabet ");
    else
    printf("not alphabet");


        

}
output-:
enter  a alphabet
a
alphabet
-------------------------------------------------------------
question 37-chek vowel or consonanats
#include<stdio.h>
int main()
{
    char a;
    
       printf("enter  a alphabet\n");
       scanf("%ca",&a);
       
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='u')
    printf("vowel ");
    else
    printf("constant");


        

}
output-:
enter  a alphabet
A
vowel
--
enter  a alphabet
B
constant
--------------------------------------------------------------------------
question 38- weather it is alphabet ,interger or special character
#include<stdio.h>
int main()
{
    char c;
    
       printf("enter  a alphabet\n");
       scanf("%c",&c);
       int n =c;
       
    if((n>=65&&n<=90)||(n>=97&&n<=122))   
    printf("alphabet");

    else if(n>=48&&n<=57)
    printf("integer");

    else
    printf("special character");



        

}
output-:nter  a alphabet
A
alphabet
------
enter  a alphabet
1
integer
-------------
enter  a alphabet
#
special character
-------------------------------------------------------------------------------
question 39 to print teh days of weak nam e using swith case


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:printf("sunday");
        break;
        case 2:printf("monday");
        break;
        case 3:printf("tuesday");
        break;
        case 4:printf("wednesday");
        break;
        case 5:printf("thursday");
        break;
        case 6:printf("friday");
        break;
        case 7:printf("saturday");
        break;
    }
}
----------------------------------------------------------------------------------
question 40 - to print the number od days in the specidfic month
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
printf("no of days in the month ");
    switch(n){
        case 1:printf("31");
        break;
        case 3:printf("31");
        break;
        case 5:printf("31");
        break;
        case 7:printf("31");
        break;
        case 8:printf("31");
        break;
        case 10:printf("31");
        break;
        case 12:printf("31");
        break;
        case 2:printf("28");
        break;
        case 4:printf("30");
        break;
        case 6:printf("30");
        break;
        case 9:printf("30");
        break;
        case 11:printf("30");
        break;
    }}

output-:
1
no of days in the month 31
------------------------------------------------------------
ouestion 41-:to chek alphabet or vowel
#include <stdio.h>
int main(){
    char n;
    printf("enter alphabet\n");
        scanf("%c",&n);

    switch(n){
        case 'a':printf("vowel");
        break;
        case 'e':printf("vowel");
        break;
        case 'i':printf("vowel");
        break;
        case 'o':printf("vowel");
        break;
        case 'u':printf("vowel");
        break;
        case 'A':printf("vowel");
        break;
        case 'E':printf("vowel");
        break;
        case 'I':printf("vowel");
        break;
        case 'O':printf("vowel");
        break;
        case 'U':printf("vowel");
        break;

        default:
        printf("constant");
        break;
    }}
output-:
enter alphabet
A
vowel
--------------------------------------------------------------------------

question 42- to create simple calculator

#include <stdio.h>
int main(){
    int a,b,n;
    printf("enter 1 for addition,,,, 2 for subtraction,,,,3 for multiplication,,,,,4 for division,,,,,,,,5 for mod");
    scanf("%d%d%d",&a,&b,&n);
        switch(n){
      case 1:printf("%d",a+b);
      break;
      case 2:printf("%d",a-b);
      break;
      case 3:printf("%d",a*b);
      break;
      case 4:printf("%d",a/b);
      break;
      case 5:printf("%d",a%b);
      break;
      default:printf("zero");
    }}
-----------------------------------------------------------------------------------

question 43 - to find maximum betweeen two numbers
#include <stdio.h>
int main(){
    int a,b,n;
    scanf("%d%d",&a,&b);
    n=a>b;
    switch(n){
      case 1:printf("%d",a);
      break;
      case 0:printf("%d",b);
      break;
    }}
---------------------------------------------------------------

question 44- to find even or odd
#include <stdio.h>
int main(){
    int a,n;
    scanf("%d",&a);
    n=a%2==0;
    switch(n){
      case 1:printf("even");
      break;
      case 0:printf("odd");
      break;
    }}
----------------------------------------------------

for loop questions
-----------------------
question -45 print no 1 to n
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    
}

----------------------------------------------------
question 46-:printf no from n to 1
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d ",i);
    }
    
}

------------------------------------------------------

ouestion 47- factorial
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        
    }
    printf("%d",f);
    
}
---------------------------------------------------------
question 48-:print table 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int f=1;
    for(int i=1;i<=10;i++)
    {
       printf("%d * %d=%d\n",n,i,n*i);
        
    }

    
}

----------------------------------------------------------
question 49- reverse the number
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int d=n;;
    int s=0;
    
    for(int i=1;i<=d;i++)
    {
        int r=n%10;
        s=(s*10)+r;
        n=n/10;
        if(n==0)
        break;
       
        
    }
    printf("%d",s);

    
}
--------------------------------------------------------------
question 50-print palindrome
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int d=n;;
    int s=0;
    
    for(int i=1;i<=d;i++)
    {
        int r=n%10;
        s=(s*10)+r;
        n=n/10;
        if(n==0)
        break;
       
        
    }
 if(s==d)
 printf("palindrome");
 else
 printf("not palindrome");

    
}
------------------------------------------------------------------------

question 51-armstrong
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int d=n;;
    int s=0;
    
    for(int i=1;i<=d;i++)
    {
        int r=n%10;
        s=s+(r*r*r);
        n=n/10;
        if(n==0)
        break;
       
        
    }
 if(s==d)
 printf("armstrong");
 else
 printf("not armstrong");

    
}
-----------------------------------------------

question 52-:strong number
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int d=n;;
    
    int f=1;
    int s=0;
    
    for(int i=1;i<=d;i++)
    {
        int r=n%10;
        
       for(int j=1;j<=r;j++)
       {
           
           f=f*j;
           
       }s=s+f;
       f=1;
       n=n/10;
        if(n==0)
        break;
       
        
    }
 if(s==d)
 printf("strong");
 else
 printf("not strong");

    
}

----------------------------------------------------------
qiestion 53-:perfect no 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int d=n;;
    
    
    int s=0;
    
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
        
    }
 if(s==d)
 printf("perfect");
 else
 printf("not perfect");

    
}
---------------------------------------
question 54-lcm
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int d;
    if(a>b)
    d=a;
    else
    d=b;
    int f=1;
    
    
    for(int i=2;i<=d;i++)
    {  
        if(a%i==0||b%i==0)
        {
          int j=i;
          f=f*i; 
          if(a%i==0)
          a=a/i;
          if(b%i==0)
          b=b/i; 
          if(a%i==0||b%i==0)
          i=i-1;

        }
       
    
        if(a==1&&b==1)
        break;
    }
    printf("%d",f);
    
}
---------------------------------------------------------------
question 55-hcf
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int d;
    if(a>b)
    d=a;
    else
    d=b;
    int f=1;
    
    
    for(int i=2;i<=d;i++)
    {  
        if(a%i==0&&b%i==0)
        {
          
          f=f*i; 
         
        }
         if(a%i==0)
          a=a/i;
          if(b%i==0)
          b=b/i; 
          if(a%i==0||b%i==0)
          i=i-1;

       
    
        if(a==1&&b==1)
        break;
    }
    printf("%d",f);
    
}

------------------------------------------------------------------------------------------------------