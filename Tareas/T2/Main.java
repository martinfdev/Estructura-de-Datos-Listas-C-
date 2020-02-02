
import java.util.ArrayList;

public class Main{

 public static void  main(String[] args) {
  ArrayList listaMonedas = new ArrayList();
     OperacionesToken opT = new OperacionesToken(listaMonedas);
     listaMonedas.add(opT.crearMoneda("Peso", 400));
     System.out.println(opT.totalDeMonedas("Peso"));  
 }

}