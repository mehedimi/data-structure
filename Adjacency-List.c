#include<stdio.h>

int main(){
    int V = 4, i, j;
    int graph[4][4] = {
        { 0, 3, 7, 5 },
        { 3, 0, 0, 0 },
        { 0, 2, 0, 4 },
        { 0, 0, 0, 0 }
    };

    for(i = 0; i < V; i++){
        printf("Adjecency list of vertex %d\n", i + 1);
        printf("[NODE %d]", i+1);
        for(j = 0; j < V; j++){
            if(graph[i][j] != 0){
                printf("->[NODE: %d COST: %d]", j+1, graph[i][j]);
            }
        }
        printf("\n\n");
    }
}