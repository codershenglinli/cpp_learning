#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*设计一个学生成绩管理程序，实现对n个学生的3门课程的成绩的记录与统计工作。学生信息包括：学号，姓名，课程成绩1，课程成绩2，课程成绩3。
程序基本功能要求如下：

1---添加学生信息（依次输入学号、三门课程的分数、姓名）
2---修改学生信息（依次输入学号、三门课程的分数、姓名）
3---按学号删除学生（输入学号）
4---按学号查询学生信息（输入学号，输出学号、姓名、三门课程的分数）
5---按姓名查询学生信息（输入姓名，按学号升序依次输出学生信息）
6---按学号升序排序并输出
7---按总分降序排序并输出
0---退出*/

struct stuData{
    long long int xuehao;
    int score1;
    int score2;
    int score3;
    int total;
    string name;

};

vector<stuData> array;

void addStu(){
    stuData temp;
    cin >> temp.xuehao >> temp.score1 >>
    temp.score2 >> temp.score3;
    //cin.get();
    getline(cin,temp.name);
    temp.total = temp.score1+temp.score2+temp.score3;
    bool flag = true;
    for(auto &stu : array){
        if(stu.xuehao==temp.xuehao){
            stu = temp;
            flag = false;
        }
    }
    if(flag){
        array.push_back(temp);
        for(int i=array.size()-1;i>0;--i){
            if(array[i-1].xuehao>array[i].xuehao){
                //long long int temp = array[i-1].xuehao;
                //array[i-1].xuehao = array[i].xuehao;
                //array[i].xuehao = temp;
                stuData temp1;
                temp1 = array[i-1];
                array[i-1] = array[i];
                array[i] = temp1;
            }
        }
    }
}

void modifyStu(){
    stuData temp;
    cin >> temp.xuehao >> temp.score1 >>
    temp.score2 >> temp.score3;
    //cin.get();
    temp.total = temp.score1+temp.score2+temp.score3;
    getline(cin,temp.name);
    for (auto &stu : array){
        if(stu.xuehao==temp.xuehao){
            stu = temp;
        }
    }
}

void delStu(){
    long long int xuehao;
    cin >> xuehao;
    for(int i=0;i<array.size();++i){
        if(array[i].xuehao==xuehao){
            array.erase(array.begin()+i);
        }
    }    
}
void print(stuData stu){
    cout << stu.xuehao << stu.name << ' ' << stu.score1 << ' ' << stu.score2 << ' ' << stu.score3 << ' ' << endl;
}

void find_in_xuehao(){
    long long int xuehao;
    cin >> xuehao;
    for (auto stu : array){
        if (stu.xuehao == xuehao){
            print(stu);
        }
    }
}

void find_in_name(){
    string temp_name;
    getline(cin,temp_name);
    for (auto stu : array){
        if(stu.name == temp_name){
            print(stu);
        }
    }
}


void print_all(){
    for(auto stu : array){
        print(stu);
    }
}

void print_all_in_total_order(){
    vector<stuData> temp_array(array);
    for(int i=1;i<temp_array.size();++i){
        for(int j=0;j<temp_array.size()-i;++j){
            if(temp_array[j+1].total<temp_array[j].total || temp_array[j+1].total==temp_array[j].total&&temp_array[j+1].xuehao>temp_array[j].xuehao){
                stuData temp;
                temp = temp_array[j];
                temp_array[j] = temp_array[j+1];
                temp_array[j+1] = temp;
            }
        }
    }
    for(int i=temp_array.size()-1;i>=0;--i){
        print(temp_array[i]);
    }
    /*
    for(auto stu : temp_array){
        print(stu);
    }
    */
}
int main(){
    int option;
    while(true){
        cin >> option;
        if (option == 0){
            break;
        }
        if(option==1){
            addStu();
        }
        if(option==2){
            modifyStu();
        }
        if(option==3){
            delStu();
        }
        if(option==4){
            find_in_xuehao();
        }
        if(option==5){
            find_in_name();
        }
        if(option==6){
            print_all();
        }
        if(option==7){
            print_all_in_total_order();
        }
        //print_all();

    }
    return 0;
}