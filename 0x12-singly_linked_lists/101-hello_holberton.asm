.section .data
    hello:
        .ascii "Hello, Holberton\n\0"

.section .text
    .global main
    .type main, @function
main:
    pushq %rbp
    movq %rsp, %rbp

    leaq hello(%rip), %rdi
    movl $0, %eax
    call printf

    movl $0, %eax

    leave
    ret

