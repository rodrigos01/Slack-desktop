#
# Regular cron jobs for the slack-desktop package
#
0 4	* * *	root	[ -x /usr/bin/slack-desktop_maintenance ] && /usr/bin/slack-desktop_maintenance
