#include <iostream>
#include <vector>

using namespace std;

class Examen{
    public:
        int numero, nota;
};


class Materia{
    public:
        int codigo;
        string nombre;
        vector<Examen> examen;
};



class Alumno{
    public :
        string nombre, apellido;
        int padron, dni;
        vector <Materia> materias;


        void set_nota(int materia, int examen, int nota){
            for(int i=0; i < materias.size(); i ++){
                if(materias[i].codigo == materia){
                    Examen extemp{examen,nota};
                    materias[i].examen.push_back(extemp);
                }
            }
        }

        bool cursa_materia(int materia){
            bool cursa = false;
            for(Materia m : materias){
                if(m.codigo == materia){
                    cursa = true;
                }
            }
            return cursa;
        }

        bool reindio_examen(int materia, int examen){
            bool rindio = false;
            for(Materia m : materias){
                if(cursa_materia(m.codigo)){
                    for(Examen e : m.examen){
                        if(e.numero == examen){
                            rindio = true;
                        }
                    }
                }
            }
            return rindio;
        }

        int get_nota (int materia, int examen){
            int nota = 0;    
            for(Materia m : materias){
                if(m.codigo == materia){
                    for(Examen e : m.examen){
                        if(e.numero == examen){
                            nota = e.nota;
                        }
                    }
                }
            }
            return nota;
        };
};

void nota_por_examen(int materia, int examen, vector<Alumno> alumnos){
    for(Alumno al : alumnos){
        if(al.reindio_examen(materia, examen)){
            cout << "Alumno " << al.apellido << " " << al.nombre << ", padron -> " << al.padron << ", nota -> " << al.get_nota(materia, examen) << endl;
        }
    }
}

int cantidad_por_examen(int materia, int examen, vector<Alumno> alumnos){
    int cant = 0;
    for(Alumno al : alumnos){
        if(al.reindio_examen(materia, examen)){
            cant++;
        }
    }
    return cant;
}

void porcentaje_por_examen(double materia, double examen, vector<Alumno> alumnos){
    vector <int> notas{0,0,0,0,0,0,0,0,0,0};
    int nota = 0;
    double porc = 0;
    for(Alumno al : alumnos){
        if(al.reindio_examen(materia, examen)){
            int ubicacion = al.get_nota(materia, examen) - 1;
            notas[ubicacion] = notas[ubicacion] + 1;
        }
    }
    double cantidad = cantidad_por_examen(materia, examen, alumnos);
    for(int i = 0; i < notas.size(); i++){
        if(notas[i]!= 0){
            double nota = notas[i];
            double porcentaje = 100*(nota / cantidad);
            cout << "Nota " << (i + 1) << ": " << porcentaje << "%;" << endl;
        }
    }
}

int main(){
    
    Materia ingles{44, "Ingles 1"};

    Alumno lio{"lionel","black",321, 51654986};
    Alumno jaz{"jazmin","flores",322, 65465422};
    Alumno azu{"azul","mabels",328, 98798755};
    Alumno lil{"liliana","vincentis",321, 12312333};
    Alumno jua{"juan","morales",322, 45645666};
    Alumno eli{"eliana","rios",321, 78978999};
    Alumno lea{"leandro","morales",321, 96396366};
    Alumno chi{"dawnie","rios",328, 74174111};
    Alumno roc{"rocko","bordon",321, 95195115};
    Alumno mor{"morita","gutierrez",321, 35735755};

    vector <Alumno> alumnostemp{lio,jaz,azu,lil,jua,eli,lea,chi,roc,mor};

    for(int i=0; i < alumnostemp.size();i++){
        alumnostemp[i].materias.push_back(ingles);
    }

    for(int i=0; i < alumnostemp.size() - 2; i++){

        if(i % 2 == 0){
            alumnostemp[i].set_nota(44, 1, 8);
        }
        else if(i % 3 == 0){
            alumnostemp[i].set_nota(44, 1, 7);
        }
        else{
            alumnostemp[i].set_nota(44, 1, 9);
        }
    }
    
    nota_por_examen(44,1,alumnostemp);
    cout << " " << endl;
    cout << "Cantidad de alumnos que rindieron: " << cantidad_por_examen(44,1,alumnostemp);
    cout << " " << endl;
    porcentaje_por_examen(44,1,alumnostemp);

    return 0;
}