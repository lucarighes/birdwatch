#ifndef org_apache_lucene_document_LazyDocument$LazyField_H
#define org_apache_lucene_document_LazyDocument$LazyField_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
    class String;
  }
  namespace io {
    class Reader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableField;
        class IndexableFieldType;
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class LazyDocument$LazyField : public ::java::lang::Object {
         public:
          enum {
            mid_binaryValue_7af2ea2e37ce82b8,
            mid_fieldType_d8965a563fa0c725,
            mid_hasBeenLoaded_8454bd5aa23fd11e,
            mid_name_db9b55ba01e03e4b,
            mid_numericValue_f5813404cc5e3a1e,
            mid_readerValue_cad8e490f39649d8,
            mid_stringValue_db9b55ba01e03e4b,
            mid_tokenStream_c1cd9ee6ce43641f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LazyDocument$LazyField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LazyDocument$LazyField(const LazyDocument$LazyField& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          jboolean hasBeenLoaded() const;
          ::java::lang::String name() const;
          ::java::lang::Number numericValue() const;
          ::java::io::Reader readerValue() const;
          ::java::lang::String stringValue() const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(LazyDocument$LazyField);
        extern PyTypeObject *PY_TYPE(LazyDocument$LazyField);

        class t_LazyDocument$LazyField {
        public:
          PyObject_HEAD
          LazyDocument$LazyField object;
          static PyObject *wrap_Object(const LazyDocument$LazyField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
