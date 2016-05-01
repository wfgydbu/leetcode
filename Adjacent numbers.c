#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Findnumber(int arrary[], int size, int target) {
	int low = 0;
	int high = size - 1;
    int middle = 0;
	
	while( low <= high){
		middle = low + ((high - low)>>1);
	
		if(target < arrary[middle]){
			high = middle - 1;
		}
		else if (target > arrary[middle]) {
			low = middle + 1;
		}
		else {
			return middle;
		}
	}

	return -1;
}

int main(){
	int arrary[] = {95, 96, 97, 98, 99, 100, 99, 99, 98, 99, 100, 100, 101, 102, 103, 104, 105, 104, 103, 103, 103, 102};
	int z = 98;
	int result = Findnumber(arrary, sizeof(arrary) / sizeof(int), z);
		
	printf("Result: %d\n", result);
	
	
	return 0;
}