/* ConvertFreadFloat.c
   ====================
   Author: R.J.Barnes
*/

#include <stdio.h>
#include <stdlib.h>
#include "rtypes.h"
#include "rconvert.h"

#define FNAME "test.dat"

int main(int argc,char *argv[]) {
  float val;
  FILE *fp;  
  fp=fopen(FNAME,"r");
   
  if (fp==NULL) {
    fprintf(stderr,"File not found.\n");
    exit(-1);
  }
  
  while (ConvertFreadFloat(fp,&val)==0) {
    fprintf(stdout,"%g\n",val);
  }   
  fclose(fp);
  
  return 0;
}
   


