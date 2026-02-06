/*
 * Name: max_sneklang.c
 * Purpose: Compute max Sneklang memory per thread
 * Author: YT
*/

#include <stdio.h>

int max_sneklang_memory(int max_threads, int memory_per_thread)
{
	return max_threads * memory_per_thread;
}

void init_sneklang(int max_threads, int memory_per_thread)
{
	printf("Initializing Sneklang\n");
	printf("Max threads: %d\n", max_threads);
	printf("Memory per thread: %d\n", memory_per_thread);
	int max_memory = max_sneklang_memory(max_threads, memory_per_thread);
	printf("Max memory: %d\n", max_memory);
	printf("=====================================\n");
}

int main(void)
{
	init_sneklang(4 , 512);
	return 0;
}
