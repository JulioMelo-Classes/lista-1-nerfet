/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int num;
    float numOut=0, numTotal=0;
    float num25=0, num50=0, num75=0, num100=0;

    while( cin >> num) {
        if(num>=0 && num<25){
            num25++;
        } 
        if(num>=25 && num <50){
            num50++;
        } 
        if(num>=50 && num <75){
            num75++;
        }
        if(num>=75 && num <100){
            num100++;
        }
        if(num<0 || num >=100){
            numOut++;
        }
    }

    numTotal = numOut + num25 + num50 + num75 + num100;

    cout << endl;
    cout << std::setprecision(4) << ((num25/numTotal)*100);
    cout << endl;
    cout << std::setprecision(4) << ((num50/numTotal)*100);
    cout << endl;
    cout << std::setprecision(4) << ((num75/numTotal)*100);
    cout << endl;
    cout << std::setprecision(4) << ((num100/numTotal)*100);
    cout << endl;
    cout << std::setprecision(4) << ((numOut/numTotal)*100);

    return 0;
}
