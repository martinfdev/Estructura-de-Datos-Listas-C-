
public class Token {

    private String nombre_moneda;
    private int cantidad;

    public Token(String nombre_moneda, int valor) {
        this.nombre_moneda = nombre_moneda;
        this.cantidad = valor;
    }

    public String getNombre_moneda() {
        return nombre_moneda;
    }

    public void setNombre_moneda(String nombre_moneda) {
        this.nombre_moneda = nombre_moneda;
    } 

    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }

}
