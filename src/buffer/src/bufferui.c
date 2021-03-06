/*
 * Copyright (c) 2007, 2008, 2009, 2010 Joseph Gaeddert
 * Copyright (c) 2007, 2008, 2009, 2010 Virginia Polytechnic
 *                                      Institute & State University
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// Buffer: unsigned int [DEPRECATED]
//

#include "liquid.internal.h"

#define BUFFER_TYPE_UINT

#define BUFFER(name)    LIQUID_CONCAT(bufferui, name)
#define WDELAY(name)    LIQUID_CONCAT(wdelayui, name)
#define WINDOW(name)    LIQUID_CONCAT(windowui, name)

#define T unsigned int
#define BUFFER_PRINT_LINE(B,I) \
    printf("\t: %u", B->v[I]);
#define BUFFER_PRINT_VALUE(V) \
    printf("\t: %u", V);


#include "buffer.c"
#include "window.c"
#include "wdelay.c"

