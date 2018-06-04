#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 一个c语言中如何使用回调函数的示例

//  使 copyOfMyInfo = char* (char* name,int age) 的函数,和myinfo的参数一样
typedef char* copyOfMyInfo(char* name,int age);

char* myInfo(char* name,int age);
int useMyInfo();

int main(){
	useMyInfo(myInfo);
}

char* myInfo(char* name,int age){
	char res[90];
	sprintf(res,"%s is %d years old.",name,age);
	printf("%s ",res);
}

int useMyInfo(copyOfMyInfo *i){
	i("cqy",27);
}