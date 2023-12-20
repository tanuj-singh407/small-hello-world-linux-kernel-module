#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple Linux kernel module");
MODULE_VERSION("0.1");

static int __init hello_init(void) {
    pr_info("Hello, World!\n");
    return 0; // Non-zero return means that the module couldn't be loaded.
}

static void __exit hello_exit(void) {
    pr_info("Goodbye, World!\n");
}

module_init(hello_init);
module_exit(hello_exit);
