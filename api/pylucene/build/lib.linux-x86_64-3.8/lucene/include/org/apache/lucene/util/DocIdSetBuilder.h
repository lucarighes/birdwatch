#ifndef org_apache_lucene_util_DocIdSetBuilder_H
#define org_apache_lucene_util_DocIdSetBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class PointValues;
      }
      namespace search {
        class DocIdSet;
        class DocIdSetIterator;
      }
      namespace util {
        class DocIdSetBuilder$BulkAdder;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class DocIdSetBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_init$_7a78e87a8da4ff32,
            mid_init$_db1e851432c269c2,
            mid_add_da04cf8efc6499af,
            mid_build_854971ef3f8dbb19,
            mid_grow_1cc82bccfcad94a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSetBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdSetBuilder(const DocIdSetBuilder& obj) : ::java::lang::Object(obj) {}

          DocIdSetBuilder(jint);
          DocIdSetBuilder(jint, const ::org::apache::lucene::index::Terms &);
          DocIdSetBuilder(jint, const ::org::apache::lucene::index::PointValues &, const ::java::lang::String &);

          void add(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          ::org::apache::lucene::search::DocIdSet build() const;
          ::org::apache::lucene::util::DocIdSetBuilder$BulkAdder grow(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(DocIdSetBuilder);
        extern PyTypeObject *PY_TYPE(DocIdSetBuilder);

        class t_DocIdSetBuilder {
        public:
          PyObject_HEAD
          DocIdSetBuilder object;
          static PyObject *wrap_Object(const DocIdSetBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
