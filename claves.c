// implementacion de servicios
#include <stdio.h>
#include <netdb.h>
#include <strings.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

#include "claves.h"
#include "claves_inter.h"
#include <stdio.h> 
#include <stdlib.h>


char *ip(){
    // Obtener la variable de entorno IP_TUPLAS
    char *ip_tuplas; 
 
    ip_tuplas = getenv("IP_TUPLAS"); 
    if (ip_tuplas == NULL){ 
        printf("La variable de entorno IP_TUPLAS no está definida.\n"); 
        return NULL; 
    } 
    else 
        printf("Variable IP_TUPLAS definida con valor %s\n", ip_tuplas); 

    return ip_tuplas;
}

int init(){
    
    CLIENT *clnt;
    char *ip_tuplas = ip();
    enum clnt_stat retval;
    int res;
    char *host;
    
    host = ip_tuplas;

    /* Paso 1: localizar al servidor */
    clnt = clnt_create(host, KEY_VALUE_SERVICE, KEY_VALUE_SERVICE_VERSION, "tcp");
    if (clnt == NULL) {
        clnt_pcreateerror(host);
        exit(1);
    }
    
    /* Paso 2: Invocar el procedimiento remoto */
    retval = d_init_1(&res, clnt);
    if (retval != RPC_SUCCESS) {
        clnt_perror(clnt, "call failed:");
        return -1;
    }
    printf("Resultado %d\n", res);

    /* Destruir el manejador */
    clnt_destroy( clnt );
    return 0;
}

int set_value(int key, char *value1, int N_value2, double *V_value2){
    
    return 0;
}

int get_value(int key, char *value1, int *N_value2, double *V_value2){
    
    return 0;
}

int modify_value(int key, char *value1, int N_value2, double *V_value2){

    return 0;
}

int delete_key(int key){
    
    
    return 0;
}

int exist(int key){
    
    
    return 0;
}