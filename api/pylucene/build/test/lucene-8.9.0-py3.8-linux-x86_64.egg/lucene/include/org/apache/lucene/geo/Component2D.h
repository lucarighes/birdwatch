#ifndef org_apache_lucene_geo_Component2D_H
#define org_apache_lucene_geo_Component2D_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$Relation;
      }
      namespace geo {
        class Component2D$WithinRelation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Component2D : public ::java::lang::Object {
         public:
          enum {
            mid_contains_c5da2349848862f7,
            mid_containsLine_490d58c41f66a94c,
            mid_containsLine_d68abb61fe1c2fa4,
            mid_containsPoint_c4e087cb1201d3d4,
            mid_containsTriangle_c4e087cb1201d3d4,
            mid_containsTriangle_ac6ecbf4107b80ff,
            mid_disjoint_d68abb61fe1c2fa4,
            mid_getMaxX_8c74b787998ce4bc,
            mid_getMaxY_8c74b787998ce4bc,
            mid_getMinX_8c74b787998ce4bc,
            mid_getMinY_8c74b787998ce4bc,
            mid_intersectsLine_490d58c41f66a94c,
            mid_intersectsLine_d68abb61fe1c2fa4,
            mid_intersectsTriangle_c4e087cb1201d3d4,
            mid_intersectsTriangle_ac6ecbf4107b80ff,
            mid_pointInTriangle_a1a5b5918cc33dd3,
            mid_relate_0325fa8b50a50d2b,
            mid_within_d68abb61fe1c2fa4,
            mid_withinLine_423ee5a7474e9a1b,
            mid_withinLine_9d1683957e79a4ae,
            mid_withinPoint_c29194da566ddf92,
            mid_withinTriangle_41c692351edcf15d,
            mid_withinTriangle_6d97262238ccd495,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Component2D(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Component2D(const Component2D& obj) : ::java::lang::Object(obj) {}

          jboolean contains(jdouble, jdouble) const;
          jboolean containsLine(jdouble, jdouble, jdouble, jdouble) const;
          jboolean containsLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean containsPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jboolean containsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean containsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean disjoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jdouble getMaxX() const;
          jdouble getMaxY() const;
          jdouble getMinX() const;
          jdouble getMinY() const;
          jboolean intersectsLine(jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean pointInTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          ::org::apache::lucene::index::PointValues$Relation relate(jdouble, jdouble, jdouble, jdouble) const;
          static jboolean within(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          ::org::apache::lucene::geo::Component2D$WithinRelation withinLine(jdouble, jdouble, jboolean, jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinPoint(jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinTriangle(jdouble, jdouble, jboolean, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Component2D);
        extern PyTypeObject *PY_TYPE(Component2D);

        class t_Component2D {
        public:
          PyObject_HEAD
          Component2D object;
          static PyObject *wrap_Object(const Component2D&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
