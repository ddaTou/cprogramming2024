#include <stdio.h>
#include <assert.h>

// Given a specific date (year, month, day), this function
// and returns the total number of days that have passed
// since January 1st, Year 1.
// if date is illegal,return -1. 
int date_to_days(int year, int month, int day) {

}

void TestCase1() {
  // Test Case 1: 2016.2.29
  int days;
  days=date_to_days(2016,2,29);
  assert(days==736022);
  printf("Passed TestCase1\n");
}

void TestCase2() {
  // Test Case 1: 2017.2.29
  int days;
  days=date_to_days(2017,2,29);
  assert(days==-1);
  printf("Passed TestCase2\n");
}

void TestCase3() {
  // Test Case 3: 2024.10.12
  int days;
  days=date_to_days(2024,10,12);
  assert(days==739170);
  printf("Passed TestCase3\n");
}




int main() {
  TestCase1();
  TestCase2();
  TestCase3();
  return 0;
}
