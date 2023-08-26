#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于快速排序
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, m;
    int arr1[100], arr2[100];
    
    // 读取第一个集合
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr1[i]);
    }
    
    // 读取第二个集合
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &arr2[i]);
    }
    
    // 对两个集合进行排序
    qsort(arr1, n, sizeof(int), cmp);
    qsort(arr2, m, sizeof(int), cmp);
    
    // 从排序后的两个集合中去除重复元素
    int set1[100], set2[100], len1 = 0, len2 = 0;
    for (int i = 0; i < n; ++i) {
        if (i == 0 || arr1[i] != arr1[i-1]) {
            set1[len1++] = arr1[i];
        }
    }
    for (int i = 0; i < m; ++i) {
        if (i == 0 || arr2[i] != arr2[i-1]) {
            set2[len2++] = arr2[i];
        }
    }
    if (len1 != len2) {
        printf("0\n");
        for (int i = 0; i < len1; ++i) {
                printf("%d ", set1[i]);
            }
    } else {
        int flag = 1;
        for (int i = 0; i < len1; ++i) {
            if (set1[i] != set2[i]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("1\n");
            
            // 输出去重、排序后的第一个集合
            for (int i = 0; i < len1; ++i) {
                printf("%d ", set1[i]);
            }
            printf("\n");
        } else {
            printf("0\n");
            for (int i = 0; i < len1; ++i) {
                printf("%d ", set1[i]);
            }
        }
    }
    return 0;
}