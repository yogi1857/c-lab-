
#include <stdio.h>

int main()
{
    int n,serchelement,position=0;
    int i=0;
    scanf("%d",&n);
    int x[n];
    int upperbound=n-1,lowerbound=0;
    int mid;
    mid=(upperbound+lowerbound)/2;
    
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        
    }
    scanf("%d",&serchelement);
    for(int j=0;j<n;j++){
        if(x[mid]==serchelement){
            
            position=mid;
            break;
        }
    else if(x[mid]>serchelement){
        for(int k=mid+1;k<n;k++){
            if(x[k]==serchelement){
                position=k;
                break;
            }
        }
        
    }
    else{
        
        for(int m=0;m<mid;m++){
            if(x[m]==serchelement){
                position=m;
                break;
            }
    }
    }
    
}
printf("%d",position);

    return 0;
}
