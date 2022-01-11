#include <iostream>
#include<algorithm>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for(int i=1;i<N;i++){
        int k=i;
			while(k-1>=0&&d[k-1]<d[k]){
				swap(d[k-1],d[k]);
				k-=1;
			}
		cout << "Pass"<<" "<<i<<":";
		for(int i = 0; i < N; i++) cout << d[i] << " "; 
		cout << endl;
    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
