
import java.util.ArrayList;


public class Monedero {
    private ArrayList<Token> moneda;
    
    public Monedero(ArrayList<Token> moneda) {
        this.moneda = moneda;
    }

    public ArrayList<Token> getMoneda() {
        return moneda;
    }

    public void setMoneda(ArrayList<Token> moneda) {
        this.moneda = moneda;
    }
}
