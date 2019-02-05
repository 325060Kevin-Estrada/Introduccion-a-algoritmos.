#include <iostream>

using namespace std;

int main()
{
    int arre[4][4]={{1,2,3,4},{1,6,1,3},{8,6,8},{3,4,5,6}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
                cout<<arre[i][j];
        }
        cout<<"\n";
    }
    cout<<"\nLa diagonal de tu matriz es: \n";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                cout<<arre[i][j]<<"\n";
            }
        }
    }
    return 0;
}
