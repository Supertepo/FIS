SELECT
	c.Titulo AS Categoria,
    p.Id_Producto,
    p.Descripcion,
    pr.Cantidad AS Precio
FROM
    Perfumes p
JOIN
    Categoria c ON p.Id_Categoria = c.Id_Categoria
JOIN
    Precios pr ON p.Id_Precio = pr.Id_Precio;