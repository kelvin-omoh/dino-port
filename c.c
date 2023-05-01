// #include <stdio.h>
// int main() {
//     int a, b, num = 5;
//     printf("Number Pattern \n");
//     for (a = num; a >= 1; a--) {
//         for (b = 1; b <= a; b++) {
//             printf("%d", a);
//         }
//         printf("\n");
//         num--;
//     }
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   a=10;
   b=70;
   c=0;


   if( a > b && a > c  ){
    printf("A(%d)  is greater than the rest", a);
   }
   else if(  b > c && b > a ){
   printf("B(%d)  is greater than the rest", b);
   }
   else if(  c > a && c > b ){
    printf("C(%d)  is greater than the rest", c);
   }
   else {
    printf("all are the same");
   }
 
    // printf("Uzoma Ndoma 001\n");
 

    return 0;
}