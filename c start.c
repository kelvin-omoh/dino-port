// // #include<stdio.h>
// // #include<math.h>
// // //int add(int x,int y){
// // // int a = x+y;
// // // int m = x * y;
// // // printf("first num %d\n" ,x);
// // // printf("second num %d \n",y);
// // // printf("the sum of these numbers are %d",a);
// // //};
// // //}; 
// // //int pass(int a[],int k){

// // // for(int i = 0;i<4;i++){
// // //int a[] ={1,3,3,4,6};
// // //int k=+a[i];
// // //printf("%d",k);
// // // };
// // //};

// // //int main(){
// // //// pass(a[8], 8);
// // // //int x = 2;
// // // //if(x==2){
// // // // printf("hello world \n");
// // // //printf("\n kelvin \n");
// // // //}
// // // // float pi = 3.142;
// // // // int r = 2;
// // // // char name="kelvin";
// // // // printf("%s",name);
// // // // printf("%f", r * r * pi);
// // // //int arr[] = {10, 20, 30, 40, 50, 60};
// // // //printf("Total Number of Array Items = %d\n",arr);
// // // //printf("%d",arr);

// // //return 0;
// // //};




// // //int main(){
 
// // //int a,b,c;
// // //char greet[]="hello";
// // //a=1;
// // //b=2;
// // //c=a+b;
 
// // //printf("the sum is %d , %s world",c,greet);


// // //return 0;
// // //};



// // // #include <stdio.h>
// // // void bubblesort(int arr[], int size)
// // // {
// // // int i, j;
// // // for (i = 0;i < size; i++)
// // // {
// // // for (j = 0; j < size - i; j++)
// // // {
// // // if (arr[j] > arr[j+1])
// // // swap(&arr[j], &arr[j+1]);
 
// // // }
// // // }
// // // }
// // // void swap(int *a, int *b)
// // // {
// // // int temp;
// // // temp = *a;
// // // *a = *b;
// // // *b = temp;
// // // }
// // // int main()
// // // {
// // // int array[100], i, size;
// // // printf("How many numbers you want to sort:");
// // // scanf("%d", &size);
// // // printf("\nEnter %d numbers : ", size);
// // // for (i = 0; i < size; i++)
// // // scanf("%d", &array[i]);
// // // bubblesort(array, size);
// // // printf("\nSorted array is ");
 
// // // for (i = 0; i < size; i++)
// // // printf(" %d ", array[i]);
// // // return 0;
// // // }






// // int search(int arr[], int N, int x)
// // {
// // int i;
// // for (i = 0; i < N; i++)
// // if (arr[i] == x)
// // return i;
// // return -1;
// // }
 
// // // Driver's code
// // int main(void)
// // {
// // int arr[] = { 2, 3, 4, 10, 40 };
// // int x = 10;
// // int N = sizeof(arr) / sizeof(arr[0]);
 
// // // Function call
// // int result = search(arr, N, x);
// // (result == -1)
// // ? printf("Element is not present in array")
// // : printf("Element is present at index %d", result);
// // return 0;
// // }




// // #include<stdio.h>
// // int main(){


// //   char name[50];// create a char array to store the name
// //   printf("Enter Your Name: ");
// //   scanf("%s",name);// read the name from the user input
// //   printf("hello %s ",name);// print out the name

// //     return 0;
// // }




#include <stdio.h>

int main() {
//     char names[10][50]; // to store the names of 10 students
//     int roll_nums[10]; // to store the roll numbers of 10 students
//     int marks[10][4]; // to store the marks in each subject for 10 students
//     float total_marks = 400; // total marks in all subjects
//     float percentage_scores[10]; // to store the percentage score for each student
    
//     printf("Enter details of 10 students:\n");
//     for(int i = 0; i < 10; i++) {
//         printf("\n\nDetails of Student %d:\n", i+1);
        
//         printf("Enter student name: ");
//         scanf("%[^\n]", names[i]); // read the name
        
//         printf("Enter student roll number: ");
//         scanf("%d", &roll_nums[i]); // read the roll number
        
//         printf("Enter marks obtained by the student in each subject (out of 100):\n");
//         for(int j = 0; j < 4; j++) {
//             printf("Subject %d: ", j+1);
//             scanf("%d", &marks[i][j]); // read the marks
//         }
        
//         getchar(); // to consume the newline character left by scanf()
//     }
    
//     printf("\n\n"); // add extra lines for clarity
    
//     // calculate percentage score for each student
//     for(int i = 0; i < 10; i++) {
//         float total_marks_obtained = 0;
//         for(int j = 0; j < 4; j++) {
//             total_marks_obtained += marks[i][j]; // calculate the total marks obtained
//         }
//         percentage_scores[i] = (total_marks_obtained/total_marks) * 100; // calculate the percentage score
//     }
    
//     // display the result in tabular form
//     printf("--------------------------------------------------------\n");
//     printf("|                         RESULT                       |\n");
//     printf("--------------------------------------------------------\n");
//     printf("| %12s| %12s| %9s| %9s| %-9s| %9s| %6s|\n", "Name", "Row Number", "Subject 1", "Subject 2", "Subject 3", "Subject 4", "Total");
//     printf("|------------------------------------------------------|\n");
//     for(int i = 0; i < 10; i++) {
//         printf("| %-12s| %-12d| %-9d| %-9d| %-9d| %-9d| %-6.0f|\n", names[i], roll_nums[i], marks[i][0], marks[i][1], marks[i][2], marks[i][3], percentage_scores[i]);
//     }
//     printf("--------------------------------------------------------\n");

//     return 0;
// }

// #include <stdio.h>
// main( )
// {
    
#include <stdio.h>
#include <stdlib.h>

int main()
{
   


    int num1,num2,num3;
    num1=1;
    num2=2;
    num3=3;

    if(num1 > num2){
        printf("Num1 is The largest number");
    }
    else if(num2 > num3){
        printf("Num1 is The largest number");
    }
    else{
        printf("they are the same");
    }

    

    return 0;
}
