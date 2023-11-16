/* SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause) */
#ifndef __SYSCALL_TRACER_H
#define __SYSCALL_TRACER_H

#define TASK_COMM_LEN 16
#define NAME_MAX 255
#define INVALID_UID ((uid_t)-1)

struct event {
	/* user terminology for pid: */
	pid_t pid;
	uid_t uid;
	int ret;
	int flags;
	char comm[TASK_COMM_LEN];
	char fname[NAME_MAX];
};

#endif /* __SYSCALL_TRACER_H */
