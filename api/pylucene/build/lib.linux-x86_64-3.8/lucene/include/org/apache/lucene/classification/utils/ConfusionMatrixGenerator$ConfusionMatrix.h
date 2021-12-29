#ifndef org_apache_lucene_classification_utils_ConfusionMatrixGenerator$ConfusionMatrix_H
#define org_apache_lucene_classification_utils_ConfusionMatrixGenerator$ConfusionMatrix_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Long;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {

          class ConfusionMatrixGenerator$ConfusionMatrix : public ::java::lang::Object {
           public:
            enum {
              mid_getAccuracy_8c74b787998ce4bc,
              mid_getAvgClassificationTime_8c74b787998ce4bc,
              mid_getF1Measure_8c74b787998ce4bc,
              mid_getF1Measure_2bbda5860f5f88e3,
              mid_getLinearizedMatrix_1c3426541413a55d,
              mid_getNumberOfEvaluatedDocs_9972fcc56b44e79d,
              mid_getPrecision_8c74b787998ce4bc,
              mid_getPrecision_2bbda5860f5f88e3,
              mid_getRecall_8c74b787998ce4bc,
              mid_getRecall_2bbda5860f5f88e3,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConfusionMatrixGenerator$ConfusionMatrix(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConfusionMatrixGenerator$ConfusionMatrix(const ConfusionMatrixGenerator$ConfusionMatrix& obj) : ::java::lang::Object(obj) {}

            jdouble getAccuracy() const;
            jdouble getAvgClassificationTime() const;
            jdouble getF1Measure() const;
            jdouble getF1Measure(const ::java::lang::String &) const;
            ::java::util::Map getLinearizedMatrix() const;
            jint getNumberOfEvaluatedDocs() const;
            jdouble getPrecision() const;
            jdouble getPrecision(const ::java::lang::String &) const;
            jdouble getRecall() const;
            jdouble getRecall(const ::java::lang::String &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(ConfusionMatrixGenerator$ConfusionMatrix);
          extern PyTypeObject *PY_TYPE(ConfusionMatrixGenerator$ConfusionMatrix);

          class t_ConfusionMatrixGenerator$ConfusionMatrix {
          public:
            PyObject_HEAD
            ConfusionMatrixGenerator$ConfusionMatrix object;
            static PyObject *wrap_Object(const ConfusionMatrixGenerator$ConfusionMatrix&);
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
