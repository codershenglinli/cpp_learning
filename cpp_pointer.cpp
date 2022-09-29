#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void getSeconds(unsigned long *par);
double getAverage(int *ptr,int num);
int *generate_array(void);

int main(){
    int var1;
    int var2[10]={1,2,3,4,5,6,7,8,9,10};

    cout <<&var1<<endl;
    cout << &var2 <<endl;

    int var =20;
    int *ip;

    ip = &var;

    cout << ip <<endl;
    cout << *ip <<endl;

    int *ptr = NULL;
    if(ptr) cout << *ptr <<endl;

    int *chr_ptr = NULL;

    chr_ptr = var2;

    for(int i=0;i<10;i++){
        cout << chr_ptr << ' ' << *chr_ptr<<endl;
        chr_ptr++;
    }

    chr_ptr = &var2[9];
    for (int i=10;i>0;i--){
        cout << chr_ptr << ' ' << *chr_ptr<<endl;
        chr_ptr--;        
    }

    for (ptr=var2;ptr<=&var2[9];ptr++){
        cout <<ptr << ' '<<*ptr<<endl;
    }
    
    int array[3]={1,2,3};
    //数组就是指针！
    *array = 500; //通过指针改变数组中元素的值
    for(int i=0;i<3;i++){
        cout <<array+i <<' '<< *(array+i) <<endl;
    }

    const char *names[4] = {
        "Zara", //0xabafff9b0
        "Hara", //0xabafff9b8
        "Nara",
        "Sara",
    };

    for (int i=0;i<4;i++){
        cout << names+i << ' ' << (void*)*(names+i) << endl;
        //这可咋办iPad要抢风头了 
    }

    //指向指针的指针
    int *num_ptr=NULL;
    int **multi_ptr=NULL;
    int num = 0;

    num_ptr = &num;
    multi_ptr = &num_ptr;

    cout << num_ptr << ' ' << *num_ptr <<endl;
    cout << multi_ptr << ' ' << *multi_ptr << ' ' << **multi_ptr <<endl;

    //转递给函数的指针
    unsigned long sec;
    getSeconds(&sec);
    cout << sec <<endl;

    //传递给函数的数组指针
    int arra[] = {1,2,3,4,5};
    double avg = getAverage(arra,5);
    cout <<avg;
    
    //传出指针（数组）的函数
    int *an_array; //用于接受传出的数组指针
    an_array = generate_array();
    for (int i=0;i<10;i++){
        cout << *(an_array+i) <<endl;
        //cout << an_array[i] <<endl;
    }

}

void getSeconds(unsigned long *par){
    *par = time(NULL);
    return;
}

double getAverage(int *ptr,int num){
    //接受数组指针的函数。可对指针进行操作。
    double sum;
    for (int i=0;i<num;i++){
        sum += ptr[i];
    }
    sum = sum /num;
    return sum;

}
int *generate_array(){
    //C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static变量。
    static int r[10];
    srand((unsigned)time(NULL));
    for (int i =0;i<10;i++){
        r[i]=rand();
        cout << r[i] <<endl;
    }
    return r;
}