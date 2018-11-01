
Debian
====================
This directory contains files used to package elecashd/elecash-qt
for Debian-based Linux systems. If you compile elecashd/elecash-qt yourself, there are some useful files here.

## elecash: URI support ##


elecash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install elecash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your elecashqt binary to `/usr/bin`
and the `../../share/pixmaps/elecash128.png` to `/usr/share/pixmaps`

elecash-qt.protocol (KDE)

