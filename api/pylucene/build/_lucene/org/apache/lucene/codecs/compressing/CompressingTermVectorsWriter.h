#ifndef org_apache_lucene_codecs_compressing_CompressingTermVectorsWriter_H
#define org_apache_lucene_codecs_compressing_CompressingTermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {

          class CompressingTermVectorsWriter : public ::org::apache::lucene::codecs::TermVectorsWriter {
           public:
            enum {
              mid_addPosition_fcc26e8860ce5755,
              mid_addProx_6f7770ea4ff78a67,
              mid_close_f2cc1bce94666404,
              mid_finish_8a63e70a8b43ee48,
              mid_finishDocument_f2cc1bce94666404,
              mid_finishField_f2cc1bce94666404,
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_merge_6926471512b57791,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_startDocument_040c4cd0390c5aff,
              mid_startField_5f83540baaace30d,
              mid_startTerm_327a6f4e8624d9f4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressingTermVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompressingTermVectorsWriter(const CompressingTermVectorsWriter& obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {}

            void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
            void close() const;
            void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
            void finishDocument() const;
            void finishField() const;
            ::java::util::Collection getChildResources() const;
            jint merge(const ::org::apache::lucene::index::MergeState &) const;
            jlong ramBytesUsed() const;
            void startDocument(jint) const;
            void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
            void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {
          extern PyType_Def PY_TYPE_DEF(CompressingTermVectorsWriter);
          extern PyTypeObject *PY_TYPE(CompressingTermVectorsWriter);

          class t_CompressingTermVectorsWriter {
          public:
            PyObject_HEAD
            CompressingTermVectorsWriter object;
            static PyObject *wrap_Object(const CompressingTermVectorsWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
