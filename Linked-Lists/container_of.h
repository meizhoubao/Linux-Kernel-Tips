#ifndef _LINKED-LISTS_CONTAINER_OF_H
#define _LINKED-LISTS_CONTAINER_OF_H

#include "offsetof.h"

/**
 * container_of - cast a member of a structrue out to the containing structure
 * @ptr:    the pointer to the member.
 * @type:   the type of the container struct this is embedded to.
 * @member: the name of member within the struct.
 */
#define container_of(ptr, type, member) ({        \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);   \
        (type *)( (char *)__mptr - offsetof(type, member) );})

#endif
