/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef STRUCT_BAKE_CONFIG_H
#define STRUCT_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_components_meta.h>
#include <flecs_json.h>

/* Headers of private dependencies */
#ifdef STRUCT_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef STRUCT_STATIC
  #if STRUCT_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define STRUCT_API __declspec(dllexport)
  #elif STRUCT_IMPL
    #define STRUCT_API __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define STRUCT_API __declspec(dllimport)
  #else
    #define STRUCT_API
  #endif
#else
  #define STRUCT_API
#endif

#endif

