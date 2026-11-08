#include <stdio.h>

int main() 
{

    int n,sr=0,a;
    scanf("%d", &n);
    a=(2*n)-1;
    int b=a;
    int arr[(2*n)-1][(2*n)-1];
  	while(n>=1){
        for(int i=sr;i<a;i++){
            arr[sr][i]=n;
        }
        for(int i=sr+1;i<a;i++){
            arr[i][a-1]=n;
        }
        for(int i=a-1;i>=sr;i--){ 
            arr[a-1][i]=n;
        }
        for(int i=a-1;i>=sr+1;i--){
            
            arr[i][sr]=n;
        }
        n--;
        sr++;
        a--;
    }
    
    for(int i=0;i<b;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
