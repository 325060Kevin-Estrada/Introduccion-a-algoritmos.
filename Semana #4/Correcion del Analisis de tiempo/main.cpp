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
    cout<<endl;                                                         //C3        // 1
    for(i=1; i<n; i++){                                                 //C4        // n
        SHORT_RES=arr[i];                                               //C5        // n-1

        while(j>=0 && arr[j]>SHORT_RES){                                //C6        // Sumatoria tj
            arr[j+1]=arr[j];                                            //C7        // Sumatoria tj-1
            j=j-1;                                                      //C8        // Sumatoria tj-1
        }
    arr[j+1]= SHORT_RES;                                                //C7        // n-1
    }
    cout<<"Arreglo ordenado: ";                                         //C8        // 1
    for(i; i<n; i++){                                                   //C9        // n
        cout<<arr[i]<<",";                                              //C10       // n-1
    }
    return 0;
}

//No tengo mucha idea de lo que teniamos que hacer pero segun lo que yo entendi, eso es lo que pude hacer.
