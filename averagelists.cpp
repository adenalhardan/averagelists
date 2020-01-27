#include <iostream>
using namespace std;

int Min(void);

const int size = 6;

double places[size];

int main() {
	
	string A[size] = {"Princeton" , "Harvard", "Stanford", "MIT", "Booth", "NYU"};
	string B[size] = {"NYU", "Booth", "Stanford", "MIT", "Princeton", "Harvard"};

	string C[size];
	
	int min;
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if(A[i] == B[j]) {
				places[i] = double(i + j) / 2.0;
			}
		}
	}
	
	for(int i = 0; i < size; i++) {
		min = Min();
		C[i] = A[min];
		places[min] = double(size) * 2.0;
	}
	
	for(int i = 0; i < size; i++) {
		cout << C[i] << ", ";
	}
	
	return 0;
}

int Min() {
	int min = 0;
	
	for(int i = 1; i < size; i++) {
		if(places[i] < places[min]) {
			min = i;
		}
	}

	return min;
}

