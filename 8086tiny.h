#ifndef T8086_H
#define T8086_H

extern "C" {
	int t8086_init(int boot_from_hdd, unsigned short *disk_sizes, void *p_gd8086);
	int t8086_tick();
}

#endif // T8086_H
