#include <iostream>
using namespace std;

// CLASSE MONITOR - (4K tELEVIS�O DE ULTRA-ALTA DEFINI��O)

class Monitor
{
   private:
      double Resx ; // Resolu��o x
      double Resy; // Resolu��o y
      double Npixel;
      string Descricao;
      
   public:
      void setResx(double);
      void setResy(double);
      void setNpixel(double);
      void setDescricao(string);
      double getResx() const;
      double getResy() const;
      double getNpixel() const;
      string getDescricao ()const;
      
      
};


void Monitor::setResx(double x )
{
   Resx = x ;
}

void Monitor::setResy(double  y )
{
   Resy = y;
}

void Monitor::setNpixel(double px ) 
{
	Npixel = px;
}

void Monitor::setDescricao( string des ) 
{
	Descricao = des;
}

double Monitor::getResx() const
{
   return Resx;
}

double Monitor::getResy() const
{
   return Resy;
} 

double Monitor::getNpixel() const
{
	return Npixel;
}
string Monitor::getDescricao() const
{
	return Descricao;
}
