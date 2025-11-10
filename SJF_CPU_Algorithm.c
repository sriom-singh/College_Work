// Design, Execute and Analyze Shortest Job First (SJF) CPU scheduling algorithm.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Process {
    char name[20];
    int AT;
    int BT;
    int CT;
    int WT;
    int TAT;
    int isExecuted;
};

void calculateTime(int *currentTime, struct Process *p) {
    if (*currentTime < p->AT)
        *currentTime = p->AT;  // Wait for process to arrive

    *currentTime += p->BT;
    p->CT = *currentTime;
    p->TAT = p->CT - p->AT;
    p->WT = p->TAT - p->BT;
    p->isExecuted = 1;

    printf("%s\t%d\t%d\t%d\t%d\t%d\n", p->name, p->AT, p->BT, p->CT, p->WT, p->TAT);
}

int main() {
    int n, i, executed = 0, currentTime = 0;
    float avgTAT=0, avgWT=0;
    printf("Enter the no. of processes: ");
    scanf("%d", &n);
    struct Process *selected = NULL;
    struct Process *processes = (struct Process *)calloc(n, sizeof(struct Process));
    if (processes == NULL) {
        printf("\nMemory Allocation Failed!\n");
        return 1;
    }

    // Taking Input
    for (i = 0; i < n; i++) {
        printf("\nEnter details of process %d\n", i + 1);
        printf("Process Name: ");
        scanf("%s", processes[i].name);
        printf("Arrival Time: ");
        scanf("%d", &processes[i].AT);
        printf("Burst Time: ");
        scanf("%d", &processes[i].BT);
        processes[i].isExecuted = 0;
    }

    printf("\n--- Process Execution Order ---\n");
    printf("\nProcess\tAT\tBT\tCT\tWT\tTAT\n");

    while (executed < n) {
	struct Process *selected = NULL;
        int minBT = 1e9; // Large number

        // Find the next process with smallest AT among not executed
        for (i = 0; i < n; i++) {
            if (!processes[i].isExecuted && processes[i].AT <= currentTime) {
                if (processes[i].BT < minBT) {
                    minBT = processes[i].BT;
                    selected = &processes[i];
                }
            }
        }

        // If no process has arrived yet
        if (selected == NULL) {
            currentTime++;
            continue;
        }

        calculateTime(&currentTime, selected);
        executed++;
    }

   for (i = 0; i < n; i++) {
       	avgTAT += processes[i].TAT;
	avgWT += processes[i].WT;
    }
   avgTAT = (float)avgTAT/n;
   avgWT = (float)avgWT/n;
   printf("\nAverage Waiting : %.2f",avgWT);
   printf("\nAverage Turn Around Time : %.2f\n",avgTAT);

    free(processes);
    return 0;
}
