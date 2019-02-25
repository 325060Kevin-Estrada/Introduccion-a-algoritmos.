#include<iostream>
using namespace std;

int main(){

	float A[8] = {1,6,3,9,4,5,9,9};                                         //C1        // 1
	cout << "This is the original array: ";                                 //C2        // 1
	for(int k = 0; k < 8; k++){                                             //C3        // n
		cout << A[k] << " ";                                                //C4        // n-1
	}

	for (int i = 0; i < (8-1); i++){                                        //C5        // n
		for(int j=0; j < (8-i-1); j++){                                     //C6        // n(n-1)
			if(A[i] > A[i+1]){                                              //C7        // ?
				int temp = A[i+1];                                          //C8        // n-1
				A[i+1] = A[i];                                              //C9        // n-1
				A[i] = temp;                                                //C10       // n-1
			}
		}
	}
	cout << "\nThis is the organized array: ";                              //C11       // 1
	for(int k = 0; k < 8; k++){                                             //C12       // n
		cout << A[k] << " ";                                                //C13       // n-1
	}

}
