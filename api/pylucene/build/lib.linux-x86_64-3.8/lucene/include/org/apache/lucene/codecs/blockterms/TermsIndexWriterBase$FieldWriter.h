#ifndef org_apache_lucene_codecs_blockterms_TermsIndexWriterBase$FieldWriter_H
#define org_apache_lucene_codecs_blockterms_TermsIndexWriterBase$FieldWriter_H

#include "java/lang/Object.h"

namespace java {
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
      namespace codecs {
        namespace blockterms {
          class TermsIndexWriterBase;
        }
        class TermStats;
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
      namespace codecs {
        namespace blockterms {

          class TermsIndexWriterBase$FieldWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8e68a4bc15bece83,
              mid_add_b1bd8a4020ad07a2,
              mid_checkIndexTerm_b105bc98075287ea,
              mid_finish_9c778c9bce6694df,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermsIndexWriterBase$FieldWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermsIndexWriterBase$FieldWriter(const TermsIndexWriterBase$FieldWriter& obj) : ::java::lang::Object(obj) {}

            TermsIndexWriterBase$FieldWriter(const ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase &);

            void add(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::codecs::TermStats &, jlong) const;
            jboolean checkIndexTerm(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::codecs::TermStats &) const;
            void finish(jlong) const;
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
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(TermsIndexWriterBase$FieldWriter);
          extern PyTypeObject *PY_TYPE(TermsIndexWriterBase$FieldWriter);

          class t_TermsIndexWriterBase$FieldWriter {
          public:
            PyObject_HEAD
            TermsIndexWriterBase$FieldWriter object;
            static PyObject *wrap_Object(const TermsIndexWriterBase$FieldWriter&);
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
