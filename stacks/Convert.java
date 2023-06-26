public class Conversor {
    public static void main(String args[]){
        int numero = Integer.parseInt(args[0]);
        Pilha p = new Pilha();

        int resto;
        
        //fase 1 = empilhamento dos restos

        while(numero != 0){
            resto = numero % 2; // pego o resto da divisão deste número por 2 
            p.push(resto); //armazeno na pilha
            numero = numero / 2; // gero um novo numero, resultado da divisão dele por 2
        }

        while(!p.isEmpty()){
            resto = p.pop();
            System.out.println(resto)
        }

        System.out.println("Fim do programa"); 
    }
}

