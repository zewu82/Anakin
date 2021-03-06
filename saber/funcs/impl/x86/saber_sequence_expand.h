/* Copyright (c) 2016 Anakin Authors All Rights Reserve.
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
   http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

#ifndef ANAKIN_SABER_FUNCS_IMPL_X86_SABER_SEQUENCE_EXPAND_H
#define ANAKIN_SABER_FUNCS_IMPL_X86_SABER_SEQUENCE_EXPAND_H

#include "saber/funcs/impl/impl_sequence_expand.h"

namespace anakin {
namespace saber {

template <DataType OpDtype>
class SaberSequenceExpand<X86, OpDtype> : public ImplBase <
        X86, OpDtype, SequenceExpandParam<X86> > {
public:
    typedef Tensor<X86> OpTensor;
    typedef typename DataTrait<X86, OpDtype>::Dtype OpDataType;
    SaberSequenceExpand()
    {}

    ~SaberSequenceExpand() {
    }

    virtual SaberStatus init(const std::vector<OpTensor*>& inputs,
                             std::vector<OpTensor*>& outputs,
                             SequenceExpandParam<X86>& param,
                             Context<X86>& ctx) override;

    virtual SaberStatus create(const std::vector<OpTensor*>& inputs,
                               std::vector<OpTensor*>& outputs,
                               SequenceExpandParam<X86>& param,
                               Context<X86>& ctx) override;

    virtual SaberStatus dispatch(const std::vector<OpTensor*>& inputs,
                                 std::vector<OpTensor*>& outputs,
                                 SequenceExpandParam<X86>& param) override;

private:

};

}
}
#endif