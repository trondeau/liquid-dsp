/*
 * Copyright (c) 2013 Joseph Gaeddert
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
// data for testing matrix multiplication
//

#include <complex.h>

// matrixf_data_mul_x [size: 5 x 4]
float matrixf_data_mul_x[] = {
   -0.348304957151 /* ( 0, 0) */,
    1.638695955276 /* ( 0, 1) */,
    0.618153512478 /* ( 0, 2) */,
    0.580581486225 /* ( 0, 3) */,
    1.125966548920 /* ( 1, 0) */,
    0.590879321098 /* ( 1, 1) */,
   -0.499333083630 /* ( 1, 2) */,
   -0.144607886672 /* ( 1, 3) */,
   -0.169909551740 /* ( 2, 0) */,
    1.626509308815 /* ( 2, 1) */,
   -0.776567280293 /* ( 2, 2) */,
   -1.341656446457 /* ( 2, 3) */,
    0.492572665215 /* ( 3, 0) */,
   -0.075633287430 /* ( 3, 1) */,
    1.035362601280 /* ( 3, 2) */,
    0.842321217060 /* ( 3, 3) */,
   -0.209287241101 /* ( 4, 0) */,
   -0.789002001286 /* ( 4, 1) */,
   -0.397730469704 /* ( 4, 2) */,
    0.034179374576 /* ( 4, 3) */};

// matrixf_data_mul_y [size: 4 x 3]
float matrixf_data_mul_y[] = {
    0.445414155722 /* ( 0, 0) */,
    0.233421698213 /* ( 0, 1) */,
   -0.682938814163 /* ( 0, 2) */,
   -0.934787094593 /* ( 1, 0) */,
    0.500407993793 /* ( 1, 1) */,
   -0.053248234093 /* ( 1, 2) */,
   -0.784089267254 /* ( 2, 0) */,
    0.127269089222 /* ( 2, 1) */,
   -0.477077603340 /* ( 2, 2) */,
   -0.105383664370 /* ( 3, 0) */,
   -1.556528329849 /* ( 3, 1) */,
   -0.184585332870 /* ( 3, 2) */};

// matrixf_data_mul_z [size: 5 x 3]
float matrixf_data_mul_z[] = {
   -2.232843128510 /* ( 0, 0) */,
   -0.086305075740 /* ( 0, 1) */,
   -0.251460714553 /* ( 0, 2) */,
    0.355936096586 /* ( 1, 0) */,
    0.720042365177 /* ( 1, 1) */,
   -0.535516414414 /* ( 1, 2) */,
   -0.845833288222 /* ( 2, 0) */,
    2.763750941354 /* ( 2, 1) */,
    0.647562038031 /* ( 2, 2) */,
   -0.610483740991 /* ( 3, 0) */,
   -1.102197535527 /* ( 3, 1) */,
   -0.981798103518 /* ( 3, 2) */,
    0.952583633427 /* ( 4, 0) */,
   -0.547495051253 /* ( 4, 1) */,
    0.368382631550 /* ( 4, 2) */};

