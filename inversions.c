#include<stdio.h>

int merge(int a[], int, int, int);
int mergeSort(int a[], int, int);

int merge(int a[], int l, int m, int h)
{

        int li = l;
        int mi = m + 1;
        int i = l;
        int temp[100], k;
        int count = 0;

        while(li <= m && mi <= h)
        {
                if(a[li] <= a[mi])
                {
                        temp[i] = a[li];
                        li++;
                }
                else
                {
                        count += (m - li + 1);
                        temp[i] = a[mi];
                        mi++;
                }
                i++;
        }
        if(li > m)
        {
                for(k = mi; k <= h; k++)
                        temp[i] = a[k];
                        i++;
        }
        if(mi > h)
        {
                for(k = li; k<= m; k++)
                        temp[i] = a[k];
                        i++;
        }

        return count;

}

int mergeSort(int a[], int l, int h)
{
        int inv_count = 0;

        if(l < h)
        {
                int m = (l + h) / 2;

                inv_count += mergeSort(a, l, m);
                inv_count += mergeSort(a, m + 1, h);

                inv_count += merge(a, l, m, h);
        }

        return inv_count;
}

int main()
{

        int arr[4] = {8, 4, 2, 1};

        int result = mergeSort(arr, 0, 3);

        printf("%d ", result);

        return 0;
}
