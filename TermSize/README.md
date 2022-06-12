# TermSize

**TermSize** is an example program written with [BarnabasBox](https://github.com/nmke-de/BarnabasBox). It displays the size of the current terminal emulator window as the number rows and columns and automatically updates when resized. It is not advised to use this program directly in a `tty`.

## But why?

This is a demonstration of BarnabasBox usage and mainly serves as such. To get the size of the current terminal emulator, use the `bsize(int *, int *)` function in BarnabasBox.

## Dependencies

- BarnabasBox (duh.)
	- Dependencies of BarnabasBox.

## Build

Makefile incoming.

## Usage

Change the size of your terminal emulator to automatically see different numbers appear on the screen. When yout terminal window is smaller than 1 row and 5 columns, the program will quit.
