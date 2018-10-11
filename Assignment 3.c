#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>

// A simple program, which takes in input from child process and send its output to a parent process
int main()
{
      int arr[1000];
    int sum=0,sum1=0,sum2=0,sum3=0,sum4=0;
    int fd1[2];
    
    for(int i=0;i<500;i++)
    {
        arr[i]=i;
    }
    if (pipe(fd1)==-1)
    {
        printf("Pipe Failed" );
        return 1;
    }

    int cpid = fork();

    if (cpid < 0)
    {
        printf("fork Failed" );
        return 1;
    }
    if (cpid ==0 )
    {
      int cpid=fork()
      if(cpid==0)
      {
        int cpid=fork()
         if(cpid==0)
         {
            int cpid=fork()
            if(cpid==0)
            {
                int cpid=fork()
                if(cpid==0)
                {
                    int cpid=fork()
                    if(cpid==0)
                    {
                        int cpid=fork()
                        if(cpid==0)
                        {
                            int cpid=fork()
                            if(cpid==0)
                            {
                                int cpid=fork()
                                if(cpid==0)
                                {
                  
                                }
                               exit(0);
                            }
                            else
                            {
                                wait(NULL);
                                for(int i=400;i<500;i++)
                                {
                                    sum4=sum4+arr[i];
                                }
                            }
                            exit(0);                  
                            }
                        exit(0);
                }
                else
                {
                    wait(NULL);
                    for(int i=300;i<400;i++)
                    {
                         sum3=sum3+arr[i];
                    }
                }
                exit(0);
                }
                exit(0);
            }
            else
                {
                wait(NULL);
                for(int i=200;i<300;i++)
                {
                 sum2=sum2+arr[i];
                }
            }
            exit(0);
        }
        else
        {
            wait(NULL);
            for(int i=100;i<200;i++)
            {
               sum1=sum1+arr[i];
            }
        }
        exit(0);
    }
    else
    {
      wait(NULL);
      for(int i=0;i<100;i++)
      {
          sum=sum+arr[i];
      }
    }
    total=sum+sum1+sum2+sum3+sum4;
    printf(total);
    
}
