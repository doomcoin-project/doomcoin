/* Copyright (c) 2014, Doomcoin Developers */
/* See LICENSE for licensing information */

/**
 * \file doomcoin.h
 * \brief Headers for doomcoin.cpp
 **/

#ifndef TOR_DOOMCOIN_H
#define TOR_DOOMCOIN_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* doomcoin_tor_data_directory(
    );

    char const* doomcoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

