#include <stdio.h>
#include "strutture_dati.h"
#include "prototipi.h"

int main()
{
    struct Azienda* p_head = NULL;
    
    int err;
    printf("leggo dal file...");
    err = read_from_file("aziende.txt", &p_head);
    err_handler(err);
    printf("prima della rimozione:\n");
    print_list(p_head);
    remove_less_than(&p_head, 300);
    printf("dopo la rimozione:\n");
    print_list(p_head);

    printf("salvo...");
    err = write_sorted_on_file("aziende_new.txt", &p_head);
    err_handler(err);
    printf("lista dopo il salvataggio:\n");
    print_list(p_head);
    
    free_list(p_head);
    p_head = NULL;
    return 0;
}
