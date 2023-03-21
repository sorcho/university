
// strategia 1
// - inserimento in lista ricorsivo
// - distruttiva della struttura dati durante l'inserimento ordinato
#include "strutture_dati.h"
#include "prototipi.h"
#include <stdio.h>
#include <stdlib.h>


void print_list(struct Azienda* p_head)
{
    if (p_head == NULL)
        return;
    printf("NOME: %s, DIPENDENTI: %d, DIPARTIMENTI: %d, SEDI: %d\n",
           p_head->NomeAzienda, p_head->Dipendenti, 
           p_head->Dipartimenti, p_head->Sedi);
    print_list(p_head->successivo);

}

int length_list(struct  Azienda* p_head)
{
    int n = 0;
    while(p_head != NULL)
    {
        p_head = p_head -> successivo;
        n++;
    }
    return n;
}

void free_list(struct  Azienda* p_head)
{
    struct  Azienda* tmp;
    while(p_head != NULL)
    {
        tmp = p_head->successivo;
        free(p_head);
        p_head = tmp;
    
    }

}

void append_in_list(struct  Azienda** pp_head, struct Azienda az)
{
    if(*pp_head == NULL)
    {
      struct Azienda* p_new = malloc(sizeof(struct Azienda));
      *p_new                = az; // copio i valori presi dal file 
                                  // nella nuova struct
      p_new->successivo     = NULL;
      *pp_head              = p_new;
      return;
        
    }
    append_in_list( &( (*pp_head)->successivo ), az);
    
}
int read_from_file(char filename[64],struct  Azienda** pp_head)
{
  FILE* fp = fopen(filename, "r");  
  if (fp == NULL)
      return ERRFILE;

  // creo struttura temporanea
  struct Azienda tmp;
  // leggo una tupla di valori dal file
  while(fscanf(fp,"%s %d %d %d", 
               tmp.NomeAzienda, &(tmp.Dipendenti), 
               &(tmp.Dipartimenti), &(tmp.Sedi)) == 4)  
  {
      // inserisco il nodo nella lista
      append_in_list(pp_head, tmp);
  }  
  // 3. chiudo il file
  fclose(fp);
    
  return OK;
}

void remove_less_than(struct  Azienda** pp_head, int soglia_dip)
{
    struct Azienda* cursore = *pp_head;
    struct Azienda* prec    = NULL;
    while(cursore != NULL)
    {
        if(cursore->Dipendenti < soglia_dip)
        {
            struct Azienda* to_del = cursore;
            if (prec == NULL)
                *pp_head = to_del->successivo;
            else
                prec->successivo = to_del->successivo;
            
            cursore = to_del->successivo;
            free(to_del);
        }
        else
        {
             prec   = cursore;
            cursore = cursore->successivo;
           
        }

    }
    
}




int write_sorted_on_file(char filename[64], struct  Azienda** pp_head)
{
    FILE* fp = fopen(filename, "w"); 
    if(fp == NULL)
        return ERRFILE;

    while(*pp_head != NULL)
    {
        
        // cerco l'azienda con il maggior numero di dipendenti 
        // non ancora inserita nel file
        struct Azienda* cursore    =  *pp_head;
        struct Azienda* p_max      =  *pp_head;
        struct Azienda* prec       = NULL;
        struct Azienda* p_prec_max = NULL;
        while( cursore !=  NULL )
        {

            if(cursore->Dipendenti > p_max->Dipendenti)
            {
                p_prec_max = prec;
                p_max      = cursore;
            }
            prec    = cursore;
            cursore = cursore->successivo;
        }
        // scrivo l'azienda nel file
        fprintf(fp,"%s %d %d %d\n", 
               p_max->NomeAzienda, p_max->Dipendenti, 
               p_max->Dipartimenti, p_max->Sedi);
        
        // rimuovo dalla lista
        if(p_prec_max == NULL)
            *pp_head = p_max->successivo;
        else
            p_prec_max->successivo = p_max->successivo;
        free(p_max);
    }
    
    fclose(fp);
    return OK;
    
}

void err_handler(int err)
{
    switch(err)
    {
        case OK: 
            printf("OK!\n");
        break;
        case ERRFILE: 
            printf("errore nella gestione del file!\n");
            exit(1);
        break;
        default:
            printf("errore non gestito!\n");
            exit(1);
    }

}
