#C:\MinGW\bin\g++.exe -g d:\ych\Git_algorithm\cpp\TestCode\helloworld.cpp -o d:\ych\Git_algorithm\cpp\TestCode\helloworld.exe
# 변수 선언
COMPILER=g++
CFLAGS=
TARGET_PATH=./$(SRC)/
OBJS=$(TARGET_PATH)main.cpp
TARGET=$(SRC).exe

#외부 define 
DEFINE=$(OSENV)
 
$(TARGET): $(OBJS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $(TARGET) -D$(DEFINE)
	echo "/**Excute Taget**/"
	./$(TARGET)

clean:
	rm *.exe