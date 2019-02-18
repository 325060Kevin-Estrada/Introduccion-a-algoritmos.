#include <iostream>

using namespace std;
                                                                        //Cost      //Times
int main()
{
    int arr[]={10,9,9,7,7,6,4,2};
    int i=0, SHORT_RES=0,j=0,n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Arreglo a ordenar: ";
    for(i; i<n; i++){                                                   //C1        // n
        cout<<arr[i]<<",";                                              //C2        // n-1
    }
    cout<<endl;
    for(i=1; i<n; i++){                                                 //C3        // n
        SHORT_RES=arr[i];                                               //C4        // n-1

        while(j>=0 && arr[j]>SHORT_RES){                                //C5        // n
            arr[j+1]=arr[j];
            j=j-1;                                                      //C6        // n-1
        }
    arr[j+1]= SHORT_RES;                                                //C7        // n-1
    }
    cout<<"Arreglo ordenado: ";
    for(i; i<n; i++){                                                   //C8        // n
        cout<<arr[i]<<",";                                              //C9        // n-1
    }
    return 0;
}

//No tengo mucha idea de lo que teniamos que hacer pero segun lo que yo entendi, eso es lo que pude hacer.
