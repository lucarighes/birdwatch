#ifndef org_apache_lucene_index_LeafMetaData_H
#define org_apache_lucene_index_LeafMetaData_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
      }
      namespace util {
        class Version;
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
      namespace index {

        class LeafMetaData : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0997e1804de63edc,
            mid_getCreatedVersionMajor_9972fcc56b44e79d,
            mid_getMinVersion_6b68647131bbda98,
            mid_getSort_f58d0196b42aaee4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafMetaData(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafMetaData(const LeafMetaData& obj) : ::java::lang::Object(obj) {}

          LeafMetaData(jint, const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::search::Sort &);

          jint getCreatedVersionMajor() const;
          ::org::apache::lucene::util::Version getMinVersion() const;
          ::org::apache::lucene::search::Sort getSort() const;
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
        extern PyType_Def PY_TYPE_DEF(LeafMetaData);
        extern PyTypeObject *PY_TYPE(LeafMetaData);

        class t_LeafMetaData {
        public:
          PyObject_HEAD
          LeafMetaData object;
          static PyObject *wrap_Object(const LeafMetaData&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
