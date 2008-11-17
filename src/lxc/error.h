/*
 * lxc: linux Container library
 *
 * (C) Copyright IBM Corp. 2007, 2008
 *
 * Authors:
 * Daniel Lezcano <dlezcano at fr.ibm.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef __lxc_error_h
#define __lxc_error_h

typedef enum {
	LXC_ERROR_EMPTY,
	LXC_ERROR_BUSY,
	LXC_ERROR_ALREADY_EXISTS,
	LXC_ERROR_NOT_FOUND,
	LXC_ERROR_PERMISSION_DENIED,
	LXC_ERROR_WRONG_COMMAND,

	LXC_ERROR_CONF_CGROUP,
	LXC_ERROR_CONF_MOUNT,
	LXC_ERROR_CONF_UTSNAME,
	LXC_ERROR_CONF_NETWORK,
	LXC_ERROR_CONF_ROOTFS,

	LXC_ERROR_SETUP_CGROUP,
	LXC_ERROR_SETUP_MOUNT,
	LXC_ERROR_SETUP_UTSNAME,
	LXC_ERROR_SETUP_NETWORK,
	LXC_ERROR_SETUP_ROOTFS,

	LXC_ERROR_INTERNAL,

	LXC_LAST_ERROR,
} lxc_error_t;

#endif