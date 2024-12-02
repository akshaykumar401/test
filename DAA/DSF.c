// DFS

#include<stdio.h>
#define MAX 5

// DFS.
void DFS(int adj[][MAX], int visited[], int start){
    int stack[MAX], top = -1, i;
    visited[start] = 1;
    stack[++top] = start;
    printf("%c-", i+65);

    while(top != -1){
        start = stack[top];
        for(i=0 ; i<MAX ; i++){
            if(adj[start][i] && visited[i] == 0){
                stack[++top] = i;
                printf("%c-", i+65);
                visited[i] = 1;
                break;
            }
        }
        if(i == MAX){
            top--;
        }
    }
}

// Driver Code....
int main(){
    int adj[MAX][MAX], i, j;
    int visited[MAX] = {0};

    printf("Enter The Adjency Matrix: \n");
    for(i=0 ; i<MAX ; i++){
        for(j=0 ; j<MAX ; j++){
            scanf("%d", &adj[i][j]);
        }
    }
    DFS(adj, visited, 0);

    return 0;
}