#include <iostream>

using namespace std;
void mergesort(int arry[],int lo,int hi){
    int INFTY=101010110;
    if(hi<=lo){
        return;
    }
    int mid=lo+(hi-lo)/2;
    mergesort(arry,lo,mid);
    mergesort(arry,mid+1,hi);
    int b[mid +2],c[mid+2];
    for(int k=lo;k<=mid;k++){
        b[k-lo]=arry[k];
    }
    for(int k=mid+1;k<=hi;k++){
        c[k-mid-1]=arry [k];
    }
    b[mid-lo+1]=INFTY;c[hi-mid]=INFTY;

    int i=0,j=0;
    for(int k=lo;k<=hi;k++){
        if(c[j]<b[i]){
            arry[k]=c[j++];
        }else{
            arry[k]=b[i++];
        }
    }
}

int main()
{
    int arry[10]={12,13,14,34,35,67,8,90,23,68};
    int n=10,hi=n-1,lo=0;
    mergesort(arry,lo,hi);
    for(int i=0;i<10;i++){
        cout<<arry[i]<<" ";
    }
    return 0;
}
