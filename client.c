#include "test.h"

int main(int argc, char**argv)
{
  CLIENT *cl;
  
  if(argc != 3)
  {
      printf("Usage: ./client HOSTNAME i\n");
      return 1;
  }

  char *server_hostname = argv[1];
  cl = clnt_create(server_hostname, TEST_PROG, TEST_VERS, "udp");
  if(cl == NULL) {
    clnt_pcreateerror("Error creating client");
    exit(EXIT_FAILURE);
  }

  int i = atoi(argv[2]);
  
  if(i == -1)
  {
    test_exit_1(&i, cl);
    printf("Terminated Server\n");
    return 0;
  }
  int* result = test_proc_1(&i, cl);
  printf("Received result %d\n", *result);
  clnt_destroy(cl);
  return 0;
}
