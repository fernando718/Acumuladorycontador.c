/*Deep3_Prog6:
cuente el nĂşmero de veces que ahorras y nos diga el acumulado de ahorros */
 #include <stdio.h>
 int main()
 {
   int banco; //Acumular 
   int monto; //monto o cantidad a ahorrar por evento
   int numdepositos; //La cantidad de veces que fui al banco
   char letra; //es para ver si queremos realizar otro deposito 
   numdepositos=0;
   banco=0;
   monto=0;
   letra = 's';
   do
   {
      //voy al banco
     letra = 's';
     printf("\n\n Monto a depositar:");
     scanf("%d", &monto);
     banco = banco + monto; //Acumulador
     numdepositos = numdepositos + 1; //contador

     printf("\n\n ÂżQuieres realizar otro deposito? (s/n)");
     scanf("%f", letra);


    } while( letra != 's');

    printf("\n\n dinero que tienes en el banco %d", banco);
    printf("\n\n Numero de depositos %d", numdepositos);
    return 0;
   }
