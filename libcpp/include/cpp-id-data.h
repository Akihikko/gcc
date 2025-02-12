/* Structures that hang off cpp_identifier, for PCH.
   Copyright (C) 1986-2018 Free Software Foundation, Inc.

This program is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3, or (at your option) any
later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#include "cpplib.h"

/* Chained list of answers to an assertion.  */
struct GTY(()) answer {
  struct answer *next;
  unsigned int count;
  cpp_token GTY ((length ("%h.count"))) first[1];
};

