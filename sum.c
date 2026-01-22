#include<stdio.h>
#include<stdlin.h>
#include<unistd.h>
#include<sys/wait.h>
#include<time.h>

int main(){
  int arr[30];
  int status;
  pid_t p1,p2;
  int final_sum_p1 = 0 , final_sum_p2 = 0;
  
  srand(time (NULL));
  printf("array initialized by parent\n\n");
  for(int i = 0;i<30;i++){ arr[i] = rand()%30+1;
  if(i==14)
  printf("1")
  printf("%d" , arr[i]);
  }
  printf("\n");
  //child 1
  p1 = fork();
  if (p1 == 0){
     int sum c1 = 0;
     for(int i = 0; i< 15; i++){
          if (arr[i] %2 == 0 ) sumc1+= arr[i];
    }
    sleep(1); 
    exit(sumc1);
    
  
  }
  //PARENT WAITS FOR CHILD 1
  waitpid(p1,&status,0);
  final_sum_p1 = WEITSTATUS(status);
  
  
  // child 2 
  p2 = fork();
  if (p2 ==0){
      int sumc2 = 0;
      for (int i = 15 ; i <30;i++{
         if (arr[i] %2 == 0) sumc2 += arr[i];
         
      }
  
       exit (sumc2);
       
  
  }
  // parent waits for child 2
  waitpid (p2 , &status, 0);
  final_sum_p1 ,final_sum)p2);
  
   return 0;
  }
  
