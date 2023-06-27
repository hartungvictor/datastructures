public class Banco{
    public static void main(String args[]){

        Fila f;

        f = new Fila();

        f.inserir(176);
        f.inserir(914);
        f.inserir(1817);
        f.inserir(100);
        
        System.out.println("Bem vindo ao banco");
        while(!f.isEmpty()){
            e = f.retirar();
            System.out.println("Senha"+e);
        }

    }
}