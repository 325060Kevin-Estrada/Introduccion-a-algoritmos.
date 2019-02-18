#include<iostream>
using namespace std;

int main(){

	float A[8] = {1,6,3,9,4,5,9,9};
	cout << "This is the original array: ";
	for(int k = 0; k < 8; k++){
		cout << A[k] << " ";
	}

	for (int i = 0; i < (8-1); i++){
		for(int j=0; j < (8-i-1); j++){
			if(A[i] > A[i+1]){
				int temp = A[i+1];
				A[i+1] = A[i];
				A[i] = temp;
			}
		}
	}
	cout << "\nThis is the organized array: ";
	for(int k = 0; k < 8; k++){
		cout << A[k] << " ";
	}

}
