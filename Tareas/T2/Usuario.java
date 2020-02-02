
public class Usuario {
   private String nombreUsuario;
   private String direccion;
   private Token dinero;

    public Usuario(String nombreUsuario, String direccion) {
        this.nombreUsuario = nombreUsuario;
        this.direccion = direccion;
    }

    public String getNombreUsuario() {
        return nombreUsuario;
    }

    public void setNombreUsuario(String nombreUsuario) {
        this.nombreUsuario = nombreUsuario;
    }

    public String getDireccion() {
        return direccion;
    }

    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public Token getDinero() {
        return dinero;
    }

    public void setDinero(Token dinero) {
        this.dinero = dinero;
    }
   
   
    
}
