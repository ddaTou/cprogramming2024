#include<stdio.h>
#include<assert.h>

/*
Let F(0)=0��F(1)=1��and
F(n)=F(n-1)+F(n-2),for any n> 1.
Return F(n)mod p,where n<= 10^12.
*/




int fib(long long n,int p){

}

void TestCase1() {
  // Test Case 1: n:1234567 p= 17 result=16
  int res;
  res=fib(1234567,17);
  assert(res==16);
  printf("Passed TestCase1\n");
}

void TestCase2() {
  // Test Case 2: n=99988865 p=1235 fib= result=1141
  int res;
  res=fib(10000000000,1235);
  assert(res==1141);
  printf("Passed TestCase2\n");
}

void TestCase3() {
  // Test Case 3: n=100000000000 result=439
  int res;
  res=fib(100000000000,790);
  assert(res==439);
  printf("Passed TestCase3\n");
}
int main() {
  TestCase1();
  TestCase2();
  TestCase3();
  return 0;
}

