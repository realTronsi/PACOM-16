import subprocess
import os

# test for root acces
try:
    os.rename('/etc/foo', '/etc/bar')
except IOError as e:
    if (e[0] == errno.EPERM):
       sys.exit("Please run installer with root permission!")

buffer = ""; # screen buffer

def clear():
	print("\033[2J")