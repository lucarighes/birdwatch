#ifndef org_apache_lucene_document_DoublePointMultiRangeBuilder_H
#define org_apache_lucene_document_DoublePointMultiRangeBuilder_H

#include "org/apache/lucene/search/MultiRangeQuery$Builder.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiRangeQuery;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DoublePointMultiRangeBuilder : public ::org::apache::lucene::search::MultiRangeQuery$Builder {
         public:
          enum {
            mid_init$_3fb1dae8d4037984,
            mid_add_1d56dd1258093787,
            mid_build_03a96fdd31aca883,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoublePointMultiRangeBuilder(jobject obj) : ::org::apache::lucene::search::MultiRangeQuery$Builder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoublePointMultiRangeBuilder(const DoublePointMultiRangeBuilder& obj) : ::org::apache::lucene::search::MultiRangeQuery$Builder(obj) {}

          DoublePointMultiRangeBuilder(const ::java::lang::String &, jint);

          void add(const JArray< jdouble > &, const JArray< jdouble > &) const;
          ::org::apache::lucene::search::MultiRangeQuery build() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(DoublePointMultiRangeBuilder);
        extern PyTypeObject *PY_TYPE(DoublePointMultiRangeBuilder);

        class t_DoublePointMultiRangeBuilder {
        public:
          PyObject_HEAD
          DoublePointMultiRangeBuilder object;
          static PyObject *wrap_Object(const DoublePointMultiRangeBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
