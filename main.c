#include<linux/module.h>

/* Module initialization */

static int __init helloworld_init(void)
{
/* It's some kind of wrapper of prink function */

	pr_info("Hello_world]\n");

	return 0;
}


/* Module clean-up function  */

void __exit helloworld_cleanup(void)
{
	pr_info("Good bye world\n");
}


module_init(helloworld_init);
module_exit(helloworld_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ME");
MODULE_DESCRIPTION("A simple hello world kernel module");
MODULE_INFO(board,"Beaglebone black REV A5");
