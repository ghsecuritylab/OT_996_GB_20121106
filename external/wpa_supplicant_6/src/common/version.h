#ifndef VERSION_H
#define VERSION_H

#ifndef VERSION_STR_POSTFIX
#ifdef ANDROID_BRCM_P2P_PATCH
#define VERSION_STR_POSTFIX "07"
#else
#define VERSION_STR_POSTFIX ""
#endif
#endif /* VERSION_STR_POSTFIX */

#define VERSION_STR "0.8.x" VERSION_STR_POSTFIX
#endif /* VERSION_H */