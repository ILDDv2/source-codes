#include <linux/module.h>
#include <linux/kernel.h>

static int demodev_init(void)
{
	pr_info("++demodev_init()\n");  
	return 0;
}

static void demodev_exit(void)
{
	pr_info("--demodev_exit()\n");
}

module_init(demodev_init);
module_exit(demodev_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ricard_chen@yahoo.com");
MODULE_DESCRIPTION("A simple kernel module as demo");
