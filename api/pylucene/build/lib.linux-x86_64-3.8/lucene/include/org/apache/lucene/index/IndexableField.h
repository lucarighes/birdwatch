#ifndef org_apache_lucene_index_IndexableField_H
#define org_apache_lucene_index_IndexableField_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
    class String;
    class CharSequence;
  }
  namespace io {
    class Reader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class IndexableFieldType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexableField : public ::java::lang::Object {
         public:
          enum {
            mid_binaryValue_7af2ea2e37ce82b8,
            mid_fieldType_d8965a563fa0c725,
            mid_getCharSequenceValue_ba44900ab7d793b9,
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

          explicit IndexableField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexableField(const IndexableField& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          ::java::lang::CharSequence getCharSequenceValue() const;
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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexableField);
        extern PyTypeObject *PY_TYPE(IndexableField);

        class t_IndexableField {
        public:
          PyObject_HEAD
          IndexableField object;
          static PyObject *wrap_Object(const IndexableField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
