cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)
project(external_proj LANGUAGES CXX)

add_library(externalfunc STATIC externalfunc.cpp externalfunc.h)
