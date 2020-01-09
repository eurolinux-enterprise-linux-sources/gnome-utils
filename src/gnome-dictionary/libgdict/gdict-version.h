/* gdict-version.h - convenience version header for libgdict
 *
 * Copyright (C) 2005  Emmanuele Bassi <ebassi@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 */

#ifndef __GDICT_VERSION_H__
#define __GDICT_VERSION_H__

#include <glib.h>

G_BEGIN_DECLS

/**
 * GDICT_MAJOR_VERSION:
 *
 * FIXME
 */
#define GDICT_MAJOR_VERSION	(0)

/**
 * GDICT_MINOR_VERSION:
 *
 * FIXME
 */
#define GDICT_MINOR_VERSION	(11)

/**
 * GDICT_MICRO_VERSION:
 *
 * FIXME
 */
#define GDICT_MICRO_VERSION	(0)

/**
 * GDICT_VERSION:
 *
 * FIXME
 *
 * Since: 0.11
 */
#define GDICT_VERSION           (0.11.0)

/**
 * GDICT_VERSION_S:
 *
 * FIXME
 * 
 * Since: 0.11
 */
#define GDICT_VERSION_S         "0.11.0"

/**
 * GDICT_VERSION_HEX:
 *
 * FIXME
 *
 * Since: 0.11
 */
#define GDICT_VERSION_HEX       (GDICT_MAJOR_VERSION << 24 | \
                                 GDICT_MINOR_VERSION << 16 | \
                                 GDICT_MICRO_VERSION << 8)

#define GDICT_CHECK_VERSION(major,minor,micro)	\
        (((major) >= GDICT_MAJOR_VERSION) || \
         (((major) == GDICT_MAJOR_VERSION) && ((minor) >= GDICT_MINOR_VERSION)) || \
         (((major) == GDICT_MAJOR_VERSION) && ((minor) == GDICT_MINOR_VERSION) && ((micro) >= GDICT_MICRO_VERSION)))

extern guint gdict_major;
extern guint gdict_minor;
extern guint gdict_micro;

gboolean gdict_check_version (guint required_major,
                              guint required_minor,
                              guint required_micro);

G_END_DECLS

#endif /* __GDICT_VERSION_H__ */
