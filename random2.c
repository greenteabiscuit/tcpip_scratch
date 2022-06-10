#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <netinet/ip.h>
#include "sock.h"

int main(){
u_int16_t a;

int optionLen;

u_int16_t b;
u_int16_t *baddr = (u_int16_t *)&b;
u_int32_t i32 = 0x12345678;
u_int8_t *ch_i32 = (u_int8_t *)&i32;

struct ip *ip;
	ip=(struct ip *)ch_i32;
	b=1;
	a=1;
	printf("%d addr: %d\n", b, *baddr);

	optionLen=ip->ip_hl;
	printf("%d\n", optionLen);

	printf("%d checksum\n", a);
	return(1);
}
