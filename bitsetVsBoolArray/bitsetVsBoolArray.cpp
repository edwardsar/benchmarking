#include <iostream>
#include <string>
#include <bitset>
#include <time.h>

const int TEN_THOUSAND = 10000;
const int ONE_HUNDRED_THOUSAND = 100000;
const int ONE_MILLION = 1000000;
const int TEN_MILLION = 10000000;

void benchmarkBitset(){
		clock_t startTime, endTime;
	
	std::bitset<ONE_MILLION> set;

	startTime = clock();
	for(int i=0;i<ONE_MILLION;i++){
		set[i] = 1;
	}
	endTime = clock();
	std::cout << "Bitset time elapsed: " << 
			((double)endTime - (double)startTime)/CLOCKS_PER_SEC 
			<< std::endl;
}

void benchmarkBoolArray(const int sizeOfArray){
	clock_t startTime, endTime;
	
	bool boolArray[sizeOfArray];

	startTime = clock();
	for(int i=0;i<sizeOfArray;i++){
		boolArray[i] = true;
	}
	endTime = clock();
	std::cout << "Bool array time elapsed: " << 
			((double)endTime - (double)startTime)/CLOCKS_PER_SEC 
			<< std::endl;
}

int main(void){
	benchmarkBitset();
	benchmarkBoolArray(ONE_MILLION);
	return 0;
}