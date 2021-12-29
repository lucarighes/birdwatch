#ifndef org_apache_lucene_document_DocumentStoredFieldVisitor_H
#define org_apache_lucene_document_DocumentStoredFieldVisitor_H

#include "org/apache/lucene/index/StoredFieldVisitor.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor$Status;
        class FieldInfo;
      }
      namespace document {
        class Document;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DocumentStoredFieldVisitor : public ::org::apache::lucene::index::StoredFieldVisitor {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_2fc318b999a7aba3,
            mid_init$_d5a4a8d4b806f0ba,
            mid_binaryField_1d4795e4721fd31d,
            mid_doubleField_a30e01309dcb244d,
            mid_floatField_f28d86c39f09c45a,
            mid_getDocument_0a6ca5ba77e91d76,
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

          explicit DocumentStoredFieldVisitor(jobject obj) : ::org::apache::lucene::index::StoredFieldVisitor(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocumentStoredFieldVisitor(const DocumentStoredFieldVisitor& obj) : ::org::apache::lucene::index::StoredFieldVisitor(obj) {}

          DocumentStoredFieldVisitor();
          DocumentStoredFieldVisitor(const JArray< ::java::lang::String > &);
          DocumentStoredFieldVisitor(const ::java::util::Set &);

          void binaryField(const ::org::apache::lucene::index::FieldInfo &, const JArray< jbyte > &) const;
          void doubleField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
          void floatField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
          ::org::apache::lucene::document::Document getDocument() const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(DocumentStoredFieldVisitor);
        extern PyTypeObject *PY_TYPE(DocumentStoredFieldVisitor);

        class t_DocumentStoredFieldVisitor {
        public:
          PyObject_HEAD
          DocumentStoredFieldVisitor object;
          static PyObject *wrap_Object(const DocumentStoredFieldVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
