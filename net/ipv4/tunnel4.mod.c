#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x54529488, "module_layout" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x9b6df7ab, "icmp_send" },
	{ 0x21185463, "mutex_unlock" },
	{ 0xdf832e16, "inet_del_protocol" },
	{ 0x4afd4aff, "__pskb_pull_tail" },
	{ 0x985558a1, "printk" },
	{ 0xbfaf74ea, "mutex_lock" },
	{ 0xba6b26dc, "inet_add_protocol" },
	{ 0xe0b04c98, "kfree_skb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5B64D998DBFEF76CF2D3311");
