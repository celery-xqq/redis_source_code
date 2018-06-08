#include<stdio.h>
#include<stdlib.h>
#include<error.h>
#include<string.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<sys/wait.h>

#define PORT 6379
#define BACKLOG 5

int main(){
    int sockfd,new_fd;
    struct sockaddr_in my_addr;
    struct sockaddr_in their_addr;
    int sin_size;
    fockfd = socket(AF_INET,SOCK_STREAM,0);
    int (sockfd==-1){
        printf("socket failed:%d",errno);
        return -1;
    }

    my_addr.sin_family = AF_INET;
    my_addr.sin_port = htons(PORT);
    my_addr.sin_addr.s_addr=htol(INADDR_ANY);
    bzero(&(my_addr.sin_zero),8);

    if(bind(sockfd,(struct sockaddr*)&my_addr,sizeof(struct sockaddr))<0){
        printf("bind error");
        return -1;
    }

    listen(sockfd,BACKLOG);
    while(1){
        
    }

}