cmake_minimum_required(VERSION 3.27)
project(lld_problems)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_SOURCE_DIR /Users/nikhilkumar/CacheSystem)

add_executable(lld_problems main.cpp
        cache_system/cache/Cache.hpp
        cache_system/cache/Cache.hpp
        cache_system/eviction_policy/EvictionPolicy.hpp
        cache_system/eviction_policy/LRU.hpp)

include_directories(${CMAKE_SOURCE_DIR}/cache_system/cache)
include_directories(${CMAKE_SOURCE_DIR}/cache_system/eviction_policy)
include_directories(${CMAKE_SOURCE_DIR}/cache_system/exceptions)
include_directories(${CMAKE_SOURCE_DIR}/cache_system/storage)
include_directories(${CMAKE_SOURCE_DIR}/cache_system/utility)