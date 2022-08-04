#include<cstdio>`1`1`	
#include<cmath>
#include<cstring>

class Array {
	int len;
	int arr[100];
public:
	Array(int* arr1, int n) {
		for (int i = 0; i < n; ++i) {
			arr[i] = arr1[i];
		}
		len = n;
	}
	Array(const Array& obj) {
		len = obj.len;
		for (int i = 0; i < len; ++i) {
			arr[i] = obj.arr[i];
		}
	}

	void print() {
		for (int i = 0; i < len; ++i) {
			printf("%i ",arr[i]);
		}
	}
	int count_in_range(int a, int b) {
		int n = 0;
		for (int i = 0; i < len; ++i) {
			if (arr[i] >= a && arr[i] <= b)++n;
		}
		return n;
	}
};

int main() {
	int a[] = { 12, 10, -19, 6 };
	Array arr(a, 4);
	printf("%i", arr.count_in_range(1,19));
    Array arr1 = arr;

}