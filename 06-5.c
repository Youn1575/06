#include <stdio.h>
	int factorial(int n); // 팩토리얼을 계산하는 함수 선언
	int combination(int n, int r); // 조합을 계산하는 함수 선언
	int get_integer(const char* message); // 정수 입력을 받는 함수 선언

int main(int argc, char* argv[]) {
    int n, r;
    
    n = get_integer("input n: "); // 사용자로부터 n 입력 받기
    r = get_integer("input r: "); // 사용자로부터 r 입력 받기

    int result = combination(n, r); // Combination을 계산
   
    printf("C(%d, %d) = %i\n", n, r, result); // 결과 출력

    return 0;
}

// 팩토리얼을 계산하는 함수 정의
int factorial(int n) {
    int res = 1;
    // n! 계산
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

// 조합을 계산하는 함수 정의
int combination(int n, int r) {
    int div1 = factorial(n); // 분자
    int div2 = factorial(n - r) * factorial(r); // 분모

    // 분모, 분자 나누기 연산
    return div1 / div2;
}

// 정수 입력을 받는 함수 정의
int get_integer(const char* message) {
    int input;
    printf("%s", message);
    // 사용자로부터 정수 입력 받기
    scanf("%d", &input);
    return input;
}

