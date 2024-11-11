// Server side implementation of UDP client-server model
#include <bits/stdc++.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
   
// Compile instructions:
//	g++ -o server UDP_multi_server.cpp

int main() {
    int sockfd, new_socket;
    int opt = 1;
    char buffer[1024];
    struct sockaddr_in servaddr, cliaddr;
    
    if ( (sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }
       
    memset(&servaddr, 0, sizeof(servaddr));
    memset(&cliaddr, 0, sizeof(cliaddr));
    
    servaddr.sin_family    = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(8080);
    
    if ( bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0 ) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    
    char keep_alive[2] = "y";
    
    socklen_t len = sizeof(cliaddr);
    int n;
    
    while(strcmp(keep_alive,"n")){
    	std::cout<<"LISTENING..."<<std::endl;
	    
    	//receiving generic message, sending ack
        n = recvfrom(sockfd, (char *)buffer, 1024, MSG_WAITALL, ( struct sockaddr *) &cliaddr, &len);
        buffer[n] = '\0';
        std::cout<<"[RECEIVED "<<n<<" bytes from "<<inet_ntoa(cliaddr.sin_addr)<<":"<<ntohs(cliaddr.sin_port)<<"]: "<<buffer<<std::endl;
        memset(buffer,0,strlen(buffer));
        
        sendto(sockfd, "ack", 3, 0, (const struct sockaddr *) &cliaddr, len);
        std::cout<<"[SENT 3 bytes to "<<inet_ntoa(cliaddr.sin_addr)<<":"<<ntohs(cliaddr.sin_port)<<"]: ack"<<std::endl;
        
        std::cout<<"Do you wish to continue listening (y/n)? "<<std::endl;
        std::cin.getline(keep_alive,2);
    }
    close(sockfd);
    return 0;
}
