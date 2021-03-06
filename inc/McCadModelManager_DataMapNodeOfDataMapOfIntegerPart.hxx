// File generated by CPPExt (Transient)
//
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadModelManager_DataMapNodeOfDataMapOfIntegerPart_HeaderFile
#define _McCadModelManager_DataMapNodeOfDataMapOfIntegerPart_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadModelManager_DataMapNodeOfDataMapOfIntegerPart_HeaderFile
#include <Handle_McCadModelManager_DataMapNodeOfDataMapOfIntegerPart.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _McCadModelManager_Part_HeaderFile
#include <McCadModelManager_Part.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class McCadModelManager_Part;
class McCadModelManager_MapIntegerHasher;
class McCadModelManager_DataMapOfIntegerPart;
class McCadModelManager_DataMapIteratorOfDataMapOfIntegerPart;



class McCadModelManager_DataMapNodeOfDataMapOfIntegerPart : public TCollection_MapNode {

public:
 // Methods PUBLIC
 // 

McCadModelManager_DataMapNodeOfDataMapOfIntegerPart(const Standard_Integer& K,const McCadModelManager_Part& I,const TCollection_MapNodePtr& n);

  Standard_Integer& Key() const;

  McCadModelManager_Part& Value() const;
//Standard_EXPORT ~McCadModelManager_DataMapNodeOfDataMapOfIntegerPart();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
Standard_Integer myKey;
McCadModelManager_Part myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem McCadModelManager_Part
#define TheItem_hxx <McCadModelManager_Part.hxx>
#define Hasher McCadModelManager_MapIntegerHasher
#define Hasher_hxx <McCadModelManager_MapIntegerHasher.hxx>
#define TCollection_DataMapNode McCadModelManager_DataMapNodeOfDataMapOfIntegerPart
#define TCollection_DataMapNode_hxx <McCadModelManager_DataMapNodeOfDataMapOfIntegerPart.hxx>
#define TCollection_DataMapIterator McCadModelManager_DataMapIteratorOfDataMapOfIntegerPart
#define TCollection_DataMapIterator_hxx <McCadModelManager_DataMapIteratorOfDataMapOfIntegerPart.hxx>
#define Handle_TCollection_DataMapNode Handle_McCadModelManager_DataMapNodeOfDataMapOfIntegerPart
#define TCollection_DataMapNode_Type_() McCadModelManager_DataMapNodeOfDataMapOfIntegerPart_Type_()
#define TCollection_DataMap McCadModelManager_DataMapOfIntegerPart
#define TCollection_DataMap_hxx <McCadModelManager_DataMapOfIntegerPart.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)
//


#endif
