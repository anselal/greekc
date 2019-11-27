# Ελληνική C / Greek C

## ***Νιώθετε περήφανοι που είστε Έλληνες;***
## ***Έχετε βαρεθεί τις ξενόγλωσσες γλώσσες προγραμματισμού;***
## ***Θέλετε να μπορείτε επιτέλους να μιλάτε στον υπολογιστή σας στη γλώσσα σας;***

Αν ΝΑΙ, τότε η Ελληνική C, μια συνταρακτική εφεύρεση της Rikafr IT Solutions, είναι φτιαγμένη για σάς. Με την Ελληνική C, μπορείτε επιτέλους να γράφετε κώδικα σε απλά, κατανοητά Ελληνικά αντί για τα περίεργα σύμβολα που έβγαλε απο το μυαλό του εκείνος ο ανώμαλος ο Ritchie. 

Η απλότητα και η απαράμιλλη ευχρηστία της Ελληνικής C, την κάνουν το τέλειο εργαλείο για την εξάπλωση του Ελληνισμού στην παγκόσμια κοινότητα IT, προσφέρεται ΕΝΤΕΛΩΣ ΔΩΡΕΑΝ, ΑΠΟΚΛΕΙΣΤΙΚΑ στους αναγνώστες του βλόγιου μας.

Για να τη χρησιμοποιήσετε τώρα αμέσως, απλά κάντε #include τα παρακάτω macro definitions, και μπορείτε αμέσως να αρχίσετε να γράφετε κώδικα στα Ελληνικά. Δυστυχώς, επειδή η υποστήριξη unicode στα preprocessor tokens είναι λιγάκι γιατομπούτσοκαβάλα, αναγκαστήκαμε να χρησιμοποιήσουμε greeklish, πράγμα που καθόλου δε μειώνει την ευχρηστία και την εκφραστικότητα της Ελληνικής C, όπως θα διαπιστώσετε αμέσως και μόνοι σας:

```
#define makrynari long
#define noumero int
#define tsipras 0
#define tsoukou !
#define tzhmeros void
#define ama if
#define xwstou =
#define einai ==
#define syre goto
#define spane break
#define parto_alliws continue
#define asimos unsigned
#define alliwtika else
#define thn_exei sizeof
#define psofa exit
#define gramma char
#define oso while
#define KKE ,
#define re_malaka ;
#define apo_dw {
#define ws_edw }
#define ton_pinei <
#define gamaei >
#define ton_psilopinei <=
#define psilogamaei >=
#define loupa for
#define epi *
#define kanto do
#define eisai_noumero isdigit
#define meion -
#define syn +
#define malakia perror
#define sfyra printf
#define dialekste switch
#define piato case
#define tsimento const
#define patates default
#define gyrna return
#define PASOK abort
#define ntopio static
#define enw &&
#define ki_allo ++
#define kopse_kati --
```

Και εαν δεν έχετε πειστεί ακόμα για την απαράμιλλη δύναμη αυτών των λίγων macro definitions που περικλείουν όλη την δύναμη και την μαγεία της Ελληνικής γλώσσας, μπορείτε να δείτε παρακάτω ενα παράδειγμα χρήσης.

Ορίστε ο αλγόριθμος QuickSort γραμμένος στην Ελληνική C:

Για να γίνει φανερή η ευελιξία της Ελληνικής C, έχουν γίνει σε κάποια επίτηδες κάποιες αλλαγές απο την Ορθή χρήση της γλώσσας, έτσι ωστε να δείξουμε τα δυνατά εκφραστικά στύλ - για παράδειγμα, ενω το σύμβολο του κόμματος κανονικά είναι ΚΚΕ ("ένα είν' το κόμμα"), ο κώδικας ομολογουμένως γίνεται κάπως δυσνόητος (πράγμα που συμβαίνει γενικότερα με το ΚΚΕ), οπότε έχουμε την εναλλακτική δυνατότητα να χρησιμοποιήσουμε στη θέση του το πιο συνηθισμενο σύμβολο ",":

```
#ifndef __x86_64__
#error "1985 called and asked for its architecture back"
#endif

#include
#include "greekc.h"

tzhmeros qsort(noumero arr[], asimos noumero first, asimos noumero last)
apo_dw
        noumero i, j, pivot, tmp re_malaka

        ama ( first ton_pinei last ) apo_dw
                pivot xwstou first re_malaka
                i xwstou first re_malaka
                j xwstou last re_malaka
                oso ( i ton_pinei j ) apo_dw
                        oso ( arr[i] ton_psilopinei arr[pivot] enw i ton_pinei last ) apo_dw
                                i ki_allo re_malaka
                        ws_edw

                        oso ( arr[j] gamaei arr[pivot] ) apo_dw
                                j kopse_kati re_malaka
                        ws_edw

                        ama ( i ton_pinei j ) apo_dw
                                tmp xwstou arr[i] re_malaka
                                arr[i] xwstou arr[j] re_malaka
                                arr[j] xwstou tmp re_malaka
                        ws_edw
                ws_edw

                tmp xwstou arr[pivot] re_malaka
                arr[pivot] xwstou arr[j] re_malaka
                arr[j] xwstou tmp re_malaka
                qsort ( arr, first, j meion 1 ) re_malaka
                qsort ( arr, j syn 1, last ) re_malaka
        ws_edw

        gyrna re_malaka

ws_edw

noumero main ( tzhmeros )
apo_dw
        noumero arr[] xwstou apo_dw 39,17,69,17,4,28,59,1,76,4,22,67,4 ws_edw re_malaka
        noumero i KKE size re_malaka

        size xwstou 13 re_malaka
        qsort ( arr, tsipras, size meion 1 ) re_malaka
        sfyra ( "Quicksort results :\n" ) re_malaka
        loupa ( i xwstou 1 re_malaka i ton_pinei size re_malaka i ki_allo )
        apo_dw
                sfyra ( "%d\n" KKE arr[i] ) re_malaka
        ws_edw

        gyrna tsipras re_malaka

ws_edw
```

Εσείς λοιπόν, τι περιμένετε για να αρχίσετε απο σήμερα να χρησιμοποιείτε την Ελληνική C;
