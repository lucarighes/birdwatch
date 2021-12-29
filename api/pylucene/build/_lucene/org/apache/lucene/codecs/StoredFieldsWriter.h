#ifndef org_apache_lucene_codecs_StoredFieldsWriter_H
#define org_apache_lucene_codecs_StoredFieldsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableField;
        class FieldInfo;
        class MergeState;
        class FieldInfos;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class StoredFieldsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_finish_8a63e70a8b43ee48,
            mid_finishDocument_f2cc1bce94666404,
            mid_merge_6926471512b57791,
            mid_startDocument_f2cc1bce94666404,
            mid_writeField_c717cea83051791d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFieldsWriter(const StoredFieldsWriter& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
          void finishDocument() const;
          jint merge(const ::org::apache::lucene::index::MergeState &) const;
          void startDocument() const;
          void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::IndexableField &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(StoredFieldsWriter);
        extern PyTypeObject *PY_TYPE(StoredFieldsWriter);

        class t_StoredFieldsWriter {
        public:
          PyObject_HEAD
          StoredFieldsWriter object;
          static PyObject *wrap_Object(const StoredFieldsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
