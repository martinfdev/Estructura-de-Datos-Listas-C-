import java.util.ArrayList;

public class OperacionesToken{
    private Monedero cartera;   
    private Token moneda;
    private ArrayList<Token> list_moneda;
    
    public OperacionesToken() {}
    
    public OperacionesToken(ArrayList<Token> cant_moneda) {
        this.list_moneda = cant_moneda;
    }
 
    //crean una nueva moneda
    public Token  crearMoneda(String nombre_moneda, int cantidad){
      return moneda = new Token(nombre_moneda, cantidad);
      
    }

    //devuelve el total monedas para una monde espesifica
    public int totalDeMonedas(String nombre_moneda){
        int cantidad_moneda =0;
        for (Token token : list_moneda) {
            if (token.getNombre_moneda().endsWith(nombre_moneda)) {
               cantidad_moneda = token.getCantidad();
            }
        }
        return cantidad_moneda;
    }
    
    //devuelve el sado de una cuenta
    public int balanceOf(Usuario usuario){
        int cantidad_moneda = 0;
        cantidad_moneda = usuario.getDinero().getCantidad();
      return cantidad_moneda;        
    }
    
    //transferencia de monedero a usuario
    public boolean transferencia(String nombre_moneda, Usuario usuario, int cantidad){
        for (Token token : list_moneda) {
            if (nombre_moneda.equals(token.getNombre_moneda())) {
                token.setCantidad(token.getCantidad()-cantidad);
                Token tmodificado = usuario.getDinero();
                tmodificado.setCantidad(usuario.getDinero().getCantidad()+cantidad);
                usuario.setDinero(tmodificado);
                return true;
            }
        }
       return false;
    }
    
    //transferencia entre usuarios
    public boolean transferFromTo(Usuario transde, Usuario transA, int cantidad){
        Token modificado;
        if (transde.getDinero().getCantidad()>= cantidad) {
             modificado = transde.getDinero();
             modificado.setCantidad(transde.getDinero().getCantidad()-cantidad);
             modificado = transA.getDinero();
             modificado.setCantidad(transA.getDinero().getCantidad()+cantidad);
             transA.setDinero(modificado);
             return true;
        }
        
        return false;
    }
}