#ifndef _LINKED-LISTS_OFFSETOF_H
#define _LINKED-LISTS_OFFSETOF_H

#undef NULL
#define NULL ((void *)0)

#define offsetof(TYPE, MEMBER) ((size_t)&((TYPE *)0)->MEMBER)
#define offsetofend(TYPE, MEMBER) \
        (offsetof(TYPE, MEMBER) + sizeof(((TYPE *)0)->MEMBER)
#endif
