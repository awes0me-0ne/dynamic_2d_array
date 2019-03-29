                                                                                                                                                                                                                                                                                                                                                                                                  #include<stdio.h>
#include<stdlib.h>

#define ROW 5
#define COL 10

void print_2d_array(double array[][COL],int row,int col);//2次元配列表示                                                                                                                                                                                                                                                                                                                                                                     
void input_2d_array(double array[][COL],int row,int col);//2次元配列への入力                                                                                                                                                                                                                                                                                                                                                                 
void copy_2d_array(double copy[][COL],double original[][COL],int row,int col);//2次元配列の複製                                                                                                                                                                                                                                                                                                                                              

void print_2d_dArray(double **array,int row,int col);//動的2次元配列表示                                                                                                                                                                                                                                                                                                                                                                     
void input_2d_dArray(double **array,int row,int col);//動的2次元配列への入力                                                                                                                                                                                                                                                                                                                                                                 
double ** make_2dArray(int row ,int col);//動的2次元配列の生成                                                                                                                                                                                                                                                                                                                                                                               
void free_2d_dArray(double **array,int row);//動的2次元配列メモリ開放                                                                                                                                                                                                                                                                                                                                                                        

void copy_2d_dArray(double **copy,double **original,int row,int col);//動的2次元配列の複製                                                                                                                                                                                                                                                                                                                                                   

int main(){
  int row,col;
  double a1[ROW][COL];
  double a2[ROW][COL];

  double **d1[ROW][COL];//コピー元                                                                                                                                                                                                                                                                                                                                                                                                           
  double **d2[ROW][COL];//コピー先                                                                                                                                                                                                                                                                                                                                                                                                           

  printf("2次元配列の行数を入力して下さい\n");
  scanf("%d",&row);
  printf("2次元配列の列数を入力して下さい\n");
  scanf("%d",&col);
  printf("配列要素を入力して下さい\n");
  input_2d_array(a1,row,col);
  print_2d_array(a1,row,col);
  printf("配列の複製を行う\n");
  copy_2d_array(a2,a1,row,col);
  print_2d_array(a2,row,col);

  printf("動的な配列を生成します\n");
  **d1=make_2dArray(row,col);
  **d2=make_2dArray(row,col);
  printf("動的な配列に要素数を入力して下さい\n");
  input_2d_dArray(**d1,row,col);
  print_2d_dArray(**d1,row,col);
  printf("動的な配列の複製を行う\n");
  copy_2d_dArray(**d2,**d1,row,col);
  print_2d_dArray(**d2,row,col);

  free_2d_dArray(**d2,row);
  free_2d_dArray(**d1,row);
  return 0;
}
/*2次元配列表示*/                                                                                                                                                                                                                                                                                                                                                                                                                              
void print_2d_array(double array[][COL],int row,int col){
  int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("%6.2f",array[i][j]);
    }
    printf("\n");
  }
}
/*2次元配列への入力*/                                                                                                                                                                                                                                                                                                                                                                                                                          
void input_2d_array(double array[][COL],int row,int col){
  int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%lf",&array[i][j]);
    }
  }
}
/*2次元配列の複製*/                                                                                                                                                                                                                                                                                                                                                                                                                            
void copy_2d_array(double copy[][COL],double original[][COL],int row,int col){
  int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      copy[i][j]=original[i][j];
    }
  }

}

/*動的2次元配列表示*/                                                                                                                                                                                                                                                                                                                                                                                                                        
void print_2d_dArray(double **array,int row,int col){
  int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    printf("%6.2f",array[i][j]);
    }
    printf("\n");
  }
}
/*動的2次元配列への入力*/                                                                                                                                                                                                                                                                                                                                                                                                                    
void input_2d_dArray(double **array,int row,int col){
  int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      scanf("%lf",&array[i][j]);
    }
  }
}
/*動的2次元配列の生成*/                                                                                                                                                                                                                                                                                                                                                                                                                      
double ** make_2dArray(int row ,int col){
  int i,j;
  double **dArray;
  dArray=(double**)malloc(sizeof(double*)*row);
  for(i=0;i<row;i++){
    dArray[i]=(double*)malloc(sizeof(double)*col);
  }
  return dArray;
}
/*動的2次元配列メモリ開放*/                                                                                                                                                                                                                                                                                                                                                                                                                    
void free_2d_dArray(double **array,int row){
  int i;
  for(i=0;i<row;i++){
    free(array[i]);
  }
}
/*動的2次元配列の複製*/                                                                                                                                                                                                                                                                                                                                                                                                                      
void copy_2d_dArray(double **copy,double **original,int row,int col){
  int i,j;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      copy[i][j]=original[i][j];
    }
  }
}

