#include <stdio.h>
#include <stdlib.h>

/* print a list of ints */
int show(int *x, int len)
{
    int i;
    for (i = 0; i < len; i++) {
        printf("%d%c", x[i], i == len - 1 ? '\n' : ' ');
    }
    return 1;
}


void swap (int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
/* next lexicographical permutation */
int next_lex_perm(int *a, int n)
{
    int k, l;

    /* 1. Find the largest index k such that a[k] < a[k + 1]. If no such
          index exists, the permutation is the last permutation.
				Khi ma tap hop gom cac phan tu co thu tu giam dan tu 0 den n-1 thi tap hop nay co gia tri lon nhat.
				Viec sap xep ket thuc o day
		*/
    for (k = n - 1; k && a[k - 1] >= a[k]; k--);
    if (!k--) return 0;

    /* 2. Find the largest index l such that a[k] < a[l]. Since k + 1 is
       such an index, l is well defined

      Chay tu cuoi chuoi len dau
		*/
    for (l = n - 1; a[l] <= a[k]; l--);

    /* 3. Swap a[k] with a[l] */
    swap(&a[k], &a[l]);

    /* 4. Reverse the sequence from a[k + 1] to the end */
    for (k++, l = n - 1; l > k; l--, k++)
        swap(&a[k], &a[l]);
    return 1;
}

/*
x is array to be permuted
n is number of elements
*/
void permutate(int *x, int n)
{
    do
    {
      show(x, n);
    }
    while (next_lex_perm(x, n));
}


#define N 4

int main()
{
    int i, x[N];
    for (i = 0; i < N; i++) x[i] = i + 1;

    permutate(x, N);

    return 0;
}
