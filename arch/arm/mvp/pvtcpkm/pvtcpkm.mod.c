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
	{ 0xb482dc01, "module_layout" },
	{ 0x202c73d0, "kobject_put" },
	{ 0x74d73d75, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4c488a10, "put_pid" },
	{ 0xdfd4df13, "CommSvc_Zombify" },
	{ 0xb28358de, "kernel_sendmsg" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x777f747d, "CommSvc_Unlock" },
	{ 0x97255bdf, "strlen" },
	{ 0xd3b31cd4, "__alloc_workqueue_key" },
	{ 0xa33b5876, "CommSvc_Alloc" },
	{ 0x31ef76fd, "sock_release" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x86cb7b28, "init_timer_key" },
	{ 0x995323a, "sock_create_kern" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0x661dfca, "mutex_unlock" },
	{ 0xe84dd843, "kobject_del" },
	{ 0x999e8297, "vfree" },
	{ 0x27064383, "kernel_listen" },
	{ 0x232a8891, "__put_net" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0xffb43630, "mutex_trylock" },
	{ 0x3c018046, "kernel_sock_ioctl" },
	{ 0x810b3618, "param_ops_string" },
	{ 0xf412c9ca, "CommSvc_Write" },
	{ 0x7b1010cc, "Mvpkm_vmwareUid" },
	{ 0xb5784f81, "kernel_setsockopt" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xbda16444, "kernel_connect" },
	{ 0xb86e4ab9, "random32" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x922260b3, "CommSvc_DispatchUnlock" },
	{ 0x6212e94a, "mutex_lock_interruptible" },
	{ 0x481abf76, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x71c90087, "memcmp" },
	{ 0x7eed8d81, "kobject_init_and_add" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xda734839, "mutex_lock" },
	{ 0x882acd99, "destroy_workqueue" },
	{ 0xe31e6dfa, "kernel_sock_shutdown" },
	{ 0x521445b, "list_del" },
	{ 0x465757c3, "cpu_present_mask" },
	{ 0x8867b3e8, "sk_free" },
	{ 0x3e5170c8, "kernel_getsockname" },
	{ 0xfc766aa8, "kernel_getpeername" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2eb3c64f, "CommSvc_Lock" },
	{ 0xd0fa5aa0, "pid_task" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x713a91a, "init_net" },
	{ 0x42608a46, "nf_unregister_hooks" },
	{ 0xada3f3f4, "flush_workqueue" },
	{ 0xd89b02fd, "CommSvc_RegisterImpl" },
	{ 0x2d1484be, "module_put" },
	{ 0x33389607, "kernel_getsockopt" },
	{ 0xd29b9e4a, "queue_delayed_work_on" },
	{ 0xa6c5fbea, "CommSvc_GetState" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xe49775f9, "flush_delayed_work" },
	{ 0xc27487dd, "__bug" },
	{ 0x8a018058, "kmem_cache_alloc_trace" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x8187eef8, "kernel_recvmsg" },
	{ 0x49c9b769, "kernel_accept" },
	{ 0xc08a0f3a, "find_get_pid" },
	{ 0x26477c07, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x29abe2e6, "nf_register_hooks" },
	{ 0xfd12932f, "CommSvc_ScheduleAIOWork" },
	{ 0x742fe1fb, "kernel_bind" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x38e8378d, "pgprot_kernel" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9be81239, "CommSvc_UnregisterImpl" },
	{ 0x6e04b501, "CommSvc_GetTranspInitArgs" },
	{ 0xdd8d50e2, "queue_delayed_work" },
	{ 0x419c4694, "CommSvc_WriteVec" },
	{ 0x2a9aa956, "Mvpkm_FindVMNamedKSet" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=commkm,mvpkm";


MODULE_INFO(srcversion, "606EE0797294E45A3318567");
