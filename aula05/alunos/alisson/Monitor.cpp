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
   Resx = 3840 ;
}

void Monitor::setResy(double  y )
{
   Resy = 2160;
}

void Monitor::setNpixel(double valor ) 
{
	Npixel = 8294400;
}

void Monitor::setDescricao( string des ) 
{
	Descricao = "4K Televis�o de Ultra-alta defini��o";
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
