;*********************************************
;descrizione programma che svolge l'addizione
;            tra tre numeri
;Autore      Tarquini Lorenzo
;Classe      3 INA
;Versione    1.0
;Data        30/11/2016
;*********************************************

ORG        100H       ;origine del programma all'indirizzo 100H

.MODEL     SMALL      ;modello di memoria

.STACK     200H       ;ampiezza dello stack

.DATA
    num1           db 6    ;primo numnero
    num2           db 5    ;secondo numero
    prodotto       dw ?    ;risultato prodotto

.CODE
    
    ; Inizio
    mov     ax,@DATA
    mov     ds,ax
    sub     ax,ax
    
    ; Programma
    mov     al,num1          ;al=num1
    mul     num2             ;al=al*num2
    mov     prodotto,ax      ;prodotto=al
    
    ; fine
    mov ax, 4c00h
    int 21h