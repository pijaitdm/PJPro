CXX = g++
CXXFLAGS = -Wall -std=c++17 -Ihpp

SRCDIR = src
OBJDIR = obj
LIBDIR = lib

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

TARGET = pjp

all: dirs debug $(TARGET)

debug:
	@echo "File sumber yang ditemukan: $(SOURCES)"
	@echo "File objek yang akan dibuat: $(OBJECTS)"

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^
	@echo "✅ Build sukses: $@"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

dirs:
	mkdir -p $(OBJDIR) $(LIBDIR)

clean:
	rm -rf $(OBJDIR) $(TARGET)

# =========================================================
# Menjalankan program
# =========================================================
run: all
	@echo "🚀 Menjalankan $(TARGET)..."
	@./$(TARGET)


