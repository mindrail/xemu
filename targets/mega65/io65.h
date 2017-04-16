/* Mega-65 emulator, I/O decoding part (used by memory65.h mainly)
   Also glue function for DMA-level I/O access.
   Copyright (C)2017 LGB (Gábor Lénárt) <lgblgblgb@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#ifndef __XEMU_MEGA65_IO65_H_INCLUDED
#define __XEMU_MEGA65_IO65_H_INCLUDED

#include "xemu/cia6526.h"
#include "xemu/sid.h"

extern Uint8 io_reader_internal_decoder ( int addr );
extern void  io_writer_internal_decoder ( int addr, Uint8 data );
extern Uint8 io_read  ( int addr );
extern void  io_write ( int addr, Uint8 data );

#define kicked_hypervisor gs_regs[0x67E]
extern Uint8 gs_regs[0x1000];
extern int   fpga_switches;
extern struct Cia6526 cia1, cia2;		// CIA emulation structures for the two CIAs
extern struct SidEmulation sid1, sid2;		// the two SIDs


#endif
