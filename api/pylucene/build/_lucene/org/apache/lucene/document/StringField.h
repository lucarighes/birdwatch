#ifndef org_apache_lucene_document_StringField_H
#define org_apache_lucene_document_StringField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class FieldType;
        class Field$Store;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class StringField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_d8dbec042659cb47,
            mid_init$_0501fe8d136bd62e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringField(const StringField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_NOT_STORED;
          static ::org::apache::lucene::document::FieldType *TYPE_STORED;

          StringField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::Field$Store &);
          StringField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::document::Field$Store &);
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
        extern PyType_Def PY_TYPE_DEF(StringField);
        extern PyTypeObject *PY_TYPE(StringField);

        class t_StringField {
        public:
          PyObject_HEAD
          StringField object;
          static PyObject *wrap_Object(const StringField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
