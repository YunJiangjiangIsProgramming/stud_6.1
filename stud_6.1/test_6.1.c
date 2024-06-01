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

// 计算组合数 C(n, 2)
//int c2(int n)
//{
//    return n > 1 ? n * (n - 1) / 2 : 0;
//}
//
//// 分配糖果的函数
//int distributeCandies(int n, int limit)
//{
//    int fullCycles = n / limit;  // 完整的周期数
//    int remaining = n % limit;  // 剩余的糖果数
//    int result = 0;
//
//    // 计算完整周期的糖果数量
//    for (int i = 0; i < fullCycles; i++) {
//        result += c2(limit + 1) + c2(limit);
//    }
//
//    // 计算剩余糖果的数量
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