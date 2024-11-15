CREATE DATABASE Diagrama;
USE Diagrama;

CREATE TABLE Cat_Tipo_Personal(
	id INT NOT NULL,
    tipo VARCHAR(15),
    CONSTRAINT primary_key_Cat_Tipo_Personal PRIMARY KEY (id)
);
CREATE TABLE Cat_Prioridad_Incidencia(
	id INT NOT NULL,
    prioridad VARCHAR(7),
    CONSTRAINT primary_key_Cat_Prioridad_Incidencia PRIMARY KEY (id)
);
CREATE TABLE Cat_Estado_Incidencia(
	id INT NOT NULL,
    estado VARCHAR(25),
    CONSTRAINT primary_key_Cat_Estado_Incidencia PRIMARY KEY (id)
);
create table Cat_Tipo_Evidencia(
	id INT NOT NULL,
    tipo VARCHAR(8),
    extension VARCHAR(7),
    CONSTRAINT primary_key_Cat_Tipo_Incidencia PRIMARY KEY (id)
);
CREATE TABLE Usuario(
	id INT NOT NULL,
    nombre_completo VARCHAR(100),
    correo VARCHAR(100),
    contrasenia VARCHAR(100),
    tipo_personal INT,
    fecha_alta TIMESTAMP,
    CONSTRAINT primary_key_Usuario PRIMARY KEY (id),
    CONSTRAINT foreign_key_Usuario_TO_Cat_Tipo_Personal FOREIGN KEY (tipo_personal) REFERENCES Cat_Tipo_Personal(id)
);
create table Incidencias(
	id INT NOT NULL,
    nombre_incidencia VARCHAR(100),
    descripcion VARCHAR(500),
    prioridad INT,
    id_usuario_administrativo INT,
    id_usuario_soporte INT,
    id_estado_incidencia INT,
    fecha_alta TIMESTAMP,
    fecha_asignacion TIMESTAMP,
    fecha_cierre TIMESTAMP,
    CONSTRAINT primary_key_Incidencias PRIMARY KEY (id),
    CONSTRAINT foreign_key_Incidencias_TO_Cat_Prioridad_Incidencia FOREIGN KEY (prioridad) REFERENCES Cat_Prioridad_Incidencia(id),
    CONSTRAINT foreign_key_Incidencias_id_usuario_administrativo_TO_Usuario FOREIGN KEY (id_usuario_administrativo) REFERENCES Usuario(id),
    CONSTRAINT foreign_key_Incidencias_id_usuario_soporte_TO_Usuario FOREIGN KEY (id_usuario_soporte) REFERENCES Usuario(id),
    CONSTRAINT foreign_key_Incidencias_TO_Cat_Estado_Incidencia FOREIGN KEY (id_estado_incidencia) REFERENCES Cat_Estado_Incidencia(id)
);
create table Bitacora(
	id INT NOT NULL,
    descripcion VARCHAR(500),
    id_incidencia INT,
    CONSTRAINT primary_key_Bitacora PRIMARY KEY (id),
    CONSTRAINT foreign_key_Bitacora_TO_Incidencias FOREIGN KEY (id_incidencia) REFERENCES Incidencias(id)
);
create table Evidencia(
	id INT NOT NULL,
    nombre VARCHAR(500),
    id_tipo_evidencia INT,
    id_bitacora INT,
    fecha_alta TIMESTAMP,
    CONSTRAINT primary_key_Evidencia PRIMARY KEY (id),
    CONSTRAINT foreign_key_Evidencia_TO_Cat_Tipo_Evidencia FOREIGN KEY (id_tipo_evidencia) REFERENCES Cat_Tipo_Evidencia(id),
    CONSTRAINT foreign_key_Evidencia_TO_Bitacora FOREIGN KEY (id_bitacora) REFERENCES Bitacora(id)
);