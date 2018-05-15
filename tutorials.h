///Cabecera de los Dependientes económicos
#ifndef TUTORIALS_H_INCLUDED
#define TUTORIALS_H_INCLUDED


/*** Cabeceras locales ***/
#include <string>
#include "name.h"
#include "date.h"

class Tutorials{
    private:
        Name name;
        Date initialDate;
        Date finishDate;
        int hours;

    public:
        Tutorials();                                   ///Constructor base
        Tutorials(const Tutorials&);                   /// Constructor Copia
        Tutorials(const Name&, Date&, Date&, int&);    ///Constructor Parametrizado

        /*** getters ***/
        Name getName();
        Date getInitialDate();
        Date getFinishDate();
        int getHours();

        /*** setters ***/
        void setName(const Name&);
        void setInitialDate(const Date&);
        void setFinishDate(const Date&);
        void setHours(const int&);

        std::string toString();     ///Imprime datos
};


#endif // TUTORIALS_H_INCLUDED
