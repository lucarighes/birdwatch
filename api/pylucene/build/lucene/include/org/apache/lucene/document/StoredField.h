#ifndef org_apache_lucene_document_StoredField_H
#define org_apache_lucene_document_StoredField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class FieldType;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class StoredField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_f9c66fdb7b238fc6,
            mid_init$_15b72f6a44ff93f2,
            mid_init$_63a59e248b245c2c,
            mid_init$_b5c6442be7f92276,
            mid_init$_2cd52353fae0bd4a,
            mid_init$_3fb1dae8d4037984,
            mid_init$_0084e2c6585d8c01,
            mid_init$_0e2fcad016ecc096,
            mid_init$_0e3b6f828026d6c9,
            mid_init$_066427170eca178a,
            mid_init$_023d0fa4fd9338e4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredField(const StoredField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          StoredField(const ::java::lang::String &, const JArray< jbyte > &);
          StoredField(const ::java::lang::String &, const ::java::lang::String &);
          StoredField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          StoredField(const ::java::lang::String &, jdouble);
          StoredField(const ::java::lang::String &, jfloat);
          StoredField(const ::java::lang::String &, jint);
          StoredField(const ::java::lang::String &, jlong);
          StoredField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const ::java::lang::CharSequence &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const JArray< jbyte > &, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(StoredField);
        extern PyTypeObject *PY_TYPE(StoredField);

        class t_StoredField {
        public:
          PyObject_HEAD
          StoredField object;
          static PyObject *wrap_Object(const StoredField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
