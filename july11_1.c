// #include <stdio.h>
// int main() {
//     int num1, num2;
//     printf("Enter num1 and num2\n");
//     scanf("%d %d", &num1, &num2); 
//     if (num1 > num2) {
//         printf("num1 is greater than num2: %d\n", num1);  
//     } else {
//         printf("num2 is greater than num1: %d\n", num2); 
//     }
//     return 0;
// }


//  #include<stdio.h>
//   int main(){
//     int num;
//     printf("enter number for check:\n");
//     scanf("%d",&num);
//     if(num%2==0){
//       printf("number is even");
//     }
//     else{
//       printf("number is odd");
//     }
//   return 0 ;
// }


// #include <stdio.h>
// int main() {
//     int num1, num2, result, choice;
//     printf("Enter num1 & num2: \n");
//     scanf("%d %d", &num1, &num2);

//     printf("1 - Addition, 2 - Subtraction, 3 - Multiplication, 4 - Division\n");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1:
//             result = num1 + num2;
//             printf("Addition of two numbers is: %d\n", result);
//             break;
//         case 2:
//             result = num1 - num2;
//             printf("Subtraction of two numbers is: %d\n", result);
//             break;
//         case 3:
//             result = num1 * num2;
//             printf("Multiplication of two numbers is: %d\n", result);
//             break;
//         case 4:
//             if (num2 != 0) {
//                 result = num1 / num2;
//                 printf("Division of two numbers is: %d\n", result);
//             } else {
//                 printf("Error: Division by zero is not allowed.\n");
//             }
//             break;
//         default:
//             printf("Please enter a valid choice.\n");
//             break;
//     }

//     return 0;
// }

//Loops

// #include <stdio.h>
// int main() {
//   int num=999;
//     for (int i = 1; i <=10; i++) {
//       printf("%d X %d =%d\n",num,i,num*i);//most imp line learn this//
//     }
//     return 0;
// }





// #include <stdio.h>

// int main() {
//     int num, reversed = 0, remainder;

//     // Prompt the user to enter a number
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // Reverse the digits of the number
//     while (num != 0) {
//         remainder = num % 10;          // Get the last digit
//         reversed = reversed * 10 + remainder; // Append the last digit to the reversed number
//         num /= 10;                     // Remove the last digit from the number
//     }

//     // Output the reversed number
//     printf("Reversed number: %d\n", reversed);

//     return 0;
// }

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of the digits
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        sum += remainder;     // Add the last digit to sum
        num /= 10;            // Remove the last digit from the number
    }

    // Output the sum of the digits
    printf("Sum of the digits: %d\n", sum);

    return 0;
}

