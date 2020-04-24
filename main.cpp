public classs Bodega{

  private:
    Sucursal arg_suc[];
    Juego_mesa juego_m[];
    Juego_rol juego_r[];

    eliminar_juego_mesa(String nombre);

  public:
    Bodega();
    void registra_sucursal(Sucursal s);

};

public Juego{
  public:
    String nombre;
    float costo;

    void modificar_costo(float nuevo_costo);

}



public Juego_mesa : public Juego{

  public:
    float peso;



};

public Juego_mesa : public Juego{

  public:
    int numero_libtos;

};
