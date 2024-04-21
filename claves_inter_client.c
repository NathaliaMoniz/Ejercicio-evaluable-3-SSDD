/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "claves_inter.h"


void
key_value_service_1(char *host)
{
	CLIENT *clnt;
	enum clnt_stat retval_1;
	int result_1;
	enum clnt_stat retval_2;
	int result_2;
	int d_set_value_1_arg1;
	char* d_set_value_1_arg2;
	int d_set_value_1_arg3;
	double_array d_set_value_1_arg4;
	enum clnt_stat retval_3;
	int result_3;
	int d_get_value_1_arg1;
	enum clnt_stat retval_4;
	int result_4;
	int d_modify_value_1_arg1;
	char* d_modify_value_1_arg2;
	int d_modify_value_1_arg3;
	double_array d_modify_value_1_arg4;
	enum clnt_stat retval_5;
	int result_5;
	int d_delete_key_1_arg1;
	enum clnt_stat retval_6;
	int result_6;
	int d_exist_1_arg1;

#ifndef	DEBUG
	clnt = clnt_create (host, KEY_VALUE_SERVICE, KEY_VALUE_SERVICE_VERSION, "tcp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	retval_1 = d_init_1(&result_1, clnt);
	printf("iniciado\n");
	fflush(stdout);
	if (retval_1 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}

	d_set_value_1_arg1 = 6;
	d_set_value_1_arg2 = "hola";
	d_set_value_1_arg3 = 2;
	d_set_value_1_arg4.double_array_len = 2;
	d_set_value_1_arg4.double_array_val = malloc(d_set_value_1_arg4.double_array_len * sizeof(double));
	for (int i = 0; i < d_set_value_1_arg3; i++){
		d_set_value_1_arg4.double_array_val[i] = 1.4*(3.2);
	}
	// d_set_value_1_arg4.double_array_val[0] = 3.10;
	// printf("6\n");
	// fflush(stdout);
	// d_set_value_1_arg4.double_array_val[1] = 0.10;

	retval_2 = d_set_value_1(d_set_value_1_arg1, d_set_value_1_arg2, d_set_value_1_arg3, d_set_value_1_arg4, &result_2, clnt);
	if (retval_2 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
	
	// retval_3 = d_get_value_1(d_get_value_1_arg1, &result_3, clnt);
	// if (retval_3 != RPC_SUCCESS) {
	// 	clnt_perror (clnt, "call failed");
	// }

	d_modify_value_1_arg1 = 6;
	d_modify_value_1_arg2 = "valor cambiado";
	d_modify_value_1_arg3 = 1;
	d_modify_value_1_arg4.double_array_len = 2;
	d_modify_value_1_arg4.double_array_val = malloc(d_modify_value_1_arg4.double_array_len * sizeof(double));
	d_modify_value_1_arg4.double_array_val[0] = 6.9;
	retval_4 = d_modify_value_1(d_modify_value_1_arg1, d_modify_value_1_arg2, d_modify_value_1_arg3, d_modify_value_1_arg4, &result_4, clnt);
	if (retval_4 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}

	d_delete_key_1_arg1 = 6;
	retval_5 = d_delete_key_1(d_delete_key_1_arg1, &result_5, clnt);
	if (retval_5 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}

	d_set_value_1_arg1 = 8;
	d_set_value_1_arg2 = "hehe";
	d_set_value_1_arg3 = 2;
	d_set_value_1_arg4.double_array_len = 2;
	d_set_value_1_arg4.double_array_val = malloc(d_set_value_1_arg4.double_array_len * sizeof(double));

	for (int i = 0; i < d_set_value_1_arg3; i++){
		d_set_value_1_arg4.double_array_val[i] = 1.4*(i*3.2);
	}

	retval_2 = d_set_value_1(d_set_value_1_arg1, d_set_value_1_arg2, d_set_value_1_arg3, d_set_value_1_arg4, &result_2, clnt);
	if (retval_2 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}

	d_exist_1_arg1 = 6;
	retval_6 = d_exist_1(d_exist_1_arg1, &result_6, clnt);
	if (retval_6 != RPC_SUCCESS) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	 char *host;
	// printf("eoeoeoe\n");
	// if (argc < 2) {
	// 	printf ("usage: %s server_host\n", argv[0]);
	// 	exit (1);
	//}
	host = argv[1];
	key_value_service_1 (host);
exit (0);
}
