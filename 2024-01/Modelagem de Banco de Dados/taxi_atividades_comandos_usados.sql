CREATE DATABASE taxi;

USE taxi;

CREATE TABLE cliente (
    cliente_id int AUTO_INCREMENT PRIMARY KEY,
    nome varchar(30) NOT NULL,
    cpf varchar(20) UNIQUE NOT NULL
    );

CREATE TABLE taxi (
    placa varchar(7) PRIMARY KEY,
    marca varchar(30),
    modelo varchar(20) NOT NULL,
    ano_fabricacao int DEFAULT '2020'
    );

CREATE TABLE corrida (
    corrida_id int AUTO_INCREMENT PRIMARY KEY,
    data_corrida DATE NOT NULL,
    cliente_id int NOT NULL,
    placa varchar(7) NOT NULL,
    FOREIGN KEY (cliente_id) REFERENCES cliente(cliente_id),
    FOREIGN KEY (placa) REFERENCES taxi(placa)
    ON DELETE CASCADE
    ON UPDATE CASCADE
    );

CREATE INDEX taxista ON corrida(placa);

INSERT INTO cliente VALUES
    (1532, 'Asdrubal', '448.754.253-65'),
    (1755, 'Jose', '745.854.115-98'),
    (1780, 'Antonio', '984.554.917-72'),
    (1781, 'Quincas', '546.373.762-02'),
    (1794, 'Borbas', '231.191.577-11');

INSERT INTO cliente (nome, cpf) VALUES
    ('João da Silva', '111.222.333.44'),
    ('Maria dos Santos', '222.111.444-33'),
    ('Pedro Pereira', '444.111.22-33');

SELECT * FROM taxi;

INSERT INTO taxi VALUES
    ('DAE6534', 'Ford', 'Fiesta', 1999),
    ('DKL4598', 'Volkswagen', 'Gol', 2019),
    ('DKL7878', 'Ford', 'Fiesta', 2017),
    ('JDM8776', 'Volkswagen', 'Santana', 2002),
    ('JJM3692', 'Chevrolet', 'Corsa', 1999);

INSERT INTO taxi (placa, marca, modelo) VALUES
    ('DID1122', 'Honda', 'Civic'),
    ('DDI2211', 'Honda', 'Fit');

SELECT * FROM taxi;

INSERT INTO corrida (cliente_id, placa, data_corrida) VALUES
    (1755, 'DAE6534', '2021-05-26'),
    (1797, 'JDM8776', '2021-05-26'),
    (1755, 'JDM8776', '2021-05-26'),
    (1532, 'DDI2211', '2021-05-27'),
    (1781, 'DAE6534', '2021-05-27');

SELECT * FROM corrida;

UPDATE cliente SET
    nome='Bento',
    cpf='259.345.123-01'
    WHERE cliente_id=1755;

DELETE FROM taxi WHERE placa='JDM8776';
DELETE FROM taxi WHERE ano_fabricacao=2017;
DELETE FROM taxi WHERE placa='DAE6534';
