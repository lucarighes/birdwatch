#ifndef org_apache_lucene_document_IntPointMultiRangeBuilder_H
#define org_apache_lucene_document_IntPointMultiRangeBuilder_H

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

        class IntPointMultiRangeBuilder : public ::org::apache::lucene::search::MultiRangeQuery$Builder {
         public:
          enum {
            mid_init$_3fb1dae8d4037984,
            mid_add_cab3080081e127d8,
            mid_build_03a96fdd31aca883,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntPointMultiRangeBuilder(jobject obj) : ::org::apache::lucene::search::MultiRangeQuery$Builder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntPointMultiRangeBuilder(const IntPointMultiRangeBuilder& obj) : ::org::apache::lucene::search::MultiRangeQuery$Builder(obj) {}

          IntPointMultiRangeBuilder(const ::java::lang::String &, jint);

          void add(const JArray< jint > &, const JArray< jint > &) const;
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
        extern PyType_Def PY_TYPE_DEF(IntPointMultiRangeBuilder);
        extern PyTypeObject *PY_TYPE(IntPointMultiRangeBuilder);

        class t_IntPointMultiRangeBuilder {
        public:
          PyObject_HEAD
          IntPointMultiRangeBuilder object;
          static PyObject *wrap_Object(const IntPointMultiRangeBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
