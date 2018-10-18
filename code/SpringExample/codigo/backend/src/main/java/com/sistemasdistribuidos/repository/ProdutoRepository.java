package com.sistemasdistribuidos.repository;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;

import com.sistemasdistribuidos.model.Produto;

public interface ProdutoRepository extends JpaRepository<Produto, String> {
	
}
