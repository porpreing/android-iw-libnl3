#include <netlink/attr.h>

// comment due to conflict function in netlink lib when compile it using static library

// int nla_put_flag(struct nl_msg *msg, int flag)
// {
// 	return nla_put(msg, flag, 0, NULL);
// }
