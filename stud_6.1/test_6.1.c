#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int c2(int n)
//{
//    return n > 1 ? n * (n - 1) / 2 : 0;
//}
//
//
//int distributeCandies(int n, int limit)
//{
//    return c2(n + 2) - 3 * c2(n - limit + 1) + 3 * c2(n - 2 * limit) - c2(n - 3 * limit - 1);
//}
//
//int main()
//{ 
//    int n = 0;
//    int limit = 0;
//
//    scanf("%d,%d", &n, &limit);
//    int ret = distributeCandies(n, limit);
//    printf("%d", ret);
//    return 0;
//}

// ��������� C(n, 2)
//int c2(int n)
//{
//    return n > 1 ? n * (n - 1) / 2 : 0;
//}
//
//// �����ǹ��ĺ���
//int distributeCandies(int n, int limit)
//{
//    int fullCycles = n / limit;  // ������������
//    int remaining = n % limit;  // ʣ����ǹ���
//    int result = 0;
//
//    // �����������ڵ��ǹ�����
//    for (int i = 0; i < fullCycles; i++) {
//        result += c2(limit + 1) + c2(limit);
//    }
//
//    // ����ʣ���ǹ�������
//    if (remaining > 0) {
//        result += c2(remaining + 1);
//    }
//
//    return result;
//}
//
//int main()
//{
//    int n = 0;
//    int limit = 0;
//
//    scanf("%d,%d", &n, &limit);
//    int ret = distributeCandies(n, limit);
//    printf("%d", ret);
//    return 0;
//}