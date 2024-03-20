create database avonmo;

use avonmo;

CREATE TABLE categoria (
        Id_Categoria VARCHAR(10) NOT NULL,
		Titulo VARCHAR(129),
        Descripcion VARCHAR(129),
        PRIMARY KEY (Id_Categoria)
    );

CREATE TABLE Menu (
        Id_Categoria VARCHAR(10) NOT NULL,
        cant_Inu INT,
        Id_Menu INT,
        PRIMARY KEY (Id_Menu),
        FOREIGN KEY (Id_Categoria) REFERENCES categoria (Id_Categoria)
    );

CREATE TABLE Precios (
        Id_Precio int not null identity(1,1),
        Cantidad float,
        PRIMARY KEY (Id_Precio)
    );

CREATE TABLE Cremas (
        Id_Categoria VARCHAR(10),
        Id_Producto VARCHAR(10),
        Descripcion VARCHAR(128),
        Id_Precio int,
        PRIMARY KEY (Id_Producto),
        FOREIGN KEY (Id_Categoria) REFERENCES categoria (Id_Categoria),
        FOREIGN KEY (Id_Precio) REFERENCES Precios (Id_Precio)
    );
CREATE TABLE Perfumes (
        Id_Categoria VARCHAR(10),
        Id_Producto VARCHAR(10),
        Descripcion VARCHAR(128),
        Id_Precio int,
        PRIMARY KEY (Id_Producto),
        FOREIGN KEY (Id_Categoria) REFERENCES categoria (Id_Categoria),
        FOREIGN KEY (Id_Precio) REFERENCES Precios (Id_Precio)
    );
CREATE TABLE Electrodomesticos (
        Id_Categoria VARCHAR(10),
        Id_Producto VARCHAR(10),
        Descripcion VARCHAR(128),
        Id_Precio int,
        PRIMARY KEY (Id_Producto),
        FOREIGN KEY (Id_Categoria) REFERENCES categoria (Id_Categoria),
        FOREIGN KEY (Id_Precio) REFERENCES Precios (Id_Precio)
    );
CREATE TABLE Maquillaje (
        Id_Categoria VARCHAR(10),
        Id_Producto VARCHAR(10),
        Descripcion VARCHAR(128),
        Id_Precio int,
        PRIMARY KEY (Id_Producto),
        FOREIGN KEY (Id_Categoria) REFERENCES categoria (Id_Categoria),
        FOREIGN KEY (Id_Precio) REFERENCES Precios (Id_Precio)
    );
CREATE TABLE Tuppers (
        Id_Categoria VARCHAR(10),
        Id_Producto VARCHAR(10),
        Descripcion VARCHAR(128),
        Id_Precio int,
        PRIMARY KEY (Id_Producto),
        FOREIGN KEY (Id_Categoria) REFERENCES categoria (Id_Categoria),
        FOREIGN KEY (Id_Precio) REFERENCES Precios (Id_Precio)
    );