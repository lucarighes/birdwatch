#ifndef org_apache_lucene_document_Field_H
#define org_apache_lucene_document_Field_H

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

        class Field : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4c8720e1ef1dbc95,
            mid_init$_46c2686701f65efb,
            mid_init$_e10586ac8ba012a6,
            mid_init$_9a31c991af7e77cf,
            mid_init$_f559723a5f833138,
            mid_init$_c49d824946c10069,
            mid_binaryValue_7af2ea2e37ce82b8,
            mid_fieldType_d8965a563fa0c725,
            mid_getCharSequenceValue_ba44900ab7d793b9,
            mid_name_db9b55ba01e03e4b,
            mid_numericValue_f5813404cc5e3a1e,
            mid_readerValue_cad8e490f39649d8,
            mid_setByteValue_9c36fec3bac1d0c7,
            mid_setBytesValue_9ffdf271836656c4,
            mid_setBytesValue_0bdfd2603b7490a8,
            mid_setDoubleValue_3c435f10a3b1e038,
            mid_setFloatValue_8e1d952dd65cdc3a,
            mid_setIntValue_040c4cd0390c5aff,
            mid_setLongValue_9c778c9bce6694df,
            mid_setReaderValue_b2f3c57f5e6eb3f2,
            mid_setShortValue_265bc0a0a1840315,
            mid_setStringValue_9fd2eb66a64e6f0f,
            mid_setTokenStream_c26756868a754f4e,
            mid_stringValue_db9b55ba01e03e4b,
            mid_toString_db9b55ba01e03e4b,
            mid_tokenStream_c1cd9ee6ce43641f,
            mid_tokenStreamValue_53a594dacf37f73d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Field(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Field(const Field& obj) : ::java::lang::Object(obj) {}

          Field(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::java::io::Reader &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::java::lang::CharSequence &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, jint, jint, const ::org::apache::lucene::index::IndexableFieldType &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          ::java::lang::CharSequence getCharSequenceValue() const;
          ::java::lang::String name() const;
          ::java::lang::Number numericValue() const;
          ::java::io::Reader readerValue() const;
          void setByteValue(jbyte) const;
          void setBytesValue(const JArray< jbyte > &) const;
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setFloatValue(jfloat) const;
          void setIntValue(jint) const;
          void setLongValue(jlong) const;
          void setReaderValue(const ::java::io::Reader &) const;
          void setShortValue(jshort) const;
          void setStringValue(const ::java::lang::String &) const;
          void setTokenStream(const ::org::apache::lucene::analysis::TokenStream &) const;
          ::java::lang::String stringValue() const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStreamValue() const;
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
        extern PyType_Def PY_TYPE_DEF(Field);
        extern PyTypeObject *PY_TYPE(Field);

        class t_Field {
        public:
          PyObject_HEAD
          Field object;
          static PyObject *wrap_Object(const Field&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
