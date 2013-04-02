#include "test.h"

int *test_proc_1_svc(struct test_info *in, struct svc_req *rqstp)
{
	static int response;
	response = in->one + in->two;
	printf("Server Received {%d, %d} and sent %d\n", in->one, in->two, response);
	fflush(NULL);
	return(&response);
}

void *test_exit_1_svc(struct test_info *in, struct svc_req *rqstp)
{
	printf("Request for Termination Received\n");
	fflush(NULL);
	exit(0);
}
