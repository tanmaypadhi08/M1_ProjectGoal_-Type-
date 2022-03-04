/**
 * @file main.c
 * @author Tanmay Padhi
 * @brief main file
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int power();
int factorial(); 
int main() {
  
  int choice; 
  int n1,n2, ans=0;
  printf("Select the operation you want perform");
  printf("1.Additon\n 2.Subtraction\n 3.multplication \n 4.Division \n 5.Modules\n 6.Power\n 7.Factorial \n ");
  scanf("%d", &choice);


 switch (choice) {
/**
 * @brief This case is for addition function
 * 
 */
    case 1:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      
      ans = addition(n1,n2); 
      
      printf("answer=%d",ans);
      break;
/**
 * @brief This case is for subtraction operation
 * 
 */
    case 2:
     printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans=subtraction(n1,n2); 
      printf("answer=%d",ans);
      break;
/**
 * @brief This case is for multiplication operation
 * 
 */
    case 3:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
      ans = multiplication(n1,n2);  
      printf("answer=%d",ans);
      break;
/**
 * @brief This case is for division operation
 * 
 */
    case 4:
      printf("Enter two number");
      scanf("%d %d",&n1,&n2);
     ans = division(n1,n2);    
     printf("answer=%d",ans);

      break;
/**
 * @brief This case is for modulous operation
 * 
 */
    case 5: 
        printf("Enter two number");
        scanf("%d %d",&n1,&n2);
       ans= modulus(n1,n2);  
       printf("answer=%d",ans);
        break;
/**
 * @brief This case is for power operation
 * 
 */
    case 6: 
        printf("\nEnter two numbers to find the power \n");
        printf("number: ");
        scanf("%d",&n1);
 
        printf("power : ");
        scanf("%d",&n2);      
       ans= power(n1,n2);
          printf("answer=%d",ans);
        break;  
/**
 * @brief This case is for factorial operation
 * 
 */
    case 7: 
        printf("\nEnter a number to find factorial : ");
        scanf("%d",&n1);
        ans = factorial(n1); 
        printf("answer=%d",ans);
        break;  
    
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
