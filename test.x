struct test_info {
	int one;
	int two;
};

program TEST_PROG
{
	version TEST_VERS
	{
		int TEST_PROC(struct test_info) = 1;
		void TEST_EXIT(struct test_info) = 2;
	} = 1;
} = 0x21140000;
