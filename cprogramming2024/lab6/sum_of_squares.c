#include <stdio.h>
#include <math.h>
#include <assert.h>
/* Given a positive integer n, write n as a sum of k squares,
where k <= 4, that is, n = a1^2 + ... + ak^2, making k 
as small as possible.
*/
void sum_of_squares(int n, int* k, int* list) {
  
}
void TestCase1() {
  // Test Case 1: 99999
  int k ;
  int list[4] ;
  sum_of_squares(99999, &k, list);
  assert(k == 4);
  int sumOfSquares = 0;
  for(int i = 0; i < k ; i++){
    sumOfSquares += list[i]*list[i];
  }
  assert(sumOfSquares == 99999);
  printf("Passed TestCase1\n");
}

void TestCase2() {
  // Test Case 1: 87352
  int k ;
  int list[4] ;
  sum_of_squares(87352, &k, list);
  assert(k == 3);
  int sumOfSquares = 0;
  for(int i = 0; i < k ; i++){
    sumOfSquares += list[i]*list[i];
  }
  assert(sumOfSquares == 87352);
  printf("Passed TestCase2\n");
}

void TestCase3() {
  // Test Case 3: 57
  int k ;
  int list[4] ;
  sum_of_squares(57, &k, list);
  assert(k == 3);
  int sumOfSquares = 0;
  for(int i = 0; i < k ; i++){
    sumOfSquares += list[i]*list[i];
  }
  assert(sumOfSquares == 57);
  printf("Passed TestCase3\n");
}

int main() {
  TestCase1();
  TestCase2();
  TestCase3();
  return 0;
}