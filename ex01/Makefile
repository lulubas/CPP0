# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 17:07:24 by lbastien          #+#    #+#              #
#    Updated: 2024/03/31 19:33:48 by lbastien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler settings
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

# Target executable name
TARGET = phonebook

# Source, Object, Dependency files
SRC = main.cpp PhoneBook.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

# Default target
all: $(TARGET)

# Compile .cpp files into .o object files
%.o : %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Link object files into the target executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

# Clean up objects and dependency files
clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ:.o=.d)
#Also clean up the target executable
fclean: clean
	rm $(TARGET)

#Clean up and recompile
re: fclean all

# Include dependencies
-include $(DEP)