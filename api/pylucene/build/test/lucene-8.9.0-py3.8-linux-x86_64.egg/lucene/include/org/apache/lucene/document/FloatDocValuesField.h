#ifndef org_apache_lucene_document_FloatDocValuesField_H
#define org_apache_lucene_document_FloatDocValuesField_H

#include "org/apache/lucene/document/NumericDocValuesField.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class FloatDocValuesField : public ::org::apache::lucene::document::NumericDocValuesField {
         public:
          enum {
            mid_init$_2cd52353fae0bd4a,
            mid_setFloatValue_8e1d952dd65cdc3a,
            mid_setLongValue_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatDocValuesField(jobject obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatDocValuesField(const FloatDocValuesField& obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {}

          FloatDocValuesField(const ::java::lang::String &, jfloat);

          void setFloatValue(jfloat) const;
          void setLongValue(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(FloatDocValuesField);
        extern PyTypeObject *PY_TYPE(FloatDocValuesField);

        class t_FloatDocValuesField {
        public:
          PyObject_HEAD
          FloatDocValuesField object;
          static PyObject *wrap_Object(const FloatDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
