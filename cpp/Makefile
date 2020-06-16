#C:\MinGW\bin\g++.exe -g d:\ych\Git_algorithm\cpp\TestCode\helloworld.cpp -o d:\ych\Git_algorithm\cpp\TestCode\helloworld.exe
COMPILER=g++
CFLAGS=
TARGET_PATH=./sw_expert/$(SRC)/
OBJS=$(TARGET_PATH)main.cpp
TARGET=$(SRC).exe

#외부 define 추가
DEFINE=$(OSENV)
 
$(TARGET): $(OBJS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $(TARGET) -D$(DEFINE)
	echo "/**Excute Taget**/"
	./$(TARGET)

clean:
	rm *.exe