#ifndef org_apache_lucene_codecs_TermVectorsWriter_H
#define org_apache_lucene_codecs_TermVectorsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
        class MergeState;
        class FieldInfos;
      }
      namespace store {
        class DataInput;
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

        class TermVectorsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_addPosition_fcc26e8860ce5755,
            mid_addProx_6f7770ea4ff78a67,
            mid_close_f2cc1bce94666404,
            mid_finish_8a63e70a8b43ee48,
            mid_finishDocument_f2cc1bce94666404,
            mid_finishField_f2cc1bce94666404,
            mid_finishTerm_f2cc1bce94666404,
            mid_merge_6926471512b57791,
            mid_startDocument_040c4cd0390c5aff,
            mid_startField_5f83540baaace30d,
            mid_startTerm_327a6f4e8624d9f4,
            mid_addAllDocVectors_5d6f9936739d2ebb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermVectorsWriter(const TermVectorsWriter& obj) : ::java::lang::Object(obj) {}

          void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
          void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
          void close() const;
          void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
          void finishDocument() const;
          void finishField() const;
          void finishTerm() const;
          jint merge(const ::org::apache::lucene::index::MergeState &) const;
          void startDocument(jint) const;
          void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
          void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(TermVectorsWriter);
        extern PyTypeObject *PY_TYPE(TermVectorsWriter);

        class t_TermVectorsWriter {
        public:
          PyObject_HEAD
          TermVectorsWriter object;
          static PyObject *wrap_Object(const TermVectorsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
