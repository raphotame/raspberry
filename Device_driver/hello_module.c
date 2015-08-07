#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int hello_init(void)
{
	printk("[hello_module] Hello world\n");
	return 0;
}

static void hello_exit(void)
{
	printk("[hello_moudle] Goodbye world\n");
}

module_init(hello_init);
moudle_exit(hello_exit);

MODULE_LICENSE("Dual BSD/GPL");

