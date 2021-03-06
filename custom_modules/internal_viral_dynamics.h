#include "../core/PhysiCell.h"
#include "../modules/PhysiCell_standard_modules.h" 

using namespace BioFVM; 
using namespace PhysiCell;

#include "./submodel_data_structures.h" 

#ifndef __internal_viral_dynamics__
#define __internal_viral_dynamics__

extern Submodel_Information internal_viral_dynamics_info; 
	
void simple_internal_virus_model_setup( void );

void simple_internal_virus_model( Cell* pCell, Phenotype& phenotype, double dt );

void simple_intracellular_replication_model(  Cell* pCell, Phenotype& phenotype, double dt );

#endif 