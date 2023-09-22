section .data
	msg db 'Hello, Holberton', 0xA, 0 ; String to be printed

section .text
	global main
	extern printf

main:
	; Write the string to stdout
	mov rax, 1              ; File descriptor 1 is stdout
	mov rdi, 1              ; Buffer address
	mov rsi, msg            ; Address of the string
	mov rdx, 17             ; Length of the string
	syscall

	; Exit the program
	mov eax, 60             ; System call number for exit
	xor edi, edi            ; Exit status (0)
	syscall
