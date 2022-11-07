/*
任务描述
本关任务：实现归并排序，算法如下：
Procedure sort(A,low,high)
// 对数组A[low..high]排序
1   if high-low>0
2       mid=(low+high)/2
3       sort(A,low,mid)
4       sort(A,mid+1,high)
5       merge(A, low, mid, high)
        // merge实现时可以使用一个辅助数组
6   endif
过程sort(A,low,high)在给A[low..high]这一组数进行排序时，首先判别问题的规模是否为1，如果是的，则原问题是一个规模为1的问题，无需做任何处理。当问题规模超过1时，假设为n，则在过程sort的第3、4行分别利用递归对规模为n/2的子数组排好序，然后再通过调用merge将两个长度为n/2的有序数组合并形成一个长度为n的有序数组，即由两个规模为n/2的子问题的解答得到了规模为n的问题的解答。

编程要求
根据提示，在右侧编辑器补充代码，输入的第一个正整数n(<=100)表示元素数量，接下来是n个待排序整数，输出排序后的元素，数字之间用空格分隔

测试说明
平台会对你编写的代码进行测试：

测试输入：3 3 2 -1
预期输出：
-1 2 3

https://blog.csdn.net/weixin_54913371/article/details/119654906
*/
 #include<iostream>
using namespace std;

void merge(int A[],int low,int mid,int high){
    int temp[100]={0};
    int i,j,k;
    i=low,j=mid+1,k=0;
    while(i<=mid&&j<=high){
        if(A[i]<A[j]){
            temp[k++] = A[i++];
        }else{
            temp[k++] = A[j++];
        }
    }

    while(j<=high){
        temp[k] = A[j];
        k++;
        j++;
    }
    while(i<=mid){
        temp[k++] = A[i++];
        }
    
    for(int cont=0;cont<k;cont++){
        A[low++]=temp[cont];
    }
}
void merge_Sort(int A[],int n)
{
    for(int curr_scale=2;;curr_scale*=2){
        for(int j=0;j<n;j+=curr_scale){
            int left = j;
            int right;
            if(j+curr_scale-1<n)
                right = j+curr_scale-1;
            else
                right = n-1;
            int mid = (j + j + curr_scale - 1) / 2 < n? (j + j + curr_scale - 1) / 2 : n-1; 
            merge(A,left,mid,right);
        }
        if(curr_scale>n) break;
    }

    

}



int main()
{
    int n,num[100];
    cin>>n;
    
    // 你的代码
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    merge_Sort(num,n);
    for(int i=0;i<n;i++){
        cout << num[i] << ' ';
    }

	return 0;
}
