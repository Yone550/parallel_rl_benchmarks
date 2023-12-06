#ifndef _BLACKJACK_TRAIN_MAIN_H
#define _BLACKJACK_TRAIN_MAIN_H
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "pythontarget.h"
#include "include/core/reactor.h"
#include "_learnerreactor.h"
#include "__lf_gendelay_0.h"
#include "_rolloutreactor.h"
#include "_replaybufferreactor.h"
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
#include "pythontarget.h"
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    
    
} _blackjack_train_main_main_self_t;
_blackjack_train_main_main_self_t* new__blackjack_train_main();
#endif // _BLACKJACK_TRAIN_MAIN_H
