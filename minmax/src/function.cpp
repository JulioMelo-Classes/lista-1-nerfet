#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
/*
vou considerar 90% uma vez que a lógica estava correta mas havia um erro no operador
*/
std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.
    int min=0, max=0;
    int minPos=0, maxPos=0;
    if(n==1){ //um erro simples de teste estava =, deveria ser ==
        return std::make_pair(minPos, maxPos);
    }else if(n==0){
        minPos=-1;
        maxPos=-1;
        return std::make_pair(minPos, maxPos);
    }
    if(V[0] > V[1]){
        max=V[0];
        maxPos=0;
        min=V[1];
        minPos=1;
    }else{
        max=V[1];
        maxPos=1;
        min=V[0];
        minPos=0;
    }
    for(int i=2; i<n;i++){
        if(V[i]<min){
            min=V[i];
            minPos=i;
        }
        if(V[i]>=max){
            max=V[i];
            maxPos=i;
        }
    }

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return std::make_pair(minPos, maxPos);
}
