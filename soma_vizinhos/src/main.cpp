/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
  int num1, num2;
  int somaTotal=0;
  
  cin >> num1;
  cin >> num2;

  if(num2 >=0){
    for(int i=num1; i<num2+num1; i++){
      somaTotal += i;
    }
  }else{
    for(int i=num1; i>num2+num1; i--){
      somaTotal += i;
    }
  }
  
  cout << somaTotal;
    return 0;
}
