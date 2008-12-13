/*
 * See Licensing and Copyright notice in naev.h
 */


#ifndef NDATA_H
#  define NDATA_H


#include <stdint.h>


/*
 * ndata open/close
 */
int ndata_open (void);
void ndata_close (void);

/*
 * General.
 */
int ndata_check( char* path );
int ndata_setPath( char* path );
const char* ndata_name (void);

/*
 * Individual file functions.
 */
void* ndata_read( const char* filename, uint32_t *filesize );
char** ndata_list( const char *path, uint32_t* nfiles );


#endif /* NDATA_H */

