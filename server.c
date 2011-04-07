#include "test.h"

int *test_proc_1_svc(int *in, struct svc_req *rqstp)
{
  static  int response;
  response = *in;
  printf("Server Received %d and sent %d ", *in, response);
  fflush(NULL);
  return(&response);
}
