#ifndef SCAN_H
#define SCAN_H

extern unsigned int scan_uint();
extern unsigned int scan_xint();
extern unsigned int scan_nbbint();
extern unsigned int scan_ushort();
extern unsigned int scan_xshort();
extern unsigned int scan_nbbshort();
extern unsigned int scan_ulong();
extern unsigned int scan_xlong();
extern unsigned int scan_nbblong();

extern unsigned int scan_plusminus();
extern unsigned int scan_0x();

extern unsigned int scan_whitenskip();
extern unsigned int scan_nonwhitenskip();
extern unsigned int scan_charsetnskip();
extern unsigned int scan_noncharsetnskip();
/* XXX: these aren't unique in the first 8 characters. i don't care. */

extern unsigned int scan_strncmp();
extern unsigned int scan_memcmp();

#endif
