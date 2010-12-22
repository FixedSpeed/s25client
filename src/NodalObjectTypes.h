// $Id: NodalObjectTypes.h 6582 2010-07-16 11:23:35Z FloSoft $
//
// Copyright (c) 2005 - 2010 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.
#ifndef NODALOBJECTTYPES_H_INCLUDED
#define NODALOBJECTTYPES_H_INCLUDED

#pragma once

enum NodalObjectType
{
	NOP_NOTHING = 0, // nichts
	NOP_GRANITE, // Granit
	NOP_TREE, // Baum
	NOP_GRAINFIELD, // Getreidefeld
	NOP_ENVIRONMENT, // sonstige "Umweltobjekte", die keine besondere Funktion haben ( tote B�ume, Pilze, Str�ucher )
	NOP_OBJECT, // sonstige "feste" Objekte, die keine besondere Funktion haben (Stalagmiten, Ruinen, usw)
	NOP_BUILDING, // Geb�cde
	NOP_FLAG, // Fahne
	NOP_BUILDINGSITE, // Baustelle
	NOP_FIGURE, // Siedler-Leute
	NOP_EXTENSION, // Anbau von gro�en Geb�uden
	NOP_FIRE, // Ein Feuer von einem brennende (zerst�rten) Geb�ude
	NOP_FIGHTING, // Kampf,
	NOP_ANIMAL, // Tier
	NOP_BURNEDWAREHOUSE, // abgebranntes Lagerhaus, aus dem die Menschen jetzt str�men
	NOP_SHIP, // Schiff
	NOP_CHARBURNERPILE, // Holz-/Kohle-Haufen vom K�hler
	NOP_ERROR
};

#endif // NODALOBJECTTYPES_H_INCLUDED
