/*
 * Target definitions of errnos. These may be overridden by an
 * architecture specific header if needed.
 *
 * Taken from asm-generic/errno-base.h and asm-generic/errno.h
 */
#if defined TARGET_ABI_IRIX || defined TARGET_ABI_SOLARIS
#define TARGET_EPERM	1	/* Operation not permitted		*/
#define TARGET_ENOENT	2	/* No such file or directory		*/
#define TARGET_ESRCH	3	/* No such process			*/
#define TARGET_EINTR	4	/* Interrupted function call		*/
#define TARGET_EIO	5	/* I/O error				*/
#define TARGET_ENXIO	6	/* No such device or address		*/
#define TARGET_E2BIG	7	/* Arg list too long			*/
#define TARGET_ENOEXEC	8	/* Exec format error			*/
#define TARGET_EBADF	9	/* Bad file number			*/
#define TARGET_ECHILD	10	/* No child processes			*/
#define TARGET_EAGAIN	11	/* Resource temporarily unavailable	*/
#define TARGET_ENOMEM	12	/* Not enough space			*/
#define TARGET_EACCES	13	/* Permission denied			*/
#define TARGET_EFAULT	14	/* Bad address				*/
#define TARGET_ENOTBLK	15	/* Block device required		*/
#define TARGET_EBUSY	16	/* Resource busy			*/
#define TARGET_EEXIST	17	/* File exists				*/
#define TARGET_EXDEV	18	/* Improper link			*/
#define TARGET_ENODEV	19	/* No such device			*/
#define TARGET_ENOTDIR	20	/* Not a directory			*/
#define TARGET_EISDIR	21	/* Is a directory			*/
#define TARGET_EINVAL	22	/* Invalid argument			*/
#define TARGET_ENFILE	23	/* File table overflow			*/
#define TARGET_EMFILE	24	/* Too many open files			*/
#define TARGET_ENOTTY	25	/* Inappropriate I/O control operation	*/
#define TARGET_ETXTBSY	26	/* Text file busy			*/
#define TARGET_EFBIG	27	/* File too large			*/
#define TARGET_ENOSPC	28	/* No space left on device		*/
#define TARGET_ESPIPE	29	/* Illegal seek				*/
#define TARGET_EROFS	30	/* Read only file system		*/
#define TARGET_EMLINK	31	/* Too many links			*/
#define TARGET_EPIPE	32	/* Broken pipe				*/
#define TARGET_EDOM	33	/* Domain error				*/
#define TARGET_ERANGE	34	/* Result too large			*/
#define TARGET_ENOMSG	35	/* No message of desired type		*/
#define TARGET_EIDRM	36	/* Identifier removed			*/
#define TARGET_ECHRNG	37	/* Channel number out of range		*/
#define TARGET_EL2NSYNC 38	/* Level 2 not synchronized		*/
#define TARGET_EL3HLT	39	/* Level 3 halted			*/
#define TARGET_EL3RST	40	/* Level 3 reset			*/
#define TARGET_ELNRNG	41	/* Link number out of range		*/
#define TARGET_EUNATCH 42	/* Protocol driver not attached		*/
#define TARGET_ENOCSI	43	/* No CSI structure available		*/
#define TARGET_EL2HLT	44	/* Level 2 halted			*/
#define TARGET_EDEADLK	45	/* Resource deadlock avoided		*/
#define TARGET_ENOLCK	46	/* No locks available			*/
#define TARGET_ECKPT	47	/* POSIX checkpoint/restart error	*/

/* Convergent Error Returns */
#define TARGET_EBADE	50	/* invalid exchange			*/
#define TARGET_EBADR	51	/* invalid request descriptor		*/
#define TARGET_EXFULL	52	/* exchange full			*/
#define TARGET_ENOANO	53	/* no anode				*/
#define TARGET_EBADRQC	54	/* invalid request code			*/
#define TARGET_EBADSLT	55	/* invalid slot				*/
#define TARGET_EDEADLOCK 56	/* file locking deadlock error		*/

#define TARGET_EBFONT	57	/* bad font file fmt			*/

/* stream problems */
#define TARGET_ENOSTR	60	/* Device not a stream			*/
#define TARGET_ENODATA	61	/* no data (for no delay io)		*/
#define TARGET_ETIME	62	/* timer expired			*/
#define TARGET_ENOSR	63	/* out of streams resources		*/

#define TARGET_ENONET	64	/* Machine is not on the network	*/
#define TARGET_ENOPKG	65	/* Package not installed                */
#define TARGET_EREMOTE	66	/* The object is remote			*/
#define TARGET_ENOLINK	67	/* the link has been severed */
#define TARGET_EADV	68	/* advertise error */
#define TARGET_ESRMNT	69	/* srmount error */

#define TARGET_ECOMM	70	/* Communication error on send		*/
#define TARGET_EPROTO	71	/* Protocol error			*/
#define TARGET_EMULTIHOP 74	/* multihop attempted */
#define TARGET_EBADMSG 77	/* Bad message				*/
#define TARGET_ENAMETOOLONG 78	/* Filename too long */
#define TARGET_EOVERFLOW 79	/* value too large to be stored in data type */
#define TARGET_ENOTUNIQ 80	/* given log. name not unique */
#define TARGET_EBADFD	 81	/* f.d. invalid for this operation */
#define TARGET_EREMCHG	 82	/* Remote address changed */

/* shared library problems */
#define TARGET_ELIBACC	83	/* Can't access a needed shared lib.	*/
#define TARGET_ELIBBAD	84	/* Accessing a corrupted shared lib.	*/
#define TARGET_ELIBSCN	85	/* .lib section in a.out corrupted.	*/
#define TARGET_ELIBMAX	86	/* Attempting to link in too many libs.	*/
#define TARGET_ELIBEXEC 87	/* Attempting to exec a shared library.	*/
#define TARGET_EILSEQ	88	/* Illegal byte sequence. */
#define TARGET_ENOSYS	89	/* Function not implemented		*/
#define TARGET_ELOOP	90	/* Symbolic link loop */
#define TARGET_ERESTART 91	/* Restartable system call */
#define TARGET_ESTRPIPE 92	/* if pipe/FIFO, don't sleep in stream head */

#define TARGET_ENOTEMPTY 93	/* Directory not empty */

#define TARGET_EUSERS	94	/* Too many users (for UFS) */

/* BSD Networking Software */
	/* argument errors */
#define TARGET_ENOTSOCK	95		/* Socket operation on non-socket */
#define TARGET_EDESTADDRREQ	96		/* Destination address required */
#define TARGET_EMSGSIZE	97		/* Inappropriate message buffer length */
#define TARGET_EPROTOTYPE	98		/* Protocol wrong type for socket */
#define TARGET_ENOPROTOOPT	99		/* Protocol not available */
#define TARGET_EPROTONOSUPPORT	120		/* Protocol not supported */
#define TARGET_ESOCKTNOSUPPORT	121		/* Socket type not supported */
#define TARGET_EOPNOTSUPP	122		/* Operation not supported on socket */
#define TARGET_EPFNOSUPPORT	123		/* Protocol family not supported */
#define TARGET_EAFNOSUPPORT	124		/* Address family not supported by
					   protocol family */
#define TARGET_EADDRINUSE	125		/* Address already in use */
#define TARGET_EADDRNOTAVAIL	126		/* Can't assign requested address */

/* operational errors */
#define TARGET_ENETDOWN	127		/* Network is down */
#define TARGET_ENETUNREACH	128		/* Network is unreachable */
#define TARGET_ENETRESET	129		/* Network dropped connection because
					   of reset */
#define TARGET_ECONNABORTED	130		/* Software caused connection abort */
#define TARGET_ECONNRESET	131		/* Connection reset by peer */
#define TARGET_ENOBUFS		132	       	/* No buffer space available */
#define TARGET_EISCONN		133		/* Socket is already connected */
#define TARGET_ENOTCONN	134		/* Socket is not connected */

/* XENIX has 135 - 142 */
#define TARGET_ESHUTDOWN	143		/* Can't send after socket shutdown */
#define TARGET_ETOOMANYREFS	144		/* Too many references: can't splice */
#define TARGET_ETIMEDOUT	145		/* Connection timed out */
#define TARGET_ECONNREFUSED	146		/* Connection refused */
#define TARGET_EHOSTDOWN	147		/* Host is down */
#define TARGET_EHOSTUNREACH	148		/* No route to host */

#define TARGET_EWOULDBLOCK	TARGET_EAGAIN

#define TARGET_EALREADY	149		/* operation already in progress */
#define TARGET_EINPROGRESS	150		/* operation now in progress */
/* SUN Network File System */
#define TARGET_ESTALE		151		/* Stale NFS file handle */

/* XENIX error numbers */
#define TARGET_EUCLEAN 	135	/* Structure needs cleaning */
#define TARGET_ENOTNAM		137	/* Not a XENIX named type file */
#define TARGET_ENAVAIL		138	/* No XENIX semaphores available */
#define TARGET_EISNAM		139	/* Is a named type file */
#define TARGET_EREMOTEIO	140	/* Remote I/O error */
#define TARGET_EINIT		141	/* Reserved for future */
#define TARGET_EREMDEV		142	/* Error 142 */
#define TARGET_ECANCELED	158	/* AIO operation canceled */

#else
#define TARGET_EPERM            1      /* Operation not permitted */
#define TARGET_ENOENT           2      /* No such file or directory */
#define TARGET_ESRCH            3      /* No such process */
#define TARGET_EINTR            4      /* Interrupted system call */
#define TARGET_EIO              5      /* I/O error */
#define TARGET_ENXIO            6      /* No such device or address */
#define TARGET_E2BIG            7      /* Argument list too long */
#define TARGET_ENOEXEC          8      /* TARGET_Exec format error */
#define TARGET_EBADF            9      /* Bad file number */
#define TARGET_ECHILD          10      /* No child processes */
#define TARGET_EAGAIN          11      /* Try again */
#define TARGET_ENOMEM          12      /* Out of memory */
#define TARGET_EACCES          13      /* Permission denied */
#define TARGET_EFAULT          14      /* Bad address */
#define TARGET_ENOTBLK         15      /* Block device required */
#define TARGET_EBUSY           16      /* Device or resource busy */
#define TARGET_EEXIST          17      /* File exists */
#define TARGET_EXDEV           18      /* Cross-device link */
#define TARGET_ENODEV          19      /* No such device */
#define TARGET_ENOTDIR         20      /* Not a directory */
#define TARGET_EISDIR          21      /* Is a directory */
#define TARGET_EINVAL          22      /* Invalid argument */
#define TARGET_ENFILE          23      /* File table overflow */
#define TARGET_EMFILE          24      /* Too many open files */
#define TARGET_ENOTTY          25      /* Not a typewriter */
#define TARGET_ETXTBSY         26      /* Text file busy */
#define TARGET_EFBIG           27      /* File too large */
#define TARGET_ENOSPC          28      /* No space left on device */
#define TARGET_ESPIPE          29      /* Illegal seek */
#define TARGET_EROFS           30      /* Read-only file system */
#define TARGET_EMLINK          31      /* Too many links */
#define TARGET_EPIPE           32      /* Broken pipe */
#define TARGET_EDOM            33      /* Math argument out of domain of func */
#define TARGET_ERANGE          34      /* Math result not representable */

#define TARGET_EDEADLK         35      /* Resource deadlock would occur */
#define TARGET_ENAMETOOLONG    36      /* File name too long */
#define TARGET_ENOLCK          37      /* No record locks available */
#define TARGET_ENOSYS          38      /* Function not implemented */
#define TARGET_ENOTEMPTY       39      /* Directory not empty */
#define TARGET_ELOOP           40      /* Too many symbolic links encountered */

#define TARGET_ENOMSG          42      /* No message of desired type */
#define TARGET_EIDRM           43      /* Identifier removed */
#define TARGET_ECHRNG          44      /* Channel number out of range */
#define TARGET_EL2NSYNC        45      /* Level 2 not synchronized */
#define TARGET_EL3HLT          46      /* Level 3 halted */
#define TARGET_EL3RST          47      /* Level 3 reset */
#define TARGET_ELNRNG          48      /* Link number out of range */
#define TARGET_EUNATCH         49      /* Protocol driver not attached */
#define TARGET_ENOCSI          50      /* No CSI structure available */
#define TARGET_EL2HLT          51      /* Level 2 halted */
#define TARGET_EBADE           52      /* Invalid exchange */
#define TARGET_EBADR           53      /* Invalid request descriptor */
#define TARGET_EXFULL          54      /* TARGET_Exchange full */
#define TARGET_ENOANO          55      /* No anode */
#define TARGET_EBADRQC         56      /* Invalid request code */
#define TARGET_EBADSLT         57      /* Invalid slot */

#define TARGET_EBFONT          59      /* Bad font file format */
#define TARGET_ENOSTR          60      /* Device not a stream */
#define TARGET_ENODATA         61      /* No data available */
#define TARGET_ETIME           62      /* Timer expired */
#define TARGET_ENOSR           63      /* Out of streams resources */
#define TARGET_ENONET          64      /* Machine is not on the network */
#define TARGET_ENOPKG          65      /* Package not installed */
#define TARGET_EREMOTE         66      /* Object is remote */
#define TARGET_ENOLINK         67      /* Link has been severed */
#define TARGET_EADV            68      /* Advertise error */
#define TARGET_ESRMNT          69      /* Srmount error */
#define TARGET_ECOMM           70      /* Communication error on send */
#define TARGET_EPROTO          71      /* Protocol error */
#define TARGET_EMULTIHOP       72      /* Multihop attempted */
#define TARGET_EDOTDOT         73      /* RFS specific error */
#define TARGET_EBADMSG         74      /* Not a data message */
#define TARGET_EOVERFLOW       75      /* Value too large for defined data type */
#define TARGET_ENOTUNIQ        76      /* Name not unique on network */
#define TARGET_EBADFD          77      /* File descriptor in bad state */
#define TARGET_EREMCHG         78      /* Remote address changed */
#define TARGET_ELIBACC         79      /* Can not access a needed shared library */
#define TARGET_ELIBBAD         80      /* Accessing a corrupted shared library */
#define TARGET_ELIBSCN         81      /* .lib section in a.out corrupted */
#define TARGET_ELIBMAX         82      /* Attempting to link in too many shared libraries */
#define TARGET_ELIBEXEC        83      /* Cannot exec a shared library directly */
#define TARGET_EILSEQ          84      /* Illegal byte sequence */
#define TARGET_ERESTART        85      /* Interrupted system call should be restarted */
#define TARGET_ESTRPIPE        86      /* Streams pipe error */
#define TARGET_EUSERS          87      /* Too many users */
#define TARGET_ENOTSOCK        88      /* Socket operation on non-socket */
#define TARGET_EDESTADDRREQ    89      /* Destination address required */
#define TARGET_EMSGSIZE        90      /* Message too long */
#define TARGET_EPROTOTYPE      91      /* Protocol wrong type for socket */
#define TARGET_ENOPROTOOPT     92      /* Protocol not available */
#define TARGET_EPROTONOSUPPORT 93      /* Protocol not supported */
#define TARGET_ESOCKTNOSUPPORT 94      /* Socket type not supported */
#define TARGET_EOPNOTSUPP      95      /* Operation not supported on transport endpoint */
#define TARGET_EPFNOSUPPORT    96      /* Protocol family not supported */
#define TARGET_EAFNOSUPPORT    97      /* Address family not supported by protocol */
#define TARGET_EADDRINUSE      98      /* Address already in use */
#define TARGET_EADDRNOTAVAIL   99      /* Cannot assign requested address */
#define TARGET_ENETDOWN        100     /* Network is down */
#define TARGET_ENETUNREACH     101     /* Network is unreachable */
#define TARGET_ENETRESET       102     /* Network dropped connection because of reset */
#define TARGET_ECONNABORTED    103     /* Software caused connection abort */
#define TARGET_ECONNRESET      104     /* Connection reset by peer */
#define TARGET_ENOBUFS         105     /* No buffer space available */
#define TARGET_EISCONN         106     /* Transport endpoint is already connected */
#define TARGET_ENOTCONN        107     /* Transport endpoint is not connected */
#define TARGET_ESHUTDOWN       108     /* Cannot send after transport endpoint shutdown */
#define TARGET_ETOOMANYREFS    109     /* Too many references: cannot splice */
#define TARGET_ETIMEDOUT       110     /* Connection timed out */
#define TARGET_ECONNREFUSED    111     /* Connection refused */
#define TARGET_EHOSTDOWN       112     /* Host is down */
#define TARGET_EHOSTUNREACH    113     /* No route to host */
#define TARGET_EALREADY        114     /* Operation already in progress */
#define TARGET_EINPROGRESS     115     /* Operation now in progress */
#define TARGET_ESTALE          116     /* Stale NFS file handle */
#define TARGET_EUCLEAN         117     /* Structure needs cleaning */
#define TARGET_ENOTNAM         118     /* Not a XENIX named type file */
#define TARGET_ENAVAIL         119     /* No XENIX semaphores available */
#define TARGET_EISNAM          120     /* Is a named type file */
#define TARGET_EREMOTEIO       121     /* Remote I/O error */
#define TARGET_EDQUOT          122     /* Quota exceeded */

#define TARGET_ENOMEDIUM       123     /* No medium found */
#define TARGET_EMEDIUMTYPE     124     /* Wrong medium type */
#define TARGET_ECANCELED       125     /* Operation Canceled */
#define TARGET_ENOKEY          126     /* Required key not available */
#define TARGET_EKEYEXPIRED     127     /* Key has expired */
#define TARGET_EKEYREVOKED     128     /* Key has been revoked */
#define TARGET_EKEYREJECTED    129     /* Key was rejected by service */

/* for robust mutexes */
#define TARGET_EOWNERDEAD      130     /* Owner died */
#define TARGET_ENOTRECOVERABLE 131     /* State not recoverable */

#define TARGET_ERFKILL         132     /* Operation not possible due to RF-kill */
#define TARGET_EHWPOISON       133     /* Memory page has hardware error */
#endif

/* QEMU internal, not visible to the guest. This is returned when a
 * system call should be restarted, to tell the main loop that it
 * should wind the guest PC backwards so it will re-execute the syscall
 * after handling any pending signals. They match with the ones the guest
 * kernel uses for the same purpose.
 */
#define TARGET_ERESTARTSYS     512     /* Restart system call (if SA_RESTART) */

/* QEMU internal, not visible to the guest. This is returned by the
 * do_sigreturn() code after a successful sigreturn syscall, to indicate
 * that it has correctly set the guest registers and so the main loop
 * should not touch them. We use the value the guest would use for
 * ERESTART_NOINTR (which is kernel internal) to guarantee that we won't
 * clash with a valid guest errno now or in the future.
 */
#define TARGET_QEMU_ESIGRETURN 513     /* Return from signal */
