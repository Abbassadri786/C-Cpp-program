# include<stdio.h>
# include<conio.h>
# include<math.h>
int main (){
   float a,b,c,r1,r2,d;
   printf("Enter the values of a b c:-");
   scanf("%f %f %f",&a,&b,&c);

   d= b*b - 4*a*c;
   if (d>0){
      r1 = -b+sqrt (d) / (2*a);
      r2 = -b-sqrt (d) / (2*a);
      printf("\nThe real roots = %0.1f %0.1f\n",r1,r2);
   }
   else if (d==0){
      r1 = -b/(2*a);
      r2 = -b/(2*a);
      printf ("\nRoots are equal =%0.1f %0.1f\n",r1,r2);
   }
   else{
      printf("\nRoots are imaginary\n");
   }
   return 0;
}
