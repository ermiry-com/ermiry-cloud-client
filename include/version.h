#ifndef _ERMIRY_VERSION_H_
#define _ERMIRY_VERSION_H_

#define ERMIRY_CLIENT_VERSION                      	"0.1"
#define ERMIRY_CLIENT_VERSION_NAME                 	"Version 0.1"
#define ERMIRY_CLIENT_VERSION_DATE			        "23/09/2020"
#define ERMIRY_CLIENT_VERSION_TIME			        "23:30 CST"
#define ERMIRY_CLIENT_VERSION_AUTHOR			    "Erick Salas"

// print full ermiry cloud client version information 
extern void ermiry_client_version_print_full (void);

// print the version id
extern void ermiry_client_version_print_version_id (void);

// print the version name
extern void ermiry_client_version_print_version_name (void);

#endif