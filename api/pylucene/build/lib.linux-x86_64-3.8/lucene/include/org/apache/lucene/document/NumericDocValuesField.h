#ifndef org_apache_lucene_document_NumericDocValuesField_H
#define org_apache_lucene_document_NumericDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Long;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class FieldType;
      }
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class NumericDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_42bd00c01368bbf8,
            mid_init$_0084e2c6585d8c01,
            mid_newSlowExactQuery_e80322a2f14dee9e,
            mid_newSlowRangeQuery_fea81632216932e2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NumericDocValuesField(const NumericDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          NumericDocValuesField(const ::java::lang::String &, const ::java::lang::Long &);
          NumericDocValuesField(const ::java::lang::String &, jlong);

          static ::org::apache::lucene::search::Query newSlowExactQuery(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newSlowRangeQuery(const ::java::lang::String &, jlong, jlong);
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
        extern PyType_Def PY_TYPE_DEF(NumericDocValuesField);
        extern PyTypeObject *PY_TYPE(NumericDocValuesField);

        class t_NumericDocValuesField {
        public:
          PyObject_HEAD
          NumericDocValuesField object;
          static PyObject *wrap_Object(const NumericDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
