#include <linux/module.h>
#include <linux/kernel.h>

int 
init_module(void){
	printk(KERN_INFO "Hello, World\n");
	return 0;
}

void 
cleanup_module(void){
	printK(KERN_INFO "good bye, world\n");
}
