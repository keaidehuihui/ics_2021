#include "local-include/reg.h"
#include <isa.h>

const char *regs[] = {"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2", "s0", "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
                      "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

void isa_reg_display() {
    printf("------------REG INFO------------\n");
    for (int i = 0; i < 32; i++) {
        printf("%s \t0x%08x \t%08d\n", regs[i], cpu.gpr[i]._32, cpu.gpr[i]._32);
    }
    printf("$eip \t0x%x \t%u\n", cpu.pc, cpu.pc);
    printf("---------------END---------------\n");
}

word_t isa_reg_str2val(const char *s, bool *success) { return 0; }
