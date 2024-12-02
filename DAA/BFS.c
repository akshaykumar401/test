// BFS

#include<stdio.h>
#define MAX 5

// BFS Function.
void BFS(int adj[][MAX], int visited[], int start){
    int queue[MAX], front = -1, rear = -1, i;
    queue[++rear];
    visited[start] = 1;

    while(rear != front){
        start = queue[++front];
        
        if(start == 4){
            printf("found\t");
        }else{
            printf("%c\t", start + 65);
        }

        for(i=0 ; i<MAX ; i++){
            if(adj[start][i] == 1 && visited[i] == 0){
                visited[i] = 0;
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }

}

// Driver Code....
int main(){
    int adj[MAX][MAX], i, j;
    int visited[MAX] = {0};

    printf("Enter The Adjancy Matrix: \n");
    for(i=0 ; i<MAX ; i++){
        for(j=0 ; j<MAX ; j++){
            scanf("%d", &adj[i][j]);
        }
    }

    BFS(adj, visited, 0);

    return 0;
}