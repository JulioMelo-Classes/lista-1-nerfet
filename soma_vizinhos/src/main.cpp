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

    while(cin >> num1){
      cin >> num2;

      if(num2 >0){
        for(int i=num1; i<num2+num1; i++){
          somaTotal += i;
        }
      }else if(num2 <0){
        for(int i=num1; i>num2+num1; i--){
          somaTotal += i;
        }
      }else{
        somaTotal = num1;
      }
    
      cout << somaTotal;
      cout << "\n";
      somaTotal=0;
    }

    return 0;
}
