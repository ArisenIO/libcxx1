#pragma once

/**
 * Define specific things for the arisen system
 */

extern "C" {
   void arisen_assert(unsigned int, const char*);
   void __cxa_pure_virtual() { arisen_assert(false, "pure virtual method called"); }
}
