CREATE DATABASE banco;
USE banco;

CREATE TABLE tipos_de_cuenta (
  id INTEGER PRIMARY KEY NOT NULL AUTO_INCREMENT,
  tipo VARCHAR(10) NOT NULL
);

INSERT INTO tipos_de_cuenta (tipo) VALUES ("ahorro");
INSERT INTO tipos_de_cuenta (tipo) VALUES ("corriente");

CREATE TABLE clientes (
  id INTEGER NOT NULL PRIMARY KEY AUTO_INCREMENT,
  nombre VARCHAR(15) NOT NULL,
  nombre2 VARCHAR(15),
  nombre3 VARCHAR(15),
  apellido VARCHAR(15) NOT NULL,
  apellido2 VARCHAR(15),
  cedula INTEGER NOT NULL UNIQUE,
  direccion VARCHAR(40) NOT NULL,
  telefono VARCHAR(20),
  zipcode INTEGER NOT NULL,
  trabaja BOOLEAN NOT NULL
);

INSERT INTO clientes (
  nombre, 
  apellido, 
  cedula,
  direccion,
  telefono,
  zipcode,
  trabaja
) VALUES (
  "jose",
  "carrera",
  1234567890,
  "petare",
  "0800-cantv",
  666,
  0
);

INSERT INTO clientes (
  nombre, 
  apellido, 
  cedula,
  direccion,
  telefono,
  zipcode,
  trabaja
) VALUES (
  "jorge",
  "maldonado",
  29641202,
  "calle iturbes",
  "bodafon",
  1402,
  0
);

CREATE TABLE cuentas (
  id INTEGER PRIMARY KEY NOT NULL AUTO_INCREMENT,
  saldo INTEGER NOT NULL DEFAULT (0),
  clientes_id INTEGER NOT NULL,
  CONSTRAINT `cliente_cuenta`
    FOREIGN KEY (clientes_id) REFERENCES clientes (id)
    ON DELETE CASCADE
    ON UPDATE RESTRICT
);

INSERT INTO cuentas (clientes_id) VALUES (2);