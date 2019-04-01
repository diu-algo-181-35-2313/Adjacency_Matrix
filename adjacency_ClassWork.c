#include<stdio.h>
#include<string.h>

void main()
{
    int adj_mat[10][10];
    int i,j,n;
    //char con;
    int con;

    printf("How many nodes you want? ");
    scanf("%d",&n);

    //*******add zero at every position**********//
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            adj_mat[i][j]=0;
        }
    }

    //******add connection between two nodes****//

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == j){
                adj_mat[i][j] = 0;
                continue;
            }
            printf("Do you want to connect %d node to %d node if yes press 0: ",i,j);

            /*fflush(stdin);
            //scanf("%c",&con);
            con = getc(stdin);
            //printf("\n*\n");*/

            scanf("%d",&con);

            /*if((strcmp(con,'Y') == 0 ) || (strcmp(con,'y')== 0)){
                adj_mat[i][j] = 1;
            }
            else{
                adj_mat[i][j] = 0;
            }*/

            if(con == 0){
                adj_mat[i][j] = 1;
            }
            else{
                adj_mat[i][j] = 0;
            }
        }
    }

    //******print Adjacency Matrix************//
    printf("\n\nAdjacency Matrix: \n\n");
    for(i=0;i<n;i++){
        int con_edges=0,x,m=0;
        //*******count connection*******//
        for(j=0;j<n;j++){
            if(adj_mat[i][j] == 1){
                con_edges++;
            }
        }
        //*****print connection**********//
        printf("\n%d total edges = %d",i,con_edges);
        printf("\n\n%d is connected to ",i);
            for(x=0;x<n;x++){
                if(adj_mat[i][x] == 1){
                    printf("->%d",x);
                }
            }
            printf("\n");
    }
}
