
CC = clang-11

TARGET = app.out

OBJS = main.o kor.o usa.o

CFLAGS = -Wall   #컴파일 할때 경고 모두 표시
LDFLAGS = -lc    #c 라이브러리가 필요 할때

all: $(TARGET)      #all 옵션을 주면 app.out이 어느 위치에 있든 실행

#컴파일
#.SUFFIXES : .c.o
.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<


#링크
$(TARGET) : $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)


