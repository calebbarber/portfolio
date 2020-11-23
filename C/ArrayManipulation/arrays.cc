#include <stdio.h>

double getPositiveAverage(double arr[], int n) {
    double sum = 0.0;
    int count = 0;

    if (arr == NULL || n <= 0)
        return 0;

    for (int i = 0; i < n; i++)
		if (arr[i] > 0) {
			sum += arr[i];
            count++;
        }
    
    if (count == 0)
        return 0;
        
    double avg = sum / count;
    return avg;
}

int countRangeValues(double arr[], int n, double val) {
    double val1 = val - 0.5;
    double val2 = val + 0.5;
    int count = 0;
	
	//printf("val: %lf\n", val);
	//printf("val1: %lf\tval2: %lf\n", val1, val2);

    for (int i = 0; i < n; i++) {
        if (arr[i] >= val1 && arr[i] < val2) {
			//double ele = arr[i];
			//printf("%lf ", ele);
            count++;
		}
	}
	
    return count;
}

double getMaxAbsolute(double arr[], int n) {
	double max = arr[0];
    double absMax = arr[0];
    double here = 0.0;
	
    if (arr == NULL || n <= 0)
        return 0;

    for (int i = 0; i < n; i++) {
        here = arr[i];
        if (here < 0)
        {
            here = here * (-1.0);
			
			if (here == absMax) {
				if (here < 0)
					here *= -1;
				
				max = here;
				continue;
			}
			
			if (here > absMax) {
				absMax = here;
				max = here * -1;
				continue;
			}
			
        }
		
		if (here == absMax) {
			if (here < 0)
				here *= -1;
			
			max = here;
			continue;
		}
			
        if (here > absMax) {
            absMax = here;
            max = here;
        }
    }
	
    return max;
}

int countInverses(int arr[], int n) {
	int count = 0;
	
	if (arr == NULL || n <= 0)
		return 0;
	
	for (int i = 0; i < n; i++) {
		int inv = arr[i] * -1;
        //printf("Inverse of arr[%d]: %d\n", i, inv);
		
        if (arr[i] == 0)
            continue;

		for (int j = i; j < n; j++) {
			if (inv == arr[j]) {
				//printf("i: %d\t", i);
				//printf("j: %d\t", j);
				//printf("%d / %d\n", (inv * -1), inv);
				count++;
				//printf("Count: %d\n", count);
				arr[i] = 0;
				arr[j] = 0;
				//break;
				j = 1000;
            }
		}
	}
	
    //printf("Number of inverses: %d\n", count);
	return count;
}

int getMaxCount(double arr[], int n) {
    double maxAbsolute = 0.0;
    int count = 0;

    if (arr == NULL || n <= 0)
        return 0;

	maxAbsolute = getMaxAbsolute(arr, n);
    //printf("Max abs value: %lf\n", maxAbsolute);
    count = countRangeValues(arr, n, maxAbsolute);
    //printf("Number of occurrences: %d\n", count);
    return count;
}


int main() {
	double arr[] = {-1.0, -1.0, -1.0, -1.0, -1.0, -1.0};
	double max = getMaxAbsolute(arr, 6);
	printf("Max abs: %lf\n", max);
}
