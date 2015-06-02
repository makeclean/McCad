// File generated by CPPExt (Value)
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

#ifndef _McCadMcVoid_HeaderFile
#define _McCadMcVoid_HeaderFile

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_McCadCSGGeom_Surface_HeaderFile
#include <Handle_McCadCSGGeom_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_McCadDiscDs_HSequenceOfDiscFace_HeaderFile
#include <Handle_McCadDiscDs_HSequenceOfDiscFace.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class TopoDS_Shape;
class gp_Pnt;
class McCadCSGGeom_Surface;
class GeomAdaptor_Surface;
class TopoDS_Face;
class McCadDiscDs_HSequenceOfDiscFace;
class TopTools_HSequenceOfShape;
class TopoDS_Solid;
class McCadDiscDs_DiscFace;
class McCadMcVoid_Generator;
class McCadMcVoid_ForwardCollision;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

//! \brief usefull tools for McCadMcVoid...

class McCadMcVoid  {

public:

    void* operator new(size_t,void* anAddress)
      {
        return anAddress;
      }
    void* operator new(size_t size)
      {
        return Standard::Allocate(size);
      }
    void  operator delete(void *anAddress)
      {
        if (anAddress) Standard::Free((Standard_Address&)anAddress);
      }
 // Methods PUBLIC
 //


Standard_EXPORT static  Standard_Real AreaOfShape(const TopoDS_Shape& theShape) ;


Standard_EXPORT static  Standard_Real VolumeOfShape(const TopoDS_Shape& theShape) ;


Standard_EXPORT static  gp_Pnt ApproxBaryCenter(const TopoDS_Shape& theShape) ;


Standard_EXPORT static  TopoDS_Shape RelScale(const TopoDS_Shape& theShape,const gp_Pnt& thePnt,const Standard_Real theFact) ;


Standard_EXPORT static  TopoDS_Shape Scale(const TopoDS_Shape& theShape,const Standard_Real theFact) ;


Standard_EXPORT static  Handle_McCadCSGGeom_Surface MakeMcCadSurf(GeomAdaptor_Surface& theAdapSurface) ;


Standard_EXPORT static  Standard_Boolean ApproxGeomEqual(Handle(McCadCSGGeom_Surface)& S1,Handle(McCadCSGGeom_Surface)& S2) ;


Standard_EXPORT static  Standard_Boolean ApproxGeomEqualFaces(TopoDS_Face& F1,TopoDS_Face& F2,const Standard_Real theCFRes) ;


Standard_EXPORT static  Handle_McCadDiscDs_HSequenceOfDiscFace DeleteApproxRedundant(Handle(McCadDiscDs_HSequenceOfDiscFace)& theVCutFace,const Standard_Real theCFRes) ;


//!	Receives a Sequence containing to faces. DeleteOne checks if these <br>
//!	faces are the same but for the orientation. In that case, both <br>
//!	faces are identical and form an interface between two body parts. <br>
//!	One of these faces is deleted out of the Sequence, which is returned. <br>
Standard_EXPORT static  Handle_TopTools_HSequenceOfShape DeleteOne(Handle(TopTools_HSequenceOfShape)& theFaceSeq) ;


Standard_EXPORT static  Handle_TopTools_HSequenceOfShape ShellOrder(Handle(TopTools_HSequenceOfShape)& theFaceSeq,Handle(TopTools_HSequenceOfShape)& theSolidSeq) ;


Standard_EXPORT static  Standard_Boolean SignChanging(TopoDS_Solid& baseSolid,const McCadDiscDs_DiscFace& theVFace) ;


//!	Creates a half space. Therefor it requires an oriented face and <br>
//!	a Point that indicates on which side of the face the matter side <br>
//!	should be. <br>
Standard_EXPORT static  TopoDS_Shape MakeHalfSpace(TopoDS_Shape& aSolid, gp_Pnt& theLPnt, gp_Pnt& theUPnt) ;
Standard_EXPORT static  TopoDS_Shape MakeHalfSpace(TopoDS_Shape& aSolid) ;


Standard_EXPORT static  TopoDS_Shape MakeTrimmHalf(TopoDS_Shape& aSolid,TopoDS_Shape& aFace) ;


//!	Returns the State of the point that is tested to be IN the Solid. <br>
//!	Is called by MakeHalfSpace. <br>
Standard_EXPORT static  TopAbs_State PointState(const TopoDS_Shape& aShape,const gp_Pnt& aPnt) ;





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

friend class McCadMcVoid_Generator;
friend class McCadMcVoid_ForwardCollision;

};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif