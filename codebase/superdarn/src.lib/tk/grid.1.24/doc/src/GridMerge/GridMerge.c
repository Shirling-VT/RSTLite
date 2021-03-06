/* GridMerge.c
   ===========
   Author: R.J.Barnes */


#include <stdio.h>
#include <stdlib.h>

#include "rtypes.h"
#include "rtime.h"
#include "dmap.h"
#include "limit.h"
#include "griddata.h"
#include "gridread.h"
#include "gridwrite.h"

struct GridData in;
struct GridData out;

int main(int argc,char *argv[]) {
 
  FILE *fp;

  int yr,mo,dy,hr,mt;
  double sc;

  fp=fopen(argv[1],"r");

  if (fp==NULL) {
    fprintf(stderr,"File not found.\n");
    exit(-1);
  }

  while(GridFread(fp,&in) !=-1) {

    TimeEpochToYMDHMS(in.st_time,&yr,&mo,&dy,&hr,&mt,&sc);
    fprintf(stderr,"%.4d-%.2d-%.2d %.2d:%.2d:%.2d pnts=%d\n",
            yr,mo,dy,hr,mt,(int) sc,in.vcnum);

    GridMerge(&in,&out);
    GridFwrite(stdout,&out);
    
  }
 
  fclose(fp);


  return 0;
}
