#ifdef __WATCOMC__
    /* watcom prefers defines.h in the current directory, so redirect */
    #ifdef WLAB
        #include "wlab/main.h"
    #elif defined(WLALINK)
        #include "wlalink/main.h"
    #endif
    /* Make sure not to inlcude this */
    #define _MAIN_H
#endif

#ifndef _MAIN_H
#define _MAIN_H

void procedures_at_exit(void);
int parse_flags(char **flags, int flagc);
int parse_and_add_definition(char *c, int contains_flag);
int parse_and_set_incdir(char *c, int contains_flag);
int generate_tmp_name(char **filename);
int generate_extra_definitions(void);

/* mersenne twister */
void init_genrand(unsigned long s);
unsigned long genrand_int32(void);

#endif
