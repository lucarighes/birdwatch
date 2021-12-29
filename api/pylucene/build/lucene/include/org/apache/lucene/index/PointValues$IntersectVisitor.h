#ifndef org_apache_lucene_index_PointValues$IntersectVisitor_H
#define org_apache_lucene_index_PointValues$IntersectVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$Relation;
      }
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PointValues$IntersectVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_compare_7b8ae5aa66accb0b,
            mid_grow_040c4cd0390c5aff,
            mid_visit_040c4cd0390c5aff,
            mid_visit_d5eb38abec56f5d8,
            mid_visit_0ff3bfb1ed512144,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointValues$IntersectVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointValues$IntersectVisitor(const PointValues$IntersectVisitor& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::PointValues$Relation compare(const JArray< jbyte > &, const JArray< jbyte > &) const;
          void grow(jint) const;
          void visit(jint) const;
          void visit(const ::org::apache::lucene::search::DocIdSetIterator &, const JArray< jbyte > &) const;
          void visit(jint, const JArray< jbyte > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PointValues$IntersectVisitor);
        extern PyTypeObject *PY_TYPE(PointValues$IntersectVisitor);

        class t_PointValues$IntersectVisitor {
        public:
          PyObject_HEAD
          PointValues$IntersectVisitor object;
          static PyObject *wrap_Object(const PointValues$IntersectVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
