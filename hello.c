
#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
int main(int argc, char *argv[]) {
if(argc>1)
{
     if(strcmp(argv[1],"--help")==0){
     printf("the descrption of the project \n");
}
}
else{


    char key[100],name[100],signals[100],t,key1[100],key2[100]; 
    while(1){
    printf("1-to List all the processes in the system.\n2-to List all the processes grouped by user\n3-to Display process ID of all the processes\n4-to stop a specific process or run a specific process \n5-Send specific signals to specific process\n6-EXIT\n");
    int c;       int x; 
    scanf("%d",&c);
    t=getchar();
    
    switch (c){
     //1-to List all the processes in the system.
      case 1:
      strcpy(key,"ps -A");
      system(key);
       break;
      //2-to List all the processes grouped by user 
case 2:
      strcpy(key,"ps -u");
      strcat(key," ");
      printf("enter the process name you want to run:\n");
      gets(name);
      strcat(key,name);
             
      system(key);
      break;
     
      //3-to Display process ID of all the processes  
case 3:
      strcpy(key,"ps axo pid");
      strcat(key,name);
      system(key);
      //4-to stop a specific process
      break;
case 4:
      printf("1-to kill \n 2-to run \n ");

      scanf("%d",&x); 
      char t=getchar();     
      switch(x){
            case 1:
              strcpy(signals,"ps -A");
              system(signals);
              strcpy(key,"kill ");
	      printf("Enter id of the process you want to stop \n");
	      gets(name);
	      strcat(key,name);
	      system(key);
	      printf(" the process has been kill \n");
	      break;
	    case 2:
	    
             printf("enter the process name you want to run:\n");
             gets(name);
             strcpy(key,"");
             strcat(key,name);
              strcat(key," ");
             strcat(key,"&");
             system(key);
             
	  	   break;
	    default: printf("Enter correct choise\n");
	      
      
      }
      
      
      
      break;
      //5-Send specific signals to specific process
case 5:

       strcpy(key1,"kill -l");
       system(key1);
       strcpy(key2,"ps -A");
       system(key2);
       strcpy(key,"kill -");
       printf("enter your signal number :");
       gets(signals);
       strcat(key,signals);
       strcat(key," ");
       printf("enter your process id : ");
       gets(name);
       strcat(key,name);
       system(key);	

      break;
case 6: exit(0);
   
defulat:
      printf("enter correct choice \n");
}
}
}
    return 0;
}
