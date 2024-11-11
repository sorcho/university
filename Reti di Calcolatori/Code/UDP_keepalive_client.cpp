// Client side implementation of UDP client-server model
#include <bits/stdc++.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

// Compile instructions:
//	g++ -o client UDP_keepalive_client.cpp
// Run instructions:
//	./client [CLIENT_NAME] [PORT]

int main(int argc, char **argv) {
    int sockfd, status;
    char in_buffer[1024];
    char out_buffer[1024];
    struct sockaddr_in servaddr, cliaddr;
    
    if(argc<3){
    	std::cout<<"Please specify client_name and client_port"<<std::endl;
    	return 0;
    }
    	
    strcpy(out_buffer, argv[1]);
    int src_port = atoi(argv[2]);
    
    
    if ( (sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }
   
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(8080);
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    
    memset(&cliaddr, 0, sizeof(cliaddr));
    cliaddr.sin_family = AF_INET;
    cliaddr.sin_port = htons(src_port);
    cliaddr.sin_addr.s_addr = INADDR_ANY;
    
    if ( bind(sockfd, (const struct sockaddr *)&cliaddr, sizeof(cliaddr)) < 0 ) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    
    int n;
    socklen_t len;
    
    //sending hello message, receiving ack
    sendto(sockfd, out_buffer, strlen(out_buffer), 0, (const struct sockaddr *) &servaddr, sizeof(servaddr));
    std::cout<<"[SENT "<<strlen(out_buffer)<<" bytes to "<<inet_ntoa(servaddr.sin_addr)<<":"<<ntohs(servaddr.sin_port)<<"]: "<<out_buffer<<std::endl;
    
    n = recvfrom(sockfd, (char *)in_buffer, 1024, MSG_WAITALL, (struct sockaddr *) &servaddr, &len);
    in_buffer[n] = '\0';
    std::cout<<"[RECEIVED "<<n<<" bytes from "<<inet_ntoa(servaddr.sin_addr)<<":"<<ntohs(servaddr.sin_port)<<"]: "<<in_buffer<<std::endl;
    memset(in_buffer,0,strlen(in_buffer));
    memset(out_buffer,0,strlen(out_buffer));
    
 
    while(strcmp(out_buffer, "close")){
    	memset(out_buffer,0,strlen(out_buffer));
    	
    	//sending custom message, receiving ack
    	std::cout<<"Enter a new message (type \"close\" to stop transmitting): ";
    	std::cin.getline(out_buffer,1024);
    	
    	sendto(sockfd, out_buffer, strlen(out_buffer), 0, (const struct sockaddr *) &servaddr, sizeof(servaddr));
        std::cout<<"[SENT "<<strlen(out_buffer)<<" bytes to "<<inet_ntoa(servaddr.sin_addr)<<":"<<ntohs(servaddr.sin_port)<<"]: "<<out_buffer<<std::endl;
        
        n = recvfrom(sockfd, (char *)in_buffer, 1024, MSG_WAITALL, (struct sockaddr *) &servaddr, &len);
        
        in_buffer[n] = '\0';
        std::cout<<"[RECEIVED "<<n<<" bytes from "<<inet_ntoa(servaddr.sin_addr)<<":"<<ntohs(servaddr.sin_port)<<"]: "<<in_buffer<<std::endl;
        memset(in_buffer,0,strlen(in_buffer));
    }
    
    // closing the connected socket
    close(sockfd);
    return 0;
}
