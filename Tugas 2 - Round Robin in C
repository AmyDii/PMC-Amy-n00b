//buatlah program round robin dengan bahasa c
//Round robin: scheduling algoritm
//Shadrina Syahla V - 18320031

#include<stdio.h>

int main()
{
    //declare
    int n, i, arrival_time[8], burst_time[8], remain_time[8], qtime, remain, lap;
    int waiting_time, processing_time;
    printf("The maximum amount of process is 8\n\n");
    
    //input
    //a. banyak proses
    printf("Input the number of process(es): ");
    scanf("%d", &n);
    printf("\n");
    
    //b. arrival dan burst time
    for(i=0; i<n; i++)
    {
        printf("Input arrival time for P[%d]:\t", i+1);
        scanf("%d", &arrival_time[i]);
        printf("Input burst time for P[%d]:\t", i+1);
        scanf("%d", &burst_time[i]);
    }
    
    //c. quantum time
    printf("\nInput quantum time:\t");
    scanf("%d", &qtime);
    
    //inisialisasi
    remain = n;
    
    //printing
    //a. header
    printf("Process\t| Processing Time\t | Waiting Time\n");
    
    //b. counting
    for(int time=0; i=0; remain!=0)
    {
        if(remain_time[i] > 0)
        {
            if(remain_time[i] <= qtime)
            {
                remain_time[i] = 0;
                time = time + remain_time[i];
                lap = 1;
            }
            else
            {
                remain_time[i] = remain_time[i] - qtime;
                time = time + qtime;
            }
            
        }
        else if((remain_time[i] == 0) && (lap==1)) 
        {
            remain = remain - 1;
            waiting_time = waiting_time + time - (arrival_time[i] + burst_time[i]);
            processing_time = processing_time + time - arrival_time[i];
            printf("P[%d]\t|\t%d\t|\t%d\n",i+1, waiting_time, processing_time);
        }
        //for i++
        if (arrival_time[i+1] <= time)
        {
            i = i+1;
        }
        
        else if (i = n-1)
        {
            i=0;
        }
        
        else
        {
            i=0;
        }
    }
    
    //c. result
    printf("\n\nAverage waiting time = %.2f", (waiting_time*1.0/n));
    printf("\nAverage processing time = %.2f", (processing_time*1.0/n));
}

//referensi 
//https://www.guru99.com/round-robin-scheduling-example.html
//https://www.tutorialspoint.com/c-program-for-round-robin-scheduling
