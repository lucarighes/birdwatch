#ifndef org_apache_lucene_classification_utils_ConfusionMatrixGenerator_H
#define org_apache_lucene_classification_utils_ConfusionMatrixGenerator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace classification {
        class Classifier;
        namespace utils {
          class ConfusionMatrixGenerator$ConfusionMatrix;
        }
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
      namespace classification {
        namespace utils {

          class ConfusionMatrixGenerator : public ::java::lang::Object {
           public:
            enum {
              mid_getConfusionMatrix_64efcc6f06efac1b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConfusionMatrixGenerator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConfusionMatrixGenerator(const ConfusionMatrixGenerator& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::classification::utils::ConfusionMatrixGenerator$ConfusionMatrix getConfusionMatrix(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::classification::Classifier &, const ::java::lang::String &, const ::java::lang::String &, jlong);
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
          extern PyType_Def PY_TYPE_DEF(ConfusionMatrixGenerator);
          extern PyTypeObject *PY_TYPE(ConfusionMatrixGenerator);

          class t_ConfusionMatrixGenerator {
          public:
            PyObject_HEAD
            ConfusionMatrixGenerator object;
            static PyObject *wrap_Object(const ConfusionMatrixGenerator&);
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
