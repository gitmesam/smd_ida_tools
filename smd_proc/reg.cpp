//
//	Registers of M68000 (definitions)
//

#include "m68k.hpp"

static char *shnames[] = {
	"M68000",
	NULL
};

static char *lnames[] = {
	"Motorola 68000 (M68K)",
	NULL
};

static char *RegNames[] = {
	"d0", "d1", "d2", "d3", "d4", "d5", "d6", "d7",
	"a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7",
	"pc", "ccr", "sr", "usp", "sp", "cs", "ds"
};

//-----------------------------------------------------------------------
//      Assembler Definition
//-----------------------------------------------------------------------
static asm_t m68k_asm = {
};

//-----------------------------------------------------------------------
//      Processor Definition
//-----------------------------------------------------------------------
processor_t LPH =
{
	IDP_INTERFACE_VERSION,     //kernel version
	PLFM_68K,               //id
	PR_USE32 | PR_DEFSEG32 | PR_ASSEMBLE | PR_ALIGN | PR_SGROTHER | PR_BINMEM | PR_NO_SEGMOVE | PR_CNDINSNS,
	8,                  // 8 bits in a byte for code segments
	8,                  // 8 bits in a byte for other segments

	shnames,
	lnames,

	NULL,//asms,

	NULL,//notify,

	NULL,//header,
	NULL,//footer,

	NULL,//segstart,
	NULL,//segend,

	NULL,//,

	ana,
	emu,
	out,
	outop,

	NULL,
	NULL,
	NULL,
	qnumber(RegNames),
	RegNames,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,

	r_cs,
	r_ds,
	0,
	r_cs,
	r_ds,

	NULL,
	NULL,

	m68k_opcodes::null,
	m68k_opcodes::last,
	Instructions,

	NULL,
	NULL,
	0,
	NULL,
	0, 0, 0, 0,
	NULL, // is_switch
	NULL,
	NULL,
	is_sp_based,
	NULL,
	NULL,
	NULL,
	gen_spcdef,
	0,
	NULL,
	NULL,
	0,
	0
};

//-----------------------------------------------------------------------
