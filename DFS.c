
#include <stdio.h>
//using namespace std;

#define MAX 100
#define READY 1
#define PROCESSED 2

int main()
{
    int nv = 9;
    int graph[MAX][MAX] = {0};
    int status[MAX];
    // Define the graph edges
    graph[0][4] = graph[4][0] = 1;
    graph[4][1] = graph[4][6] = 1;
    graph[6][4] = graph[6][5] = graph[6][7] = 1;
    graph[7][6] = graph[7][8] = 1;
    graph[8][7] = 1;
    graph[5][6] = graph[5][2] = graph[5][3] = 1;
    graph[2][5] = graph[3][5] = 1;
    for(int i=0;i<nv;i++)
    {
        status[i]=READY;
    }
    int stack[MAX];
    int top=-1;
    int stv;
    printf("Starting Vertext :");
    scanf("%d",&stv);
    stack[++top]=stv;
    while(top!=-1)
    {
        int curr=stack[top--];
        if(status[curr]==READY)
        {
           printf("%d ",curr);
            status[curr]=PROCESSED;
            for(int i=nv-1;i>=0;i--)
            {
                stack[++top]=i;
            }
        }

    }


    return 0;
}
