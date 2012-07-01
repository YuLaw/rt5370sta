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
	{ 0xf6628fc9, "module_layout" },
	{ 0x919a8eca, "register_netdevice" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0x3fa913da, "strspn" },
	{ 0xdb97fba0, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xb5dcab5b, "remove_wait_queue" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x546fa66c, "netif_carrier_on" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x84a24445, "skb_clone" },
	{ 0xd74ee220, "dev_get_by_name" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0x327207e3, "netif_carrier_off" },
	{ 0x6efb6547, "usb_kill_urb" },
	{ 0x3e9889a7, "filp_close" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x95272a9e, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x467979d9, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5c6048e6, "netif_rx" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xde0bdcff, "memset" },
	{ 0x91ff2d9f, "dev_alloc_skb" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0xf5d0b8cb, "current_task" },
	{ 0x3ac8c215, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x251016b9, "kthread_stop" },
	{ 0x3032758b, "__tracepoint_module_get" },
	{ 0x2fa5a500, "memcmp" },
	{ 0xdd0b6a21, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x343f725f, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x31ef6253, "wireless_send_event" },
	{ 0xd6dbe3b3, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xac9ad832, "skb_push" },
	{ 0xe45a9849, "dev_close" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x698f2512, "kill_pid" },
	{ 0x361dbd01, "skb_pull" },
	{ 0x288fd9c4, "usb_free_coherent" },
	{ 0xffc49657, "dev_kfree_skb_any" },
	{ 0x61651be, "strcat" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x46c8ecbb, "module_put" },
	{ 0xc4980b89, "skb_copy_expand" },
	{ 0xb2068ac2, "netif_device_attach" },
	{ 0xdc9f2ef7, "usb_submit_urb" },
	{ 0x2e0310d0, "netif_device_detach" },
	{ 0x77782dca, "__alloc_skb" },
	{ 0x2776c39f, "usb_get_dev" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xed6547af, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x141a7b07, "eth_type_trans" },
	{ 0x50053c53, "wake_up_process" },
	{ 0x5e85b764, "pskb_expand_head" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xcf21d241, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x5860aad4, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x71e3cecb, "up" },
	{ 0x63afefa5, "usb_register_driver" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x28166ed8, "unregister_netdev" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x50720c5f, "snprintf" },
	{ 0xe7683d3, "__netif_schedule" },
	{ 0xa3a5be95, "memmove" },
	{ 0xb008c80b, "usb_alloc_coherent" },
	{ 0x5caf4af1, "skb_put" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xb2798ef9, "dev_get_drvdata" },
	{ 0x459459ad, "usb_free_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x76e9dff4, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbaa5ed4d, "filp_open" },
	{ 0x8dffc625, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v148Fp3070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp3071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp3072d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3820d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p871Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p822Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p871Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p822Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p003Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0042d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0048d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0047d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p005Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14B2p3C12d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v18C5p0012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083Ap7511d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApA701d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApA702d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9703d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9705d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9706d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9707d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9708d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1740p9709d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3273d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3305d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1044p800Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB25d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p5201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p3070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p3071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p3072d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7711d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p4085d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A32p0304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1EDAp2310d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C0Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C0Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C0Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C0Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C16d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C17d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1D4Dp000Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1D4Dp000Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1D4Dp0011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p5257d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p0283d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0945d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0947d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0948d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v203Dp1480d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20B8p8888d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p1784d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v203Dp14A9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p899Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3870d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p870Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p6899d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3871d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p871Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p822Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p3821d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0p821Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5A57p0282d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v083ApA703d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3321d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07FAp7712d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p0166d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p341Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p341Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p343Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1EDAp2012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp3370d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp5370d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v148Fp5372d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3365d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3329d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "2AD7E1E466B22E9E754614F");
