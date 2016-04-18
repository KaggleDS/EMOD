/***************************************************************************************************

Copyright (c) 2016 Intellectual Ventures Property Holdings, LLC (IVPH) All rights reserved.

EMOD is licensed under the Creative Commons Attribution-Noncommercial-ShareAlike 4.0 License.
To view a copy of this license, visit https://creativecommons.org/licenses/by-nc-sa/4.0/legalcode

***************************************************************************************************/

#pragma once

#include "IAssortivity.h"
#include "IRelationship.h"

class RANDOMBASE;

namespace Kernel 
{
    class IDMAPI AssortivityFactory
    {
    public:
        static IAssortivity* CreateAssortivity( RelationshipType::Enum relType, RANDOMBASE* prng );
    };
}