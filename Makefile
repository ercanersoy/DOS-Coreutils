CC = wcc
CFLAGS = -oneatx -ohirbk -ol -ol+ -oi -ei -zp4 -0 -s -ri -ms /bt=dos
LD = wlink
LDFLAGS = option eliminate option vfremoval

all: commands\beep.com

commands\beep.com: commands\beep.obj
	$(LD) $(LDFLAGS) system com file $?

commands\beep.obj: commands\beep.c
	$(CC) $(CFLAGS) $? -fo=$@

clean-obj: .SYMBOLIC
	@if exist commands\*.obj del commands\*.obj
