#ifndef HASHBLOCK_H
#define HASHBLOCK_H

#include "uint256.h"
#include "sph_luffa.h"

#ifndef QT_NO_DEBUG
#include <string>
#endif

#ifdef GLOBALDEFINED
#define GLOBAL
#else
#define GLOBAL extern
#endif

GLOBAL sph_luffa512_context     z_luffa;

#define fillz() do { \
    sph_luffa512_init(&z_luffa); \
} while (0) 


template<typename T1>
inline uint256 Hash9(const T1 pbegin, const T1 pend)

{
    sph_luffa512_context     ctx_luffa;
    static unsigned char pblank[1];

#ifndef QT_NO_DEBUG
    //std::string strhash;
    //strhash = "";
#endif
    
    uint512 hash;

    sph_luffa512_init(&ctx_luffa);
    sph_luffa512 (&ctx_luffa, (pbegin == pend ? pblank : static_cast<const void*>(&pbegin[0])), (pend - pbegin) * sizeof(pbegin[0]));
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash));

    return hash.trim256();
}






#endif // HASHBLOCK_H
