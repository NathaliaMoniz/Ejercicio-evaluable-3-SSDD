/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "claves_inter.h"
#include "claves.h"
#include "./lista/list.h"
#include "./lista/list.c"

List my_list;

bool_t
d_init_1_svc(int *result, struct svc_req *rqstp)
{
	bool_t retval;
    retval = TRUE;
	*result = iniciar(&my_list);

	return retval;
}

bool_t
d_set_value_1_svc(int arg1, char_array arg2, int arg3, double_array arg4, int *result,  struct svc_req *rqstp)
{
	bool_t retval;
	retval = TRUE;
	
	double V_value2[arg3];
	for
	
	*result = set(&my_list, arg1, arg2, arg3, V_value2);
	printList(my_list);
	return retval;
}

bool_t
d_get_value_1_svc(int arg1, int *result,  struct svc_req *rqstp)
{
	bool_t retval;

	/*
	 * insert server code here
	 */

	return retval;
}

bool_t
d_modify_value_1_svc(int arg1, char_array arg2, int arg3, double_array arg4, int *result,  struct svc_req *rqstp)
{
	bool_t retval;

	/*
	 * insert server code here
	 */

	return retval;
}

bool_t
d_delete_key_1_svc(int arg1, int *result,  struct svc_req *rqstp)
{
	bool_t retval;

	/*
	 * insert server code here
	 */

	return retval;
}

bool_t
d_exist_1_svc(int arg1, int *result,  struct svc_req *rqstp)
{
	bool_t retval;

	/*
	 * insert server code here
	 */

	return retval;
}

int
key_value_service_1_freeresult (SVCXPRT *transp, xdrproc_t xdr_result, caddr_t result)
{
	xdr_free (xdr_result, result);

	/*
	 * Insert additional freeing code here, if needed
	 */

	return 1;
}