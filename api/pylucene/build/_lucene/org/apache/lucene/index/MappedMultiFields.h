#ifndef org_apache_lucene_index_MappedMultiFields_H
#define org_apache_lucene_index_MappedMultiFields_H

#include "org/apache/lucene/index/FilterLeafReader$FilterFields.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class MultiFields;
        class MergeState;
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
      namespace index {

        class MappedMultiFields : public ::org::apache::lucene::index::FilterLeafReader$FilterFields {
         public:
          enum {
            mid_init$_aa917a5d70b7ffc3,
            mid_terms_3976802ad88273cd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MappedMultiFields(jobject obj) : ::org::apache::lucene::index::FilterLeafReader$FilterFields(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MappedMultiFields(const MappedMultiFields& obj) : ::org::apache::lucene::index::FilterLeafReader$FilterFields(obj) {}

          MappedMultiFields(const ::org::apache::lucene::index::MergeState &, const ::org::apache::lucene::index::MultiFields &);

          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(MappedMultiFields);
        extern PyTypeObject *PY_TYPE(MappedMultiFields);

        class t_MappedMultiFields {
        public:
          PyObject_HEAD
          MappedMultiFields object;
          static PyObject *wrap_Object(const MappedMultiFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
