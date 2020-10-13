#include<iostream>
using namespace std;
void build(int a[][3],int n){
      int i,j;
      for(i=0;i<n;i++){
            a[i][0]=i+1;
      for(j=1;j<3;j++){
            a[i][j]=0;
      }
      }
}


void view(int a[][3],int n){
      int i,j;
      cout<<endl<<"----------------------------------------------"<<endl;
      for(i=0;i<n;i++){
            for(j=0;j<3;j++){

                  cout<<a[i][j];
            }
      cout<<endl;
      }

}
void mover(int d,int a[][3],int from,int to,int n){
      int i,j,k;

      for(i=n-1;i>=0;i--){
            if(a[i][from]==0){
                  continue;
            }
            else{
                  d=i;
            }
      }
      for(i=n-1;i>=0;i--){
            if(a[i][to]!=0){
                  continue;
            }
            else{
                  k=i;
                  break;
            }

      }
      a[k][to]=a[d][from];
      a[d][from]=0;
}
void tower(int n,int a[][3],int source,int spare,int desti,int row){
      if(n!=0){
            tower(n-1,a,source,desti,spare,row);
            mover(n-1,a,source,desti,row);
            view(a,row);
            tower(n-1,a,spare,source,desti,row);
      }
}

int main(){
      int i,j,n,r;
      cout<<endl<<"Enter the no of rings :";
      cin>>n;
      r=n;
      int a[n][3];
      build(a,n);
      view(a,n);

      tower(n,a,0,1,2,r);
      return 0;
}
