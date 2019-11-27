#ifndef __x86_64__
#error "1985 called and asked for its architecture back"
#endif

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