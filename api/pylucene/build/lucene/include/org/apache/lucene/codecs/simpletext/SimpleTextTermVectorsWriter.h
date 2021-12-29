#ifndef org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsWriter_H
#define org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
        class FieldInfos;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextTermVectorsWriter : public ::org::apache::lucene::codecs::TermVectorsWriter {
           public:
            enum {
              mid_init$_2bb5442de459a81e,
              mid_addPosition_fcc26e8860ce5755,
              mid_close_f2cc1bce94666404,
              mid_finish_8a63e70a8b43ee48,
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

            explicit SimpleTextTermVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextTermVectorsWriter(const SimpleTextTermVectorsWriter& obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {}

            SimpleTextTermVectorsWriter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);

            void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            void close() const;
            void finish(const ::org::apache::lucene::index::FieldInfos &, jint) const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextTermVectorsWriter);
          extern PyTypeObject *PY_TYPE(SimpleTextTermVectorsWriter);

          class t_SimpleTextTermVectorsWriter {
          public:
            PyObject_HEAD
            SimpleTextTermVectorsWriter object;
            static PyObject *wrap_Object(const SimpleTextTermVectorsWriter&);
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
