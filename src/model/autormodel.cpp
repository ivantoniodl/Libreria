#include "autormodel.h"

AutorModel::AutorModel(QObject *parent,
						   ConsConfEnum conf) :
AutorModelBase(parent)
{
	Q_UNUSED(conf)	//delete
	//setConsConf( conf ); //uncomment
}

AutorModel::~AutorModel()
{
}

/*! Configura una consulta

  Ver ModelBase para mayor información.

  Implementada de ModelBase::configurarQuery().
*/
void AutorModel::configureInternalSelectQuery()
{
	switch (getConsConf())
	{
	case Default:
		break;
//	case CustomEnum:
//		r.setIdPersona();
//		r.setNombre();
//		r.setLugar_idLugar();
//		r.RLugar_idLugar()->setNombre();
		break;
	}
}

/*! Devuelve el valor de un atributo de registro.
	Si al ejecutarse este método esta:

	\code
	return ModelBase::getRecordValue(record,column);
	\endcode

	se mostrarán las columnas tal y como se configuro la consulta, de lo contrario se mostrarán las columnas personalizadas.

	Ver ModelBase para mayor información.

	Implementada de ModelBase::getRecordValue().
*/
QVariant AutorModel::getRecordValue(RecordBase *record,int column) const
{
	return ModelBase::getRecordValue(record,column); //delete

//	AutorRecord *r=(AutorRecord*)record;
//	switch (getConsConf())
//	{
//	case Default:
//		return ModelBase::getRecordValue(record,column);
//	case CustomEnum:
//		switch (column)
//		{
////	case 0:	return r->idPersona();
////	case 1: return r->Nombre();
////	case 2: return QString::number(r->RLugar_idLugar()->idLugar())+", "+
////			r->RLugar_idLugar()->Nombre();
//		};
//		break;
//	};
//	return QVariant();
}

/*! Configura el nombre de las cabeceras de las columnas.

  Ver ModelBase para mayor información.

  Reimplementado de QAbstractItemModel::headerData().
*/
QVariant AutorModel::headerData(int section,
								  Qt::Orientation orientation,
								  int role) const
{
	return AutorModelBase::headerData(section,
									orientation,
									role); //delete

//	if (role != Qt::DisplayRole)
//		return QVariant();
//	if ( orientation == Qt::Vertical )
//		return section+1;

//	switch (getConsConf())
//	{
//	case Default:
//		return AutorModelBase::headerData(section,
//										orientation,
//										role);
//	case CustomEnum:
//		switch ( section )
//		{
////	case 0: return "idPersona";
////	case 1: return "Name";
////	case 2: return "idLugar";
////	case 3: return "Lugar";
//		};
//		break;
//	};
//	return QVariant();
}



