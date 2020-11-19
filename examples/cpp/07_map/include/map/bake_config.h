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

#ifndef MAP_BAKE_CONFIG_H
#define MAP_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_components_meta.h>
#include <flecs_json.h>

/* Headers of private dependencies */
#ifdef MAP_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef MAP_STATIC
  #if MAP_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define MAP_API __declspec(dllexport)
  #elif MAP_IMPL
    #define MAP_API __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define MAP_API __declspec(dllimport)
  #else
    #define MAP_API
  #endif
#else
  #define MAP_API
#endif

#endif

