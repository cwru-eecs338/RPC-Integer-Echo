RPC Echo Application
====================

To compile the client:
----------------------
<code>
gcc -c test_clnt.c
gcc -c client.c
gcc -o client client.o test_clnt.o
</code>

To compile the server:
----------------------
<code>
gcc -c test_svc.c
gcc -c server.c
gcc -o server server.o test_svc.o
</code>

Client Usage:
-------------
* <code>./client HOSTNAME i</code>
* HOSTNAME is the address of the machine where server is running, i.e. eecslinab.case.edu
* i is any integer value