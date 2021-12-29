#ifndef org_apache_lucene_document_LongPointMultiRangeBuilder_H
#define org_apache_lucene_document_LongPointMultiRangeBuilder_H

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

        class LongPointMultiRangeBuilder : public ::org::apache::lucene::search::MultiRangeQuery$Builder {
         public:
          enum {
            mid_init$_3fb1dae8d4037984,
            mid_add_872c99e98a9fe378,
            mid_build_03a96fdd31aca883,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongPointMultiRangeBuilder(jobject obj) : ::org::apache::lucene::search::MultiRangeQuery$Builder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongPointMultiRangeBuilder(const LongPointMultiRangeBuilder& obj) : ::org::apache::lucene::search::MultiRangeQuery$Builder(obj) {}

          LongPointMultiRangeBuilder(const ::java::lang::String &, jint);

          void add(const JArray< jlong > &, const JArray< jlong > &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongPointMultiRangeBuilder);
        extern PyTypeObject *PY_TYPE(LongPointMultiRangeBuilder);

        class t_LongPointMultiRangeBuilder {
        public:
          PyObject_HEAD
          LongPointMultiRangeBuilder object;
          static PyObject *wrap_Object(const LongPointMultiRangeBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
