#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>
 
static int __init ofd_init(void) /* Constructor */
{
	    printk(KERN_INFO "rako: driver registered");
		    return 0;
}
 
static void __exit ofd_exit(void) /* Destructor */
{
	    printk(KERN_INFO "rako: driver unregistered");
}
 
module_init(ofd_init);
module_exit(ofd_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Raspberry Korea raphotame@gmail.com");
MODULE_DESCRIPTION("Device Driver Example");
