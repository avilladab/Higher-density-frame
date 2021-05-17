#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/******************************************************************************/
int main(int argc, char **argv){
  double Rx[atoi(argv[1])],Ry[atoi(argv[1])],Rz[atoi(argv[1])];
  double xr[atoi(argv[1])],yr[atoi(argv[1])],zr[atoi(argv[1])];
  int i,j,l,lb;
  char el,ifn[100],text[100],textb[100];
  FILE *init;

  sprintf(ifn,argv[2]);
  init = fopen(ifn,"r");
  l=lb=0;
  while(1){
    fscanf(init,"%d\n%[^\n]\n",&l,&text);
    for(i=0;i<l;i++) fscanf(init,"%c\t%f\t%f\t%f\n",&el,&Rx[i],&Ry[i],&Rz[i]);
    if(l>lb){
      lb=l;
      sprintf(textb,text);
      printf("%d\t%s\n",lb,textb);
      for(i=0;i<lb;i++){
        xr[i]=Rx[i];
        yr[i]=Ry[i];
        zr[i]=Rz[i];
      }
    }
    if(feof(init)) break;
  }
  fclose(init);
  sprintf(ifn,"frame");
  init = fopen(ifn,"w");
  for(i=0;i<lb;i++) fprintf(init,"%d\t%f\t%f\t%f\n",i+1,xr[i],yr[i],zr[i]);
  fclose(init);
  return 0;
}
