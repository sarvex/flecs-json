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

#ifndef SERIALIZE_ENTITY_BAKE_CONFIG_H
#define SERIALIZE_ENTITY_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_components_meta.h>
#include <flecs_json.h>

/* Headers of private dependencies */
#ifdef SERIALIZE_ENTITY_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef SERIALIZE_ENTITY_STATIC
  #if SERIALIZE_ENTITY_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define SERIALIZE_ENTITY_API __declspec(dllexport)
  #elif SERIALIZE_ENTITY_IMPL
    #define SERIALIZE_ENTITY_API __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define SERIALIZE_ENTITY_API __declspec(dllimport)
  #else
    #define SERIALIZE_ENTITY_API
  #endif
#else
  #define SERIALIZE_ENTITY_API
#endif

#endif

