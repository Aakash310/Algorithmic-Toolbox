#include <iostream>

int get_fibonacci_last_digit_Fast(int n) {
    int array[n+1];
    array[0]=0;
    array[1]=1;
    for( int i = 2 ; i <n+1 ; i++){
    	array[i] = array[i-1] + array[i-2];
	} 
	int num = array[n];
	return num % 10;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_Fast(n);
    std::cout << c << '\n';
    }
