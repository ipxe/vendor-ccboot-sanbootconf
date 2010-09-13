#ifndef _NIC_H
#define _NIC_H

/*
 * Copyright (C) 2008 Michael Brown <mbrown@fensystems.co.uk>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

extern NTSTATUS find_nic ( PUCHAR mac,
			   NTSTATUS ( *process ) ( PDEVICE_OBJECT pdo,
						   LPWSTR netcfginstanceid,
						   PVOID opaque ),
			   PVOID opaque );

#endif /* _NIC_H */
