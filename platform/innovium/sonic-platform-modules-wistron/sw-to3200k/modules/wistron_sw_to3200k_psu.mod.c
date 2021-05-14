#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa8a0253, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5467e010, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc441a76, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xe0d28dda, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0x76db3049, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x4e5a2140, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7061cfcb, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6f939a11, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd1d068ac, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba871f5b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3c4c48f4, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x401fb57, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xadfd07f3, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:sw_to3200k_psu1");
MODULE_ALIAS("i2c:sw_to3200k_psu2");
