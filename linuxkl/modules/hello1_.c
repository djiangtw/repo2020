#include <linux/init.h>
#include <linux/module.h>

static int __init hello1_init(void)
{
    printk("hello danny!\n");
    return 0;
}

static void __exit hello1_exit(void)
{
    printk("goodbye danny!\n");
}

module_init(hello1_init);
module_exit(hello1_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Danny Jiang");
MODULE_DESCRIPTION("hello danny kernel module");
MODULE_ALIAS("hello1");
