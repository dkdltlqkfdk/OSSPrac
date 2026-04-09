#include<iostream>
struct student{
    char name[10];
    char grade[10];
};
int main(){
    student yun;
    std::cout<<"이름을 입력하세요: ";
    std::cin>>yun.name;
    std::cout<<"학번을 입력하세요: ";
    std::cin>>yun.grade;
    std::cout<<"\n\n";
    std::cout<<"<출력>"<<std::endl;
    std::cout<<"이름: "<<yun.name<<std::endl;
    std::cout<<"학번: "<<yun.grade<<std::endl;
    return 0;
}