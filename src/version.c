#include <stdio.h>

#include "version.h"

// print full ermiry cloud client version information 
void ermiry_client_version_print_full (void) {

    printf ("\nErmiry's Cloud Client Version: %s\n", ERMIRY_CLIENT_VERSION_NAME);
    printf ("Release Date & time: %s - %s\n", ERMIRY_CLIENT_VERSION_DATE, ERMIRY_CLIENT_VERSION_TIME);
    printf ("Author: %s\n\n", ERMIRY_CLIENT_VERSION_AUTHOR);

}

// print the version id
void ermiry_client_version_print_version_id (void) {

    printf ("\nErmiry's Cloud Client Version ID: %s\n", ERMIRY_CLIENT_VERSION);

}

// print the version name
void ermiry_client_version_print_version_name (void) {

    printf ("\nErmiry's Cloud Client Version: %s\n", ERMIRY_CLIENT_VERSION_NAME);

}