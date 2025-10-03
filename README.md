# libft

This project is a custom implementation of the standard C library functions, developed as part of the 42 programming school curriculum.

---

## 🧠 Purpose

The goal of `libft` is to recreate a selection of common C library functions, allowing a deeper understanding of how they work internally and how to manage memory, strings, characters, and lists in C.

---

## ✅ Functions Implemented

Includes reimplementations of:

- Memory functions: `memset`, `memcpy`, `memmove`, `calloc`, etc.  
- String functions: `strlen`, `strchr`, `strrchr`, `strncmp`, `strlcpy`, etc.  
- Character checks: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, etc.  
- Conversion functions: `atoi`, `toupper`, `tolower`, etc.  
- File descriptor output: `putchar_fd`, `putstr_fd`, `putnbr_fd`, etc.  
- Linked list utilities (bonus): `lstnew`, `lstadd_front`, `lstmap`, `lstclear`, etc.

---

## 🔧 How to Use

1. Clone the repository:

```bash
git clone https://github.com/milena-1001/libft.git
cd libft
```

2. Compile the library:

```bash
make
```

3. Link it in your project:

```bash
gcc main.c -L. -lft
```

> Don’t forget to include `libft.h` in your source files.

---

## 📚 What I Learned

- Deep understanding of C standard library internals  
- Manual memory management in C  
- Writing safe and reusable functions  
- Creating and managing custom linked lists  
- Makefile usage and library archiving with `ar`  

---

## 📄 License

MIT License. See LICENSE file for more details.
