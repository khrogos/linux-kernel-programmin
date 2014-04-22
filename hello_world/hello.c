#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define AUTHOR "Julien Khrogos Delhaye <khrogos@khrogos.info>"
#define LICENSE "Dual MIT/GPL"
#define DESCRIPTION "Hello, world"

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);

static int 
__init launch(void){
	printk(KERN_DEBUG "Hello, World\n");
	return 0;
}

static void 
__exit destroy(void){
	printk(KERN_DEBUG "good bye, world\n");
}

module_init(launch);
module_exit(destroy);
