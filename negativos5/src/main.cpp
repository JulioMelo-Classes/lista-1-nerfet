#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void) {
  int input;
  int negative = 0;

  for(int i = 0; i < SIZE; i++){
    cin >> input;
    if(input < 0){
      negative++;
    }
  }

  cout << negative;

  return 0;
}