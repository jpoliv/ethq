EthQ
====

Displays an auto-updating per-second count of the number of packets
and bytes being handled by each specified NIC, and on multi-queue NICs
shows the per-queue statistics too.

Usage: `ethq [-t] <interface> [interface ...]`.

With `-t` specified the display just scrolls on the terminal, otherwise
it runs in an auto-refreshing window.

Requirements
------------

This software only runs on Linux.  It requires a C++11 compiler and
the NCurses library.

NIC Support
-----------

The format of the names of the statistics values from a NIC is highly
driver specific.

The code currently supports the output from the following NIC drivers:

- Broadcom `bnx2x`, `tg3`
- Emulex `be2net`
- Intel `e1000e`, `igb`, `ixgbe`, `i40e`
- Mellanox `mlx5_core`
- RealTek `r8169`
- VMware `vmxnet3`

To request support for additional NICs, please raise a github issue and
include the output of `ethtool -i` and attach the output of `ethtool -S`
for your interface.
