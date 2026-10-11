// Creator : Dipan Nama
// Roll No : IUT-820-10455
// Submission Date : 12-10-2020
// instructor : Bhabna De

#include <stdio.h>

int prefix(int i){
  printf("Output of prefix function\n");
  int j,k;
  j = ++i; // increment 1
  printf("j = %d\n",j); // 11
  k = ++i; // increment 1
  printf("k = %d\n",k); // 12

  return 0;
}

int postfix(int i){
  printf("Output of postfix function\n");
  int j,k;
  j = i++; // 
  printf("j = %d\n",j); // 10
  k = i++; // 
  printf("k = %d\n",k); // 11
  return 0;
}

int exception(int i){
  printf("The value of i is: %d %d %d\n", i, ++i, i++); // 10 11 11
  return 0;
}

int main(){
  int i; // Declering veriablr i
  // printf("Please enter a number");
  // scanf("%d", &i); // Taking input from the user
  i = 10;
  prefix(i); // 11 12
  postfix(i); // 10 11
  exception(i); // 10 11 11

  return 0;
}
