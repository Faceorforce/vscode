#include <stdio.h>

int search(int key,int a[],int len)
{
    int ret = -1;
    int left = 0;
    int right = len-1;
    while ( right >left)
    {
        int mid = (left+right)/2;
        if (a[mid] == key)
        {
            ret = mid;
            break;
        }else if ( a[mid]>key)
        {
            right = mid-1;
        }else
        {
            left = mid+1;
        } 
        
    }
    return ret; 
}

int main()
{
    int k = 10;
    int r = search(k, amount,sizeof(amount)/sizeof(amount[0]));

    return 0;
}