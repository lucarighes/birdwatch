#ifndef org_apache_lucene_classification_utils_DocToDoubleVectorUtils_H
#define org_apache_lucene_classification_utils_DocToDoubleVectorUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Double;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {

          class DocToDoubleVectorUtils : public ::java::lang::Object {
           public:
            enum {
              mid_toDenseLocalFreqDoubleArray_0a754fcf79caa770,
              mid_toSparseLocalFreqDoubleArray_bfa3ce1b9cd680f1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocToDoubleVectorUtils(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocToDoubleVectorUtils(const DocToDoubleVectorUtils& obj) : ::java::lang::Object(obj) {}

            static JArray< ::java::lang::Double > toDenseLocalFreqDoubleArray(const ::org::apache::lucene::index::Terms &);
            static JArray< ::java::lang::Double > toSparseLocalFreqDoubleArray(const ::org::apache::lucene::index::Terms &, const ::org::apache::lucene::index::Terms &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(DocToDoubleVectorUtils);
          extern PyTypeObject *PY_TYPE(DocToDoubleVectorUtils);

          class t_DocToDoubleVectorUtils {
          public:
            PyObject_HEAD
            DocToDoubleVectorUtils object;
            static PyObject *wrap_Object(const DocToDoubleVectorUtils&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
