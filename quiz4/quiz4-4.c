int main(){
    int num[7][10] = {2,3,5,7,11,13,17,19,29,31, 

                    37,41,43,37,61,71,73,79,83,97, 

                    103, 107, 109, 113, 131, 151, 181, 191, 193, 173, 

                    163, 113, 102, 107, 127, 137, 257, 139, 149, 369,

                    212, 224, 236, 248, 313, 326, 339, 341, 355, 368,

                    2,    4,     6,     6,  10,   12,   14,   16,   18,  20, 

                    1,3,5,     7,    9,   11,   13,   17,   19,  21
                    };
    printf(" *** Find a value in array 2 dimension *** \n");
    
    int i,j,n,sum=0,count=1;
    printf("Enter a value : ");
    scanf("%d",&n);
    for(i=0;i<7;i++){
        for(j=0;j<10;j++){
            printf("%5d",num[i][j]);
        }
        printf("\n");
    }
    printf("\nFinding value => %d\n",n);
    for(i=0;i<7;i++){
        for(j=0;j<10;j++){
            if(num[i][j] == n){
                printf("%d. (row,column) => (%d,%d)\n",count,i+1,j+1);
                count++;
            }
        }
    }
    if(count == 1){
        printf(" --- !!! NOT FOUND !!! ---\n");
    }
}