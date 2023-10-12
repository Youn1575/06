#include <stdio.h>
	int factorial(int n); // ���丮���� ����ϴ� �Լ� ����
	int combination(int n, int r); // ������ ����ϴ� �Լ� ����
	int get_integer(const char* message); // ���� �Է��� �޴� �Լ� ����

int main(int argc, char* argv[]) {
    int n, r;
    
    n = get_integer("input n: "); // ����ڷκ��� n �Է� �ޱ�
    r = get_integer("input r: "); // ����ڷκ��� r �Է� �ޱ�

    int result = combination(n, r); // Combination�� ���
   
    printf("C(%d, %d) = %i\n", n, r, result); // ��� ���

    return 0;
}

// ���丮���� ����ϴ� �Լ� ����
int factorial(int n) {
    int res = 1;
    // n! ���
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

// ������ ����ϴ� �Լ� ����
int combination(int n, int r) {
    int div1 = factorial(n); // ����
    int div2 = factorial(n - r) * factorial(r); // �и�

    // �и�, ���� ������ ����
    return div1 / div2;
}

// ���� �Է��� �޴� �Լ� ����
int get_integer(const char* message) {
    int input;
    printf("%s", message);
    // ����ڷκ��� ���� �Է� �ޱ�
    scanf("%d", &input);
    return input;
}

