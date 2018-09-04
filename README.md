# c-sort

| 排序类别 | 排序方法 | 平均时间 | 最坏情形 | 稳定性 | 辅助空间 | 备注 |
| :------: | :------: | :------: | :------: | :-----:| :------: | :--: |
| 交换 | [冒泡排序](./bubble_sort.c) | O(n^2) | O(n^2) | 稳定| O(1) | n小时较好 |
| 交换 | [快速排序](https://github.com/zhangwang19961004/c-sort/quick_sort.c) | O(nlogn) | O(n^2) | 不稳定| O(logn) | n大时较好 基本有序反而不好 |
| 选择 | [选择排序](https://github.com/zhangwang19961004/c-sort/select_sort.c) | O(n^2) | O(n^2) | 不稳定| O(1) | n小时较好 |
| 选择 | [堆排序](https://github.com/zhangwang19961004/c-sort/heap_sort.c) | O(nlogn) | O(nlogn) | 不稳定| O(1) | n大时较好 |
| 插入 | [插入排序](https://github.com/zhangwang19961004/c-sort/insert_sort.c) | O(n^2) | O(n^2) | 稳定| O(1) | 大部分已有序时较好 |
| 插入 | [希尔排序](https://github.com/zhangwang19961004/c-sort/shell_sort.c) | O(nlogn) | O(ns) 1<s<2 | 不稳定| O(1) | s是所选分组 |
| 基数 | [基数排序](https://github.com/zhangwang19961004/c-sort/radix_sort.c) | O(logRB) | O(logRB) | 稳定| O(n) | B是真数(0-9) R是基数(个十百) |
| 归并 | [归并排序](https://github.com/zhangwang19961004/c-sort/merge_sort.c) | O(nlogn) | O(nlogn)) | 稳定| O(n) | n大时较好 |
