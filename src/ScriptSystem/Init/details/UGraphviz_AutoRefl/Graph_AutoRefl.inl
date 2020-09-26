// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UGraphviz::Graph>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UGraphviz::Graph, Base<Ubpa::UGraphviz::Subgraph>>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{Name::constructor, WrapConstructor<Ubpa::UGraphviz::Graph(std::string, bool)>()},
        Field{Name::destructor, WrapDestructor<Ubpa::UGraphviz::Graph>()},
		//Field{Name::constructor, WrapConstructor<Ubpa::UGraphviz::Graph(Ubpa::UGraphviz::Graph &&)>()},
		//Field{"operator=", &Ubpa::UGraphviz::Graph::operator=},
        Field{"Dump", &Ubpa::UGraphviz::Graph::Dump},
        Field{"IsDigraph", &Ubpa::UGraphviz::Graph::IsDigraph},
    };
};
