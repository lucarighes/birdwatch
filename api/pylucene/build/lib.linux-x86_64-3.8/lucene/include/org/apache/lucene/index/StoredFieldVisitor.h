#ifndef org_apache_lucene_index_StoredFieldVisitor_H
#define org_apache_lucene_index_StoredFieldVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor$Status;
        class FieldInfo;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class StoredFieldVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_binaryField_1d4795e4721fd31d,
            mid_doubleField_a30e01309dcb244d,
            mid_floatField_f28d86c39f09c45a,
            mid_intField_59b56ee38a8bb555,
            mid_longField_51ea8ae5f60c6fae,
            mid_needsField_6afb8838461a3a79,
            mid_stringField_1d4795e4721fd31d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFieldVisitor(const StoredFieldVisitor& obj) : ::java::lang::Object(obj) {}

          void binaryField(const ::org::apache::lucene::index::FieldInfo &, const JArray< jbyte > &) const;
          void doubleField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
          void floatField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
          void intField(const ::org::apache::lucene::index::FieldInfo &, jint) const;
          void longField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
          ::org::apache::lucene::index::StoredFieldVisitor$Status needsField(const ::org::apache::lucene::index::FieldInfo &) const;
          void stringField(const ::org::apache::lucene::index::FieldInfo &, const JArray< jbyte > &) const;
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
        extern PyType_Def PY_TYPE_DEF(StoredFieldVisitor);
        extern PyTypeObject *PY_TYPE(StoredFieldVisitor);

        class t_StoredFieldVisitor {
        public:
          PyObject_HEAD
          StoredFieldVisitor object;
          static PyObject *wrap_Object(const StoredFieldVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
