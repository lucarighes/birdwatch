#ifndef org_apache_lucene_document_Document_H
#define org_apache_lucene_document_Document_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableField;
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
    class Iterable;
    class String;
  }
  namespace util {
    class Iterator;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class Document : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_add_6ebcd75dd680ded9,
            mid_clear_f2cc1bce94666404,
            mid_get_9bfa75c9f141b67f,
            mid_getBinaryValue_29a6127792bdfe91,
            mid_getBinaryValues_53172187d6bf2b69,
            mid_getField_e251e299bb4c419b,
            mid_getFields_49ec78390f08338a,
            mid_getFields_a88868a017442168,
            mid_getValues_1606e23a23a4a8e5,
            mid_iterator_233a192dadb0917d,
            mid_removeField_9fd2eb66a64e6f0f,
            mid_removeFields_9fd2eb66a64e6f0f,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Document(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Document(const Document& obj) : ::java::lang::Object(obj) {}

          Document();

          void add(const ::org::apache::lucene::index::IndexableField &) const;
          void clear() const;
          ::java::lang::String get(const ::java::lang::String &) const;
          ::org::apache::lucene::util::BytesRef getBinaryValue(const ::java::lang::String &) const;
          JArray< ::org::apache::lucene::util::BytesRef > getBinaryValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexableField getField(const ::java::lang::String &) const;
          ::java::util::List getFields() const;
          JArray< ::org::apache::lucene::index::IndexableField > getFields(const ::java::lang::String &) const;
          JArray< ::java::lang::String > getValues(const ::java::lang::String &) const;
          ::java::util::Iterator iterator() const;
          void removeField(const ::java::lang::String &) const;
          void removeFields(const ::java::lang::String &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(Document);
        extern PyTypeObject *PY_TYPE(Document);

        class t_Document {
        public:
          PyObject_HEAD
          Document object;
          static PyObject *wrap_Object(const Document&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
