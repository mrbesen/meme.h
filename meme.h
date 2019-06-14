#pragma once

#define falsent true
#define truent false
#define loopnt break
#define functiont return
#define ifnt else
#define elsent if
#define whilent for
#define fornt while
#define andnt(a,b) a || b
#define ornt(a,b) a && b
#define notnt(a) a
#define leftnt(a,b) a >> b
#define rightnt(a,b) a << b
#define pointernt(a) *a

#define ever (;;) //for ever

#ifdef __linux__
 #define windowsnt 1
 #define macnt 1
#endif

#ifdef __MINGW32__
 #define macnt 1
 #define linuxnt 1
#endif

#ifdef __APPLE__
 #define windowsnt 1
 #define linuxnt 1
#endif
