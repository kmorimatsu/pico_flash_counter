/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "flash_counter.h"

int main() {
	int i;
	stdio_init_all();
	for(i=5;0<i;i--){
		printf("%d\n",i);
		sleep_ms(1000);
	}
	//erase_flash_data();
	
	while(1){
		// Following two lines takes ~1000 useconds
		i=read_flash_counter();
		increment_flash_counter();
		printf("%04x ",i);
		//sleep_ms(1);
	}
	return 0;
}
