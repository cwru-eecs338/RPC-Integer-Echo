RPC Echo Application
====================

Normal compilation:
----------------------
* <code>make</code>

To manually generate the C code for the RPC protocol:
----------------------
* <code>rpcgen test.x</code>

To manually compile the client:
----------------------
* <code>gcc -c test_clnt.c</code>
* <code>gcc -c client.c</code>
* <code>gcc -o client client.o test_clnt.o</code>

To manually compile the server:
----------------------
* <code>gcc -c test_svc.c</code>
* <code>gcc -c server.c</code>
* <code>gcc -o server server.o test_svc.o</code>

Client Usage:
-------------
* <code>./client HOSTNAME i</code>
* HOSTNAME is the address of the machine where server is running, i.e. eecslinab.case.edu
* i is any integer value
* If i == -1, this tells the server to terminate: <code>./client HOSTNAME -1</code>
