# Variáveis de compilador e flags
CXX = g++
CXXFLAGS = -std=c++20 -Wall

# Diretivas de arquivos
TARGET = sistema
OBJECTS = main.o item.o eletronico.o vestuario.o funcoes.o
HEADERS = item.h eletronico.h vestuario.h funcoes.h

# Regra padrão
all: $(TARGET)

# Regra para gerar o executável
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regras para gerar arquivos .o a partir dos .cpp
main.o: main.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c main.cpp

item.o: item.cpp item.h
	$(CXX) $(CXXFLAGS) -c item.cpp

eletronico.o: eletronico.cpp eletronico.h item.h
	$(CXX) $(CXXFLAGS) -c eletronico.cpp

vestuario.o: vestuario.cpp vestuario.h item.h
	$(CXX) $(CXXFLAGS) -c vestuario.cpp

funcoes.o: funcoes.cpp funcoes.h item.h eletronico.h vestuario.h
	$(CXX) $(CXXFLAGS) -c funcoes.cpp

# Limpeza dos arquivos temporários
clean:
	rm -f $(TARGET) $(OBJECTS)

# Limpeza total, incluindo os arquivos de backup
cleanall: clean
	rm -f *~
