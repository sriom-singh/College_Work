/* Design, Execute and Analyse a C Program using gcc compiler to extract system information. 
   Such as Model Name, Cache Size, Number of CPU cores, CPU clock speed, Total Memory, Free Memory, 
   Operating system Name and Version.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=========== System Information ===========\n\n");

    printf("CPU Model Name   : ");
    system("grep -m1 'model name' /proc/cpuinfo | awk -F': ' '{print $2}'");
    printf("CPU Cache Size   : ");
    system("grep -m1 'cache size' /proc/cpuinfo | awk -F': ' '{print $2}'");

    printf("CPU Clock Speed  : ");
    system("grep -m1 'cpu MHz' /proc/cpuinfo | awk -F': ' '{print $2 \" MHz\"}'");

    printf("CPU Cores        : ");
    system("grep -m1 'cpu cores' /proc/cpuinfo | awk -F': ' '{print $2}'");

    printf("Total Memory     : ");
    system("grep -m1 'MemTotal' /proc/meminfo | awk -F': ' '{print $2}'");

    printf("Free Memory      : ");
    system("grep -m1 'MemFree' /proc/meminfo | awk -F': ' '{print $2}'");

    printf("Operating System : ");
    system("awk -F'=' '$1==\"NAME\" {gsub(/\"/,\"\",$2); print $2}' /etc/os-release");

    printf("OS Version       : ");
    system("awk -F'=' '$1==\"VERSION\" {gsub(/\"/,\"\",$2); print $2}' /etc/os-release");

    printf("\n==========================================\n");

    return 0;
}
