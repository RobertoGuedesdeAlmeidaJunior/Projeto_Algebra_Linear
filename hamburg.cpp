#include<iostream>
#include<iomanip>
using namespace std;

typedef struct 
{
    float Vardema[6]{ 1, 100, 300, 0.25, 2, 0};//Quantidade de itens do lanche
    float Python[6]{1, 75, 0, 0.25, 2, 600};// o 0 não está funcionando
    float PrecoSavegnago[6] {1.46, 0.0765, 0.0495, 5.95, 0.396, 0.0249};//ingredientes em ordem: pão, queijo, carne bovina, alface, tomate e linguiça.
    float PrecoCovabra[6] {2.29, 0.0646, 0.03, 5.59, 0.258, 0.0199};
    float ValorVardemaSavegnago;
    float ValorVardemaCovabra;
    float ValorPythonSavegnago;
    float ValorPythonCovabra;
}Hamburguer;
Hamburguer hamburguer;
typedef struct 
{
    float Lanche[6];//Quantidade de itens do lanche
    float PrecoLanche[6];//ingredientes em ordem: pão, queijo, carne bovina, alface, tomate e linguiça.
    float ValorLanche;
}Hamburguer_alterado;
Hamburguer_alterado hamburguer_alterado;

    void mostrar_atual(){
        //Somatória do X-Vardema
    cout << "ingredientes em ordem: pao, queijo, carne bovina, alface, tomate e linguica. \n";
    for (int i = 0; i < 6; i++)
    {
        cout << fixed << setprecision(3);//2 casas decimais
        cout << "Preco no Savegnago: " << hamburguer.Vardema[i] * hamburguer.PrecoSavegnago[i] << "\n";
        hamburguer.ValorVardemaSavegnago += hamburguer.Vardema[i] * hamburguer.PrecoSavegnago[i];
        cout << "preco no Covabra: " << hamburguer.Vardema[i] * hamburguer.PrecoCovabra[i] << "\n";
        hamburguer.ValorVardemaCovabra += hamburguer.Vardema[i] * hamburguer.PrecoCovabra[i];       

    }
    cout << "Valor de Compra do X-Vardema no Savegnago:" << hamburguer.ValorVardemaSavegnago << "\n Valor a ser cobrado :" << hamburguer.ValorVardemaSavegnago + hamburguer.ValorVardemaSavegnago * 0.5 <<"\n";
    cout << "Valor de Compra do X-Vardema no Covabra:" << hamburguer.ValorVardemaCovabra << "\n  Valor a ser cobrado :" << hamburguer.ValorVardemaCovabra + hamburguer.ValorVardemaCovabra * 0.5 <<"\n \n";


    //Somátoria do X-python
    for (int i = 0; i < 6; i++)
    {
        cout << fixed << setprecision(3);//2 casas decimais
        cout << "Preco no Savegnago: " << hamburguer.Python[i] * hamburguer.PrecoSavegnago[i] << "\n";
        hamburguer.ValorPythonSavegnago += hamburguer.Python[i] * hamburguer.PrecoSavegnago[i];
        cout << "preco no Covabra: " << hamburguer.Python[i] * hamburguer.PrecoCovabra[i] << "\n";
        hamburguer.ValorPythonCovabra += hamburguer.Python[i] * hamburguer.PrecoCovabra[i];       

    }
    cout << "Valor de Compra do X-Python no Savegnago:" << hamburguer.ValorPythonSavegnago << "\n Valor a ser cobrado: " << hamburguer.ValorPythonSavegnago + hamburguer.ValorPythonSavegnago * 0.5 << "\n";
    cout << "Valor de Compra do X-Python no Covabra:" << hamburguer.ValorPythonCovabra << "\n Valor a ser cobrado: " << hamburguer.ValorPythonCovabra + hamburguer.ValorPythonCovabra * 0.5 << "\n";
    }

    void alterar_pedido(){
            cout << "ingredientes em ordem: pao(unid), queijo(g), carne bovina(g), alface(pacote), tomate(fatias) e linguica(g). \n";
        for (int i = 0; i < 6; i++)
        {   
            cout << "defina a quantidade dos ingredientes: pao(unid), queijo(g), carne bovina(g), alface(pacote), tomate(fatias) e linguica(g).\n";
            cin >> hamburguer_alterado.Lanche[i];
            cout << "Agora informe os preços: na mesma ordem de quantidade. \n";
            cin >> hamburguer_alterado.PrecoLanche[i];
            cout << fixed << setprecision(2);//2 casas decimais
            cout << "Preco do ingrediente: " << hamburguer_alterado.Lanche[i] * hamburguer_alterado.PrecoLanche[i] << "\n";
            hamburguer_alterado.ValorLanche += hamburguer_alterado.Lanche[i] * hamburguer_alterado.PrecoLanche[i];     
        }
        cout << "Valor de Compra do Lanche:" << hamburguer_alterado.ValorLanche << "\n Valor a ser pago:  " << hamburguer_alterado.ValorLanche + hamburguer_alterado.ValorLanche * 0.5 << "\n \n";
    }




int main(int argc, char const *argv[])
{   int opcao;

    do{
        cout << "/////////////////////////////////////\n";
        cout << "/ 0) Sair                          /\n";
        cout << "/ 1) Consultar por padrao          /\n";
        cout << "/ 2) Alterar pedido               /\n";
        cout << "//////////////////////////////////\n";
            cin >> opcao;
        switch (opcao)
        {
        case 1:
            mostrar_atual();
            break;
        case 2:
            alterar_pedido();
            break;
        default: 
        cout << "Até mais";
            system("cls");
            break;
        }
    }while(opcao != 0);
    return 0;
}
