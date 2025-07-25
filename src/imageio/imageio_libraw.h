/*
    This file is part of darktable,
    Copyright (C) 2021-2025 darktable developers.

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "common/image.h"
#include "common/mipmap_cache.h"

gboolean dt_libraw_lookup_makermodel(const char *maker,
                                     const char *model,
                                     char *mk, int mk_len,
                                     char *md, int md_len,
                                     char *al, int al_len);

dt_imageio_retval_t dt_imageio_open_libraw(dt_image_t *img,
                                           const char *filename,
                                           dt_mipmap_buffer_t *buf);

// clang-format off
// modelines: These editor modelines have been set for all relevant files by tools/update_modelines.py
// vim: shiftwidth=2 expandtab tabstop=2 cindent
// kate: tab-indents: off; indent-width 2; replace-tabs on; indent-mode cstyle; remove-trailing-spaces modified;
// clang-format on
