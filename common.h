#define RPC_SVR_PORT 18669 
#define MAX_RPC_CLIENTs 1024

#define MAX_RPC_SERVICEs 2048
#define MAX_SERVICE_METHODs 2048

#define LENGTH_TYPE unsigned int
#define HEAD_LEN sizeof(LENGTH_TYPE)

#define ErrorDie(msg) do { perror((msg)); exit(-1); } while(0);
#define ErrorRet(msg, ret) do { perror((msg)); return (ret); } while(0);


#define ERR_LOG(msg) fprintf(stderr, "%s\n", (msg));
