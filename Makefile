DIR             =	src

SRCS            =       memcpy.S         \
                        memset.S         \
                        memmove.S        \
                        rindex.S         \
                        strcasecmp.S     \
                        strchr.S         \
                        strcmp.S         \
                        strlen.S         \
                        strncmp.S        \
                        strcspn.S        \
                        strpbrk.S        \
                        strstr.S


LD      = ld

LDFLAGS = -shared

ASM     = nasm

ASFLAGS = -f elf64

RM      = rm -f

NAME    = libasm.so

OBJS    = $(SRCS:.S=.o)


all: $(NAME)

%.o:    %.asm
	$(ASM) $(ASFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re

