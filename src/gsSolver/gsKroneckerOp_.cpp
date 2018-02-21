/** @file gsKroneckerOp_.cpp

    @brief Provides a linear operator representing the Kronecker product of linear operators

    This file is part of the G+Smo library. 

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    
    Author(s): C. Hofreither, S. Takacs
*/

#include <gsSolver/gsKroneckerOp.hpp>

namespace gismo
{

CLASS_TEMPLATE_INST gsKroneckerOp<real_t>;

}
