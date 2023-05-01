#include <iostream>
#include "Agenda.h"

int main() {
	//Pessoa p; Erro, classe abstrata não instancia objetos.

  PessoaFisica *pf1 = new PessoaFisica("Luiz", "Dinamérica", "luizdinamerica@", "377.210.280-86", "08/11/1981","Casado");

	PessoaFisica *pf2 = new PessoaFisica("Medeiros", "Centro", "medeiroscentro@", "654.820.460-36", "22/04/2009","Solteiro");

	PessoaJuridica *pj1 = new PessoaJuridica("Neto", "Catolé", "netocatole@", "65.737.800/0001-35", "00031796", "NEW-SYSTEMSLTDAME");

	PessoaJuridica *pj2 = new PessoaJuridica("Anônimo", "Cruzeiro", "anonimocruzeiro@","71.132.600/0004-33", "00059478","EMPRESA COM INSCRIÇÃO CASSADA");

	
	Agenda *a1 = new Agenda();
	a1->append(*pf1).append(*pj1);
	*a1 += *pf2;
	*a1 += *pj2;
	cout << *a1 << endl;

	cout << "\n----------------------\n----------------------\n----------------------\n" << endl;
	cout << "Removi |Luiz| e |Anônimo| da agenda." << endl;
	*a1 -= *pf1;
	*a1 -= *pj2;
	cout << *a1 << endl;

	cout << "\n----------------------\n----------------------\n----------------------\n" << endl;
	cout << "Removi |Neto| da agenda." << endl;
	a1->remove(*pj1);
	cout << *a1 << endl;

	cout << "----------------------\n----------------------\n----------------------\n" << endl;
	cout << "Buscando |Medeiros| por |NOME| na agenda." << endl;
	a1->quest("Medeiros");

	cout << "\nBuscando |Medeiros| por |CPF| na agenda." << endl;
	a1->quest("654.820.460-36");
	
	delete pf1;
	delete pf2;
	delete pj1;
	delete pj2;
	delete a1;

	return 0;
}