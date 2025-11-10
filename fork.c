/*
  Design, Execute and Analyse a C program using ‘gcc’ compiler to  extract PID of parent process and child process.
  Child process is to be created using fork()  system call.  
*/

#include <stdio.h>  
#include <sys/types.h>  
#include <unistd.h>  
#include <stdlib.h>  
#include <sys/wait.h>  

int main(){  
 pid_t pid= fork(); 
 if(pid<0){  
 printf("\nchild process creation failed"); 
 return 0; 
 }  
 else if(pid == 0){  
 printf("\nChild process Created"); 
 printf("\n(child)child pid: %d",getpid()); 
 printf("\n(child)parent pid: %d\n",getppid()); 
 }  
 else{  
 printf("\nThis is Parent Process"); 
 printf("\n(parent)parent pid: %d",getpid()); 
 printf("\n(parent)child pid : %d\n",pid); 
 }  
 wait(NULL); 
 return 0; 
} 
